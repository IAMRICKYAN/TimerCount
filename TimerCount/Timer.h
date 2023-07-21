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
	long start_time; //��ʼ��ʱ��
	long pause_time; //��ͣ��ʱ��
	bool is_pause; //��ʱ���Ƿ���ͣ
	bool is_stop; //��ʱ���Ƿ�ֹͣ

public:
	bool isPause(); //������ȡ��ʱ���Ƿ���ͣ
	bool isStop(); //������ȡ��ʱ���Ƿ�ֹͣ
	void Start(); //��ʱ����ʼ
	void Pause(); //��ʱ����ͣ
	void Stop(); //��ʱ��ֹͣ
	void Show(); //չʾʱ��
	void gotoxy(int x, int y);
	void HideCursor();
};