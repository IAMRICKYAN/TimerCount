#include <conio.h>
#include "Timer.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Timer t;
	char ch;
	t.HideCursor();
	system("color 0e");
	t.gotoxy(20, 18);
    std::cout << "��a��ʼ�����ո���ͣ����sֹͣ";
	while (1)
	{
		if (_kbhit()) //�Ƿ��а���
		{
			ch = _getch(); //��ȡ������Ϣ
			switch (ch)
			{
			case 'a':
			t.Start();
			break;
			case 's':
				t.Stop();
			break;
			case ' ':
				t.Pause();
				break;
			default:
				break;
			}
		}

		if ((!t.isPause()) && (!t.isStop()))
			t.Show();
	}


	return 0;
}