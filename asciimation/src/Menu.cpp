#include "Menu.h"

bool Menu::GetValidFile()
{
	system("cls");
	ShowVersion();
	std::cout << "Enter file name without the extension or white spaces"
		<< "\n*both files need to be located in the 'res' folder"
		<< "\n*video file needs to be .mp4\n*audio file needs to be .wav"
		<< "\n*both files need to have the same name (excluding extensions)"
		<< "\n\nex: badApple\n: ";
	std::cin >> m_fileName;

	if (!IsValidFile(m_fileName + ".mp4"))
	{
		std::cout << "\nVIDEO FILE NOT FOUND\n";
		system("pause");
		return false;
	}
	if (!IsValidFile(m_fileName + ".wav"))
	{
		std::cout << "\nAUDIO FILE NOT FOUND\n";
		system("pause");
		return false;
	}
	return true;
}
const std::string Menu::GetFileName() const
{ 
	return m_fileName; 
}
bool Menu::IsValidFile(std::string filePath)
{
	fin.open(filePath);
	if (fin)
	{
		fin.close();
		return true;
	}
	fin.close();
	return false;
}
void Menu::ShowVersion() const
{
	std::cout << "===== ASCIIMATION =====\nConvert video to ASCII\tv0.1\n\n";
}