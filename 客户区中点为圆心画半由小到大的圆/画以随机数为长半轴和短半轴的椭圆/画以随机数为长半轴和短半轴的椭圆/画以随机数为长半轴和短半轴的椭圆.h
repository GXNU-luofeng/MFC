
// ���������Ϊ������Ͷ̰������Բ.h : ���������Ϊ������Ͷ̰������Բ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C���������Ϊ������Ͷ̰������ԲApp:
// �йش����ʵ�֣������ ���������Ϊ������Ͷ̰������Բ.cpp
//

class C���������Ϊ������Ͷ̰������ԲApp : public CWinAppEx
{
public:
	C���������Ϊ������Ͷ̰������ԲApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C���������Ϊ������Ͷ̰������ԲApp theApp;
