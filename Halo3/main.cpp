#include<Windows.h>
#include<process.h>

using namespace std;


//230 27 28
//230 33 36
//230 26 27
//230 31 31
//230 26 27
//230 28 28
//18 20 21
//232 42 42
//231 36 36
//230 28 27
//230 28 28
//230 26 26
//230 28 28
//230 27 27
//230 27 27
//230 26 26
//230 27 27
//230 26 27
//230 27 27
//230 26 26
//63 57 53
//231 36 36
//232 42 41
//230 28 28
//232 43 43
//231 36 36
//231 33 33
//231 32 32
//231 39 41
//231 33 33
//231 36 36

HDC hDC = GetDC(NULL);
COLORREF clr;
int r, g;

void findThread(void* p)
{
	while (1) {
		clr = GetPixel(hDC, 1280, 720);
		r = GetRValue(clr);//230
		g = GetGValue(clr);//30
	}
}

int main()
{
	_beginthread(findThread, 0, NULL);
	while (1)
	{
		if (r > 220 && r < 240 && g>20 && g < 45) {
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			Sleep(20);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			Sleep(20);
		}
	}
	return 0;
}