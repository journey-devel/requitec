// SPDX-FileCopyrightText: 2025 Daniel Aimé Valcour <fosssweeper@gmail.com>
//
// SPDX-License-Identifier: MIT

#include <requite/assert.hpp>
#include <requite/context.hpp>

#include <llvm/Support/FileSystem.h>

namespace requite {

void Context::writeLlvmIr() {
  for (std::unique_ptr<requite::Module> &module_utpr : this->getModuleUptrs()) {
    requite::Module &module = requite::getRef(module_utpr);
    this->writeLlvmIr(module);
  }
}

void Context::writeLlvmIr(const requite::Module &module) {
  llvm::Twine extension = ".ir";
  llvm::SmallString<256> path;
  if (!module.getFile().makeIntermediateFilePath(path, *this, extension)) {
    return;
  }
  std::error_code ec;
  llvm::raw_fd_ostream fout(path, ec, llvm::sys::fs::OF_Text);
  if (ec) {
    this->logMessage(
        llvm::Twine(
            "error: failed to open intermediate file for writing\n\tpath: ") +
        llvm::Twine(path) + llvm::Twine("\n\treason: ") +
        llvm::Twine(ec.message()));
    return;
  }
  std::string ir_text = module.getLlvmIrSourceText();
  fout << ir_text;
}

} // namespace requite