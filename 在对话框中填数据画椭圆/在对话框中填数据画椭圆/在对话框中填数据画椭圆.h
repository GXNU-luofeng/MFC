
// �ڶԻ����������ݻ���Բ.h : �ڶԻ����������ݻ���Բ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������
#include "MyDlg.h" 

// C�ڶԻ����������ݻ���ԲApp:
// �йش����ʵ�֣������ �ڶԻ����������ݻ���Բ.cpp
//

class C�ڶԻ����������ݻ���ԲApp : public CWinAppEx
{
public:
	C�ڶԻ����������ݻ���ԲApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�ڶԻ����������ݻ���ԲApp theApp;
