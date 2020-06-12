
// 画客户区中心为圆心并与边界相切.h : 画客户区中心为圆心并与边界相切 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// C画客户区中心为圆心并与边界相切App:
// 有关此类的实现，请参阅 画客户区中心为圆心并与边界相切.cpp
//

class C画客户区中心为圆心并与边界相切App : public CWinAppEx
{
public:
	C画客户区中心为圆心并与边界相切App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C画客户区中心为圆心并与边界相切App theApp;
