// SPDX-FileCopyrightText: 2025 Daniel Aimé Valcour <fosssweeper@gmail.com>
//
// SPDX-License-Identifier: MIT

#include <requite/alias.hpp>
#include <requite/assert.hpp>
#include <requite/expression.hpp>

namespace requite {

void Alias::setName(llvm::StringRef name) {
  REQUITE_ASSERT(!name.empty());
  REQUITE_ASSERT(this->_name.empty());
  this->_name = name;
}

llvm::StringRef Alias::getName() const { return this->_name; }

bool Alias::getHasName() const { return !this->_name.empty(); }

void Alias::setExpression(requite::Expression &expression) {
  REQUITE_ASSERT(expression.getOpcode() == requite::Opcode::ALIAS);
  requite::setSingleRef(this->_expression_ptr, expression);
}

requite::Expression &Alias::getExpression() {
  return requite::getRef(this->_expression_ptr);
}

const requite::Expression &Alias::getExpression() const {
  return requite::getRef(this->_expression_ptr);
}

requite::Attributes &Alias::getAttributes() { return this->_attributes; }

const requite::Attributes &Alias::getAttributes() const {
  return this->_attributes;
}

void Alias::setModule(requite::Module &module) {
  requite::setSingleRef(this->_module_ptr, module);
}

requite::Module &Alias::getModule() {
  return requite::getRef(this->_module_ptr);
}

const requite::Module &Alias::getModule() const {
  return requite::getRef(this->_module_ptr);
}

void Alias::setObject(requite::Object &object) {
  requite::setSingleRef(this->_object_ptr, object);
}

requite::Object &Alias::getObject() {
  return requite::getRef(this->_object_ptr);
}

const requite::Object &Alias::getObject() const {
  return requite::getRef(this->_object_ptr);
}

requite::Object *Alias::getObjectPtr() { return this->_object_ptr; }

const requite::Object *Alias::getObjectPtr() const { return this->_object_ptr; }

bool Alias::getHasContainingScope() const {
  return this->_containing_scope_ptr != nullptr;
}

void Alias::setContainingScope(requite::Scope &scope) {
  requite::setSingleRef(this->_containing_scope_ptr, scope);
}

requite::Scope &Alias::getContainingScope() {
  return requite::getRef(this->_containing_scope_ptr);
}

const requite::Scope &Alias::getContainingScope() const {
  return requite::getRef(this->_containing_scope_ptr);
}

requite::Symbol &Alias::getSymbol() { return this->_symbol; }

const requite::Symbol &Alias::getSymbol() const { return this->_symbol; }

} // namespace requite