#include "Audio.h"

Audio::Audio(const std::string& fileName) :
	m_audioFilePath("../res/" + "fileName + ".wav")
{}
bool Audio::Play() const 
{ 
	return PlaySoundA(m_audioFilePath.c_str(), NULL, SND_FILENAME | SND_ASYNC | SND_NODEFAULT); 
}