#include "Video.h"

Video::Video(const std::string& fileName) :
	m_videoFilePath("../res/" + fileName + ".mp4")
{
	m_video.open(m_videoFilePath);
	SetVideoFps();
	system("cls");
}
void Video::Play()
{
	m_timer.StartTimer(m_videoFps);
	while (m_video.read(m_frame))
	{
		m_console.SetFullSize();
		m_console.Clear();
		GenerateAsciiArt();
		m_console.Draw(m_asciiArt);
		m_timer.TimerUpdate();
	}
}
inline void Video::SetVideoFps() 
{ 
	m_videoFps = round(m_video.get(cv::CAP_PROP_FPS)); 
}
void Video::GenerateAsciiArt()
{
	m_asciiArt = {};
	resize(m_frame, m_frame, cv::Size(m_console.GetWidth(), m_console.GetHeight()));
	for (int y = 0; y < m_frame.rows; ++y)
	{
		for (int x = 0; x < m_frame.cols; ++x)
		{
			m_pixelColor = m_frame.at<cv::Vec3b>(cv::Point(x, y));
			m_pixelGrayscale = (m_pixelColor[0] * 0.144 + m_pixelColor[1] * 0.587 + m_pixelColor[2] * 0.299);

			m_asciiArt += m_ascii.GetAsciiChar(m_pixelGrayscale);
		}
		m_asciiArt += '\n';
	}
}