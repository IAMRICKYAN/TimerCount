#pragma once
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <tchar.h>
#include <time.h>
#include <windows.h>

class Timer
{
public:
	Timer();
	~Timer();

private:
	long start_time; //开始的时间
	long pause_time; //暂停的时间
	bool is_pause; //计时器是否暂停
	bool is_stop; //计时器是否停止

public:
	bool isPause(); //从外界获取计时器是否暂停
	bool isStop(); //从外界获取计时器是否停止
	void Start(); //计时器开始
	void Pause(); //计时器暂停
	void Stop(); //计时器停止
	void Show(); //展示时间
	void gotoxy(int x, int y);
	void HideCursor();
};