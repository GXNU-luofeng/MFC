
// ���ε��ƶ��ͱ任.h : ���ε��ƶ��ͱ任 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C���ε��ƶ��ͱ任App:
// �йش����ʵ�֣������ ���ε��ƶ��ͱ任.cpp
//

class C���ε��ƶ��ͱ任App : public CWinApp
{
public:
	C���ε��ƶ��ͱ任App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C���ε��ƶ��ͱ任App theApp;
