
// �ڶԻ������Բ.h : �ڶԻ������Բ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�ڶԻ������ԲApp:
// �йش����ʵ�֣������ �ڶԻ������Բ.cpp
//

class C�ڶԻ������ԲApp : public CWinApp
{
public:
	C�ڶԻ������ԲApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�ڶԻ������ԲApp theApp;
