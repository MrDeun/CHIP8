#pragma once
#include "chip8cpu.h"

WORD Chip8::GetNextUpcode() {
  WORD result = 0;
  result = m_GameMemory[m_ProgramCounter];
  result <<= 8;
  result |= m_GameMemory[m_ProgramCounter + 1];
  m_ProgramCounter += 2;

  return result;
}