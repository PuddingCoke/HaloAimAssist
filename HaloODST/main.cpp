//235 26 26
//235 26 26
//235 26 26
//235 26 26
//235 26 26
//235 26 26
//235 26 26
//235 26 26
//235 26 26


#include<Windows.h>
#include<process.h>
#include<atomic>

HDC hDC = GetDC(NULL);
COLORREF clr;
int r, g;

void findThread(void* p)
{
	while (1) {
		clr = GetPixel(hDC, 1279, 718);
		r = GetRValue(clr);//222
		g = GetGValue(clr);//20
	}
}

int main()
{
	_beginthread(findThread, 0, NULL);
	while (1)
	{
		if (r > 230 && r < 240 && g>22 && g < 30) {
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			Sleep(20);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			Sleep(20);
		}
	}

	return 0;
}
