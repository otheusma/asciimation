#ifndef CONSOLE_H
#define CONSOLE_H

#include <iostream>
#include <string>
#include <format>
#include "windows.h"

class Console
{
public:
	void Draw(const std::string& asciiArt) const;
	void Clear();
	void SetFullSize();
	const int GetWidth();
	const int GetHeight();

private:
	int m_width, m_height;
	CONSOLE_SCREEN_BUFFER_INFO m_csbi;
	COORD m_cursorPosition;
};
#endif