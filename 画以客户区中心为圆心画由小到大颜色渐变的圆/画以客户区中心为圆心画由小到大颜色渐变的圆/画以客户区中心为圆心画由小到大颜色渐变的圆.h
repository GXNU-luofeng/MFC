
// 画以客户区中心为圆心画由小到大颜色渐变的圆.h : 画以客户区中心为圆心画由小到大颜色渐变的圆 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// C画以客户区中心为圆心画由小到大颜色渐变的圆App:
// 有关此类的实现，请参阅 画以客户区中心为圆心画由小到大颜色渐变的圆.cpp
//

class C画以客户区中心为圆心画由小到大颜色渐变的圆App : public CWinAppEx
{
public:
	C画以客户区中心为圆心画由小到大颜色渐变的圆App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C画以客户区中心为圆心画由小到大颜色渐变的圆App theApp;
