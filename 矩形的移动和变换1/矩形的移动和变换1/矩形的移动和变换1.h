
// ���ε��ƶ��ͱ任1.h : ���ε��ƶ��ͱ任1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C���ε��ƶ��ͱ任1App:
// �йش����ʵ�֣������ ���ε��ƶ��ͱ任1.cpp
//

class C���ε��ƶ��ͱ任1App : public CWinApp
{
public:
	C���ε��ƶ��ͱ任1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C���ε��ƶ��ͱ任1App theApp;
