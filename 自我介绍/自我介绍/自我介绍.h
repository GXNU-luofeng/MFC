
// ���ҽ���.h : ���ҽ��� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C���ҽ���App:
// �йش����ʵ�֣������ ���ҽ���.cpp
//

class C���ҽ���App : public CWinApp
{
public:
	C���ҽ���App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C���ҽ���App theApp;
