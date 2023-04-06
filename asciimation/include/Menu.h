#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>
#include <fstream>

class Menu
{
public:
	bool GetValidFile();
	const std::string GetFileName() const;
private:
	std::string m_fileName;
	std::ifstream fin;
private:
	bool IsValidFile(std::string filePath);
	void ShowVersion() const;
};
#endif