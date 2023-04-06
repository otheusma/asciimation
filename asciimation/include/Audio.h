#ifndef AUDIO_H
#define AUDIO_H

#include <string>
#include <windows.h>
#include <mmsystem.h>
#pragma comment (lib, "winmm.lib")

class Audio
{
public:
	Audio(const std::string& fileName);
	bool Play() const;
private:
	std::string m_audioFilePath;
};
#endif
