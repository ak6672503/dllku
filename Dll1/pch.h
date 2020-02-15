// pch.h: 这是预编译标头文件。
// 下方列出的文件仅编译一次，提高了将来生成的生成性能。
// 这还将影响 IntelliSense 性能，包括代码完成和许多代码浏览功能。
// 但是，如果此处列出的文件中的任何一个在生成之间有更新，它们全部都将被重新编译。
// 请勿在此处添加要频繁更新的文件，这将使得性能优势无效。

#ifndef PCH_H
#define PCH_H

// 添加要在此处预编译的标头
#include "framework.h"

#endif //PCH_H

#ifdef DLL1_API
#else
#define DLL1_API extern "C" _declspec(dllimport)
#endif // DLL1_API

DLL1_API int add(int a, int b);
DLL1_API int subtract(int a, int b);

/*
class  Point {
public:
	void DLL1_API output(int x, int y);
	void test();
};*/

/*
_declspec(dllimport) int add(int a, int b); //这是直接告诉编译器这是从动态链接库引入的函数
_declspec(dllimport) int subtract(int a, int b);
*/