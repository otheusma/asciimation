#ifndef TIMER_H
#define TIMER_H

#include <chrono>
#include <thread>

class Timer
{
public:
	void StartTimer(double fps);

	void TimerUpdate();

private:
	std::chrono::system_clock::time_point m_startTime;
	std::chrono::system_clock::time_point m_endTime;
	std::chrono::system_clock::duration m_deltaTime;
};
#endif