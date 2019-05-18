#ifndef JUICYC_STATUS_H_
#define JUICYC_STATUS_H_

#include <string>
#include <cassert>
#include <iostream>
#include <ostream>

namespace juicyc {

// carry exception
class Status {
 public:
  // Create a success status.
  Status() : state_(NULL) { }
  ~Status() { delete[] state_; }

  // Copy the specified status.
  Status(const Status& s);
  Status(Status&& s);
  void operator=(const Status& s);

  // Return a success status.
  static Status OK() { return Status(); }

  // Return error status of an appropriate type.
  static Status NotFound(const std::string& msg, const std::string& msg2 = std::string()) {
    return Status(kNotFound, msg, msg2);
  }
  static Status Corruption(const std::string& msg, const std::string& msg2 = std::string()) {
    return Status(kCorruption, msg, msg2);
  }
  static Status NotSupported(const std::string& msg, const std::string& msg2 = std::string()) {
    return Status(kNotSupported, msg, msg2);
  }
  static Status InvalidArgument(const std::string& msg, const std::string& msg2 = std::string()) {
    return Status(kInvalidArgument, msg, msg2);
  }
  static Status IOError(const std::string& msg, const std::string& msg2 = std::string()) {
    return Status(kIOError, msg, msg2);
  }

  // Returns true iff the status indicates success.
  bool ok() const { return (state_ == NULL); }

  // Returns true iff the status indicates a NotFound error.
  bool IsNotFound() const { return code() == kNotFound; }

  // Returns true iff the status indicates a Corruption error.
  bool IsCorruption() const { return code() == kCorruption; }

  // Returns true iff the status indicates an IOError.
  bool IsIOError() const { return code() == kIOError; }

  // Returns true iff the status indicates a NotSupportedError.
  bool IsNotSupportedError() const { return code() == kNotSupported; }

  // Returns true iff the status indicates an InvalidArgument.
  bool IsInvalidArgument() const { return code() == kInvalidArgument; }

  // for Debug
  bool inspect(std::ostream& os = std::cout) const {
    if(state_ != NULL) os << ToString() << std::endl;
    return state_ == NULL;
  }

  Status& operator*=(const Status& rhs) {
    if(!ok() || rhs.ok()) return (*this); // override
    (*this) = rhs;
    return (*this);
  }

  // Return a string representation of this status suitable for printing.
  // Returns the string "OK" for success.
  std::string ToString() const{
    if (state_ == NULL) {
      return "OK";
    } else {
      char tmp[30];
      const char* type;
      switch (code()) {
        case kOk:
          type = "OK";
          break;
        case kNotFound:
          type = "NotFound: ";
          break;
        case kCorruption:
          type = "Corruption: ";
          break;
        case kNotSupported:
          type = "Not implemented: ";
          break;
        case kInvalidArgument:
          type = "Invalid argument: ";
          break;
        case kIOError:
          type = "IO error: ";
          break;
        default:
          snprintf(tmp, sizeof(tmp), "Unknown code(%d): ",
                   static_cast<int>(code()));
          type = tmp;
          break;
      }
      std::string result(type);
      uint32_t length;
      memcpy(&length, state_, sizeof(length));
      result.append(state_ + 5, length);
      return result;
    }
  }

 protected:
  // OK status has a NULL state_.  Otherwise, state_ is a new[] array
  // of the following form:
  //    state_[0..3] == length of message
  //    state_[4]    == code
  //    state_[5..]  == message
  const char* state_;

  enum Code {
    kOk = 0,
    kNotFound = 1,
    kCorruption = 2,
    kNotSupported = 3,
    kInvalidArgument = 4,
    kIOError = 5
  };

  Code code() const {
    return (state_ == NULL) ? kOk : static_cast<Code>(state_[4]);
  }

  Status(Code code, const std::string& msg, const std::string& msg2){
    assert(code != kOk);
    const uint32_t len1 = msg.size();
    const uint32_t len2 = msg2.size();
    const uint32_t size = len1 + (len2 ? (2 + len2) : 0);
    char* result = new char[size + 5];
    memcpy(result, &size, sizeof(size));
    result[4] = static_cast<char>(code);
    memcpy(result + 5, msg.c_str(), len1);
    if (len2) {
      result[5 + len1] = ':';
      result[6 + len1] = ' ';
      memcpy(result + 7 + len1, msg2.c_str(), len2);
    }
    state_ = result;
  }
  static const char* CopyState(const char* state){
    uint32_t size;
    memcpy(&size, state, sizeof(size));
    char* result = new char[size + 5];
    memcpy(result, state, size + 5);
    return result;
  }
};

inline Status::Status(const Status& s) {
  state_ = (s.state_ == NULL) ? NULL : CopyState(s.state_);
}
inline Status::Status(Status&& s) {
  state_ = (s.state_ == NULL) ? NULL : CopyState(s.state_);
}
inline void Status::operator=(const Status& s) {
  // The following condition catches both aliasing (when this == &s),
  // and the common case where both s and *this are ok.
  if (state_ != s.state_) {
    delete[] state_;
    state_ = (s.state_ == NULL) ? NULL : CopyState(s.state_);
  }
}

}  // namespace juicyc

#endif  // JUICYC_STATUS_H_