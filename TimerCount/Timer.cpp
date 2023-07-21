#include "Timer.h"

Timer::Timer()
{
	is_pause == false; //��ʼ����ʱ��״̬
	is_stop == true;
}

Timer::~Timer()
{

}

bool Timer::isPause()
{
	if (is_pause == true)
		return true;
	else
		return false;
}

bool Timer::isStop()
{
	if (is_stop == true)
		return true;
	else
		return false;
}

void Timer::Start()
{
	if (is_stop)
	{
		start_time = (long)time(0);
		is_stop = false;
	}
	else
	{
		if (is_pause)
		{
			start_time += time(0) - pause_time;
			is_pause = false;
		}
	}
}

void Timer::Pause()
{
	if (is_pause || is_stop)
		return;
	else
	{
		pause_time = (long)time(0);
		is_pause = true;
	}
}

void Timer::Stop()
{
	if (is_stop)
	{
		return;
	}
	else
	{
		if (is_pause)
		{
			is_pause = false;
			is_stop = true;
		}
		else
		{
			is_stop = true;
		}

	}
}

void Timer::Show()
{
	long t = time(0) - start_time;
	gotoxy(35, 12);
	std::cout << std::setw(2) << std::setfill('0') << t / 60 / 60 << ":" \
		<< std::setw(2) << std::setfill('0') << t / 60 << ":" \
		<< std::setw(2) << std::setfill('0') << t % 60 << std::endl;
}

void Timer::gotoxy(int x,int y)
{
	int xx = 0x0b; 
	HANDLE houtput; 
	COORD loc;
	loc.X = x; 
	loc.Y = y;
	houtput = GetStdHandle(STD_OUTPUT_HANDLE); 
	SetConsoleCursorPosition(houtput, loc);
	return;

}

void Timer::HideCursor()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE); 
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle,&CursorInfo);//��ȡ����̨�����Ϣ
	CursorInfo.bVisible = false; //���ؿ���̨���
	SetConsoleCursorInfo(handle, &CursorInfo);//���ÿ���̨���״̬
}