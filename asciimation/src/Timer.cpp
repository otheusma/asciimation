#include "Timer.h"

void Timer::StartTimer(double fps)
{
	m_deltaTime = std::chrono::duration_cast<std::chrono::system_clock::duration>(std::chrono::duration<double>{(1.0 / fps)});
	m_startTime = std::chrono::system_clock::now();
	m_endTime = m_startTime + m_deltaTime;
}
void Timer::TimerUpdate()
{
	std::this_thread::sleep_until(m_endTime);
	m_startTime = m_endTime;
	m_endTime = m_startTime + m_deltaTime;
}