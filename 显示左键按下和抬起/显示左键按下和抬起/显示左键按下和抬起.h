
// ��ʾ������º�̧��.h : ��ʾ������º�̧�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ʾ������º�̧��App:
// �йش����ʵ�֣������ ��ʾ������º�̧��.cpp
//

class C��ʾ������º�̧��App : public CWinApp
{
public:
	C��ʾ������º�̧��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ʾ������º�̧��App theApp;
