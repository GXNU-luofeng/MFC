
// 实现计算器.h : 实现计算器 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号
#include "MyDlg.h" 

// C实现计算器App:
// 有关此类的实现，请参阅 实现计算器.cpp
//

class C实现计算器App : public CWinAppEx
{
public:
	C实现计算器App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C实现计算器App theApp;
