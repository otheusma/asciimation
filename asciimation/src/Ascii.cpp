#include "Ascii.h"

inline const int Ascii::GetVecSize() const 
{ 
	return m_vecSize; 
}
const char Ascii::GetAsciiChar(double pixelGrayscale) const
{
	int i{ 1 };
	while (pixelGrayscale < (GRAYSCALE_MAX - GRAYSCALE_MAX / m_vecSize * i))
		++i;
	return ASCII_GRAYSCALE[i - 1];
}
const int Ascii::SetVecSize() const
{
	int counter{};
	for (int i{}; ASCII_GRAYSCALE[i] != '\0'; ++i)
		++counter;
	return counter;
}