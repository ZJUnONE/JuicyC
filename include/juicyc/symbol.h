#ifndef JUICYC_SYMBOL_H_
#define JUICYC_SYMBOL_H_

#include "symbol_visitor.h"

#include <string>

namespace juicyc {

struct Symbol {
  bool is_terminal = true;
  int type = 0;
  Symbol* left = nullptr;
  Symbol* right = nullptr;
  Symbol(bool is_terminal): is_terminal(is_terminal) {}
  ~Symbol() {
    delete right;
  }
  virtual void Invoke(SymbolVisitor& visitor);
};

struct Terminal : public Symbol {
  // refer to tagger for detailed string
  std::string value;
  uint16_t file;
  uint32_t line;
  uint32_t col;
  Terminal() : Symbol(true) { }
  ~Terminal() { }
  virtual void Invoke(SymbolVisitor& visitor) {
    visitor.VisitTerminal(this);
    visitor.ExitTerminal(this);
  }
};

struct NonTerminal : public Symbol {
  Symbol* childs;
  NonTerminal() : Symbol(false) { }
  ~NonTerminal() {
    delete childs;
  }
  virtual void Invoke(SymbolVisitor& visitor) {
    visitor.VisitNonTerminal(this);
    if(childs)
      childs->Invoke(visitor);
    visitor.ExitNonTerminal(this);
  }
};

// TODO: add more internal node type 
// inheriting from NonTerminal.
// Add type identifier.

} // namespace juicyc

#endif // JUICYC_SYMBOL_H_