#include<Windows.h>
#include<process.h>
#include<atomic>
// 941 519

HDC hDC = GetDC(NULL);
COLORREF clr;
int r, g;

void findThread(void* p)
{
	while (1) {
		clr = GetPixel(hDC, 1280, 720);
		r = GetRValue(clr);//222
		g = GetGValue(clr);//20
	}
}

int main()
{
	_beginthread(findThread, 0, NULL);
	while (1)
	{
		if (r > 212 && r < 232 && g>15 && g < 25) {
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			Sleep(20);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			Sleep(20);
		}
	}

	return 0;
}