
// 客户区显示jpg图像.h : 客户区显示jpg图像 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// C客户区显示jpg图像App:
// 有关此类的实现，请参阅 客户区显示jpg图像.cpp
//

class C客户区显示jpg图像App : public CWinAppEx
{
public:
	C客户区显示jpg图像App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C客户区显示jpg图像App theApp;
