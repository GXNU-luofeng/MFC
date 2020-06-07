
// 选择一个文件并在客户区显示.h : 选择一个文件并在客户区显示 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号
#include "MyDlg3.h" 
#include "MyDlg4.h" 
// C选择一个文件并在客户区显示App:
// 有关此类的实现，请参阅 选择一个文件并在客户区显示.cpp
//

class C选择一个文件并在客户区显示App : public CWinAppEx
{
public:
	C选择一个文件并在客户区显示App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C选择一个文件并在客户区显示App theApp;
