#ifndef ASCII_H
#define ASCII_H

const char ASCII_GRAYSCALE[] {'@', '%', '#', '*', '+', '=', '-', ':', '.', ' '};
const double GRAYSCALE_MAX { (255.0 * 0.144 + 255.0 * 0.587 + 255.0 * 0.299) };

class Ascii
{
public:
	inline const int GetVecSize() const;
	const char GetAsciiChar(double pixelGrayscale) const;
private:
	int m_vecSize{SetVecSize()};
private:
	const int SetVecSize() const;
};
#endif