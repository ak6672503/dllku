// pch.cpp: 与预编译标头对应的源文件

#define DLL1_API extern "C" _declspec(dllexport)
#include "pch.h"
#include <tchar.h>

// 当使用预编译的头时，需要使用此源文件，编译才能成功。


int add(int a, int b) {

    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}
/*
void Point::output(int x, int y)
{
    //返回调用者进程当前正在使用的那个窗口的句柄
    HWND hwnd = GetForegroundWindow();
    //获取dc
    HDC hdc = GetDC(hwnd);
    TCHAR buf[20] = { 0 };

    _stprintf_s(buf, L"x=%d,y=%d", x, y);
    //输出坐标
    TextOut(hdc, 0, 0, buf, _tcslen(buf));
    //释放dc
    ReleaseDC(hwnd, hdc);

}

void Point::test()
{
}
*/