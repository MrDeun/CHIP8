#include <vector>
using BYTE = unsigned char;
using WORD = unsigned short;

class Chip8 {
  Chip8* GetSingleton();
  BYTE m_GameMemory[0xfff];
  BYTE m_Register[16];
  WORD m_AddressI;
  WORD m_ProgramCounter;
  std::vector<WORD> m_Stack;

  WORD GetNextUpcode(); 
};
