#ifndef VIDEO_H
#define VIDEO_H

#include <opencv2/opencv.hpp>
#include <string>
#include "Console.h"
#include "Ascii.h"
#include "Timer.h"

class Video
{
public:
	Video(const std::string& fileName);
	void Play();

private:
	std::string			m_videoFilePath;
	std::string			m_asciiArt;
	cv::VideoCapture	m_video;
	cv::Vec3b			m_pixelColor;
	cv::Mat				m_frame;
	Ascii				m_ascii;
	Console				m_console;
	Timer				m_timer;
	double				m_videoFps;
	double				m_pixelGrayscale;

private:
	inline void SetVideoFps();
	void GenerateAsciiArt();
};
#endif