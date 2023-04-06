#include "Console.h"

void Console::Draw(const std::string& asciiArt) const
{
	std::cout << asciiArt << " F11: Fullscreen";
}
void Console::Clear()
{
	m_cursorPosition.X = 0;
	m_cursorPosition.Y = 0;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), m_cursorPosition);
}
void Console::SetFullSize()
{
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &m_csbi);
	m_width = m_csbi.srWindow.Right - m_csbi.srWindow.Left + 1;
	m_height = m_csbi.srWindow.Bottom - 1 - m_csbi.srWindow.Top + 1;
}
const int Console::GetWidth()
{ 
	return m_width; 
}
const int Console::GetHeight()
{ 
	return m_height; 
}