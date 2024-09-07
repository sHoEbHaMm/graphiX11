#include "X11Win.h"
#include "Window.h"
#include <sstream>


int CALLBACK WinMain(
	HINSTANCE hInstance,
	HINSTANCE hprevInstance,
	LPSTR lpCmdLine,
	int nCmdShow)
{
	Window wnd(800, 300, "Graphix11");

	MSG msg;
	BOOL gResult;

	while ((gResult = GetMessage(&msg, nullptr, 0, 0)) > 0)
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	if (gResult == -1)
	{
		return -1;
	}
	else
	{
		return msg.wParam;
	}
	return 0;
}
