// SPDX-FileCopyrightText: 2025 Daniel Aimé Valcour <fosssweeper@gmail.com>
//
// SPDX-License-Identifier: MIT

#pragma once

#include <requite/attributes.hpp>
#include <requite/scope.hpp>
#include <requite/signature.hpp>
#include <requite/procedure_type.hpp>

#include <llvm/ADT/SmallVector.h>

#include <string>

namespace llvm {

class FunctionType;
class Function;
class BasicBlock;

} // namespace llvm

namespace requite {

struct Expression;
struct NamedProcedureGroup;
struct Node;

struct Procedure final {
  using Self = requite::Procedure;

  std::string _mangled_name = {};
  requite::ProcedureType _type = requite::ProcedureType::NONE;
  requite::Scope _scope = {};
  requite::Signature _signature = {};
  requite::Attributes _attributes = {};
  requite::NamedProcedureGroup *_named_procedure_group_ptr = nullptr;
  requite::Expression *_ascribe_ptr = nullptr;
  requite::Procedure *_prototype_implementation_ptr = nullptr;
  requite::Procedure *_next_procedure_ptr = nullptr;
  llvm::FunctionType *_llvm_function_type_ptr = nullptr;
  llvm::Function *_llvm_function_ptr = nullptr;
  llvm::BasicBlock *_llvm_block_ptr = nullptr;

  // procedure.cpp
  Procedure() = default;
  Procedure(Self &that) = delete;
  Procedure(Self &&that) = delete;
  ~Procedure() = default;
  Self &operator=(Self &rhs) = delete;
  Self &operator=(Self &&rhs) = delete;
  [[nodiscard]]
  bool operator==(const Self &rhs) const;
  [[nodiscard]]
  bool operator!=(const Self &rhs) const;
  void setMangledName(llvm::StringRef name);
  [[nodiscard]]
  bool getHasMangledName() const;
  [[nodiscard]]
  llvm::StringRef getMangledName() const;
  void setType(requite::ProcedureType type);
  [[nodiscard]]
  requite::ProcedureType getType() const;
  [[nodiscard]]
  requite::Scope &getScope();
  [[nodiscard]]
  const requite::Scope &getScope() const;
  [[nodiscard]]
  requite::Signature &getSignature();
  [[nodiscard]]
  const requite::Signature &getSignature() const;
  [[nodiscard]]
  requite::Attributes &getAttributes();
  [[nodiscard]]
  const requite::Attributes &getAttributes() const;
  void setAscribe(requite::Expression &ascribe);
  [[nodiscard]]
  bool getHasAscribe() const;
  [[nodiscard]]
  requite::Expression &getAscribe();
  [[nodiscard]]
  const requite::Expression &getAscribe() const;
  void setNamedProcedureGroup(requite::NamedProcedureGroup &named_procedure_group);
  [[nodiscard]]
  bool getHasNamedProcedureGroup() const;
  [[nodiscard]]
  requite::NamedProcedureGroup &getNamedProcedureGroup();
  [[nodiscard]]
  const requite::NamedProcedureGroup &getNamedProcedureGroup() const;
  [[nodiscard]]
  requite::NamedProcedureGroup *getNamedProcedureGroupPtr();
  [[nodiscard]]
  const requite::NamedProcedureGroup *getNamedProcedureGroupPtr() const;
  void setNextProcedure(requite::Procedure &procedure);
  [[nodiscard]]
  bool getHasNextProcedure() const;
  [[nodiscard]]
  requite::Procedure &getNextProcedure();
  [[nodiscard]]
  const requite::Procedure &getNextProcedure() const;
  [[nodiscard]]
  bool getHasLlvmFunctionType() const;
  void setLlvmFunctionType(llvm::FunctionType &type);
  [[nodiscard]]
  llvm::FunctionType &getLlvmFunctionType();
  [[nodiscard]]
  const llvm::FunctionType &getLlvmFunctionType() const;
  [[nodiscard]]
  bool getHasLlvmFunction() const;
  void setLlvmFunction(llvm::Function &function);
  [[nodiscard]]
  llvm::Function &getLlvmFunction();
  [[nodiscard]]
  const llvm::Function &getLlvmFunction() const;
  [[nodiscard]]
  bool getHasLlvmBlock() const;
  void setLlvmBlock(llvm::BasicBlock &block);
  [[nodiscard]]
  llvm::BasicBlock &getLlvmBlock();
  [[nodiscard]]
  const llvm::BasicBlock &getLlvmBlock() const;
};

} // namespace requite