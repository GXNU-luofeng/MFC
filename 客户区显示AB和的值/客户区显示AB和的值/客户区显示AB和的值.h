
// �ͻ�����ʾAB�͵�ֵ.h : �ͻ�����ʾAB�͵�ֵ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�ͻ�����ʾAB�͵�ֵApp:
// �йش����ʵ�֣������ �ͻ�����ʾAB�͵�ֵ.cpp
//

class C�ͻ�����ʾAB�͵�ֵApp : public CWinApp
{
public:
	C�ͻ�����ʾAB�͵�ֵApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�ͻ�����ʾAB�͵�ֵApp theApp;
