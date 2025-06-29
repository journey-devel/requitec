// SPDX-FileCopyrightText: 2025 Daniel Aimé Valcour <fosssweeper@gmail.com>
//
// SPDX-License-Identifier: MIT

#pragma once

namespace requite {

[[nodiscard]] constexpr std::string_view getName(requite::VariableType type) {
  switch (type) {
  case requite::VariableType::NONE:
    return "NONE";
  case requite::VariableType::LOCAL:
    return "LOCAL";
  case requite::VariableType::GLOBAL:
    return "GLOBAL";
  case requite::VariableType::PROPERTY:
    return "PROPERTY";
  }
  return "ERROR";
}

constexpr requite::VariableType getVariableType(requite::Opcode opcode) {
  switch (opcode) {
  case requite::Opcode::_LOCAL:
    return requite::VariableType::LOCAL;
  case requite::Opcode::GLOBAL:
    return requite::VariableType::GLOBAL;
  case requite::Opcode::PROPERTY:
    return requite::VariableType::PROPERTY;
  default:
    break;
  }
  return requite::VariableType::NONE;
}

constexpr requite::Opcode getOpcode(requite::VariableType type) {
  switch (type) {
  case requite::VariableType::LOCAL:
    return requite::Opcode::_LOCAL;
  case requite::VariableType::GLOBAL:
    return requite::Opcode::GLOBAL;
  case requite::VariableType::PROPERTY:
    return requite::Opcode::PROPERTY;
  default:
    break;
}
return requite::Opcode::__ERROR;
}

} // namespace requtite