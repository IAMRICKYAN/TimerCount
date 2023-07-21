#include <conio.h>
#include "Timer.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Timer t;
	char ch;
	t.HideCursor();
	system("color 0e");
	t.gotoxy(20, 18);
    std::cout << "按a开始，按空格暂停，按s停止";
	while (1)
	{
		if (_kbhit()) //是否有按键
		{
			ch = _getch(); //获取按键信息
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