
// �ĵ������ҽ���.h : �ĵ������ҽ��� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�ĵ������ҽ���App:
// �йش����ʵ�֣������ �ĵ������ҽ���.cpp
//

class C�ĵ������ҽ���App : public CWinApp
{
public:
	C�ĵ������ҽ���App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�ĵ������ҽ���App theApp;
