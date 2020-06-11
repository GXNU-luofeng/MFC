
// 画以随机数为长半轴和短半轴的椭圆文档类.h : 画以随机数为长半轴和短半轴的椭圆文档类 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// C画以随机数为长半轴和短半轴的椭圆文档类App:
// 有关此类的实现，请参阅 画以随机数为长半轴和短半轴的椭圆文档类.cpp
//

class C画以随机数为长半轴和短半轴的椭圆文档类App : public CWinAppEx
{
public:
	C画以随机数为长半轴和短半轴的椭圆文档类App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C画以随机数为长半轴和短半轴的椭圆文档类App theApp;
