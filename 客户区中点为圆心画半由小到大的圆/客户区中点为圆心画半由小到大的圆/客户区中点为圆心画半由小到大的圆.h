
// �ͻ����е�ΪԲ�Ļ�����С�����Բ.h : �ͻ����е�ΪԲ�Ļ�����С�����Բ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�ͻ����е�ΪԲ�Ļ�����С�����ԲApp:
// �йش����ʵ�֣������ �ͻ����е�ΪԲ�Ļ�����С�����Բ.cpp
//

class C�ͻ����е�ΪԲ�Ļ�����С�����ԲApp : public CWinAppEx
{
public:
	C�ͻ����е�ΪԲ�Ļ�����С�����ԲApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�ͻ����е�ΪԲ�Ļ�����С�����ԲApp theApp;
