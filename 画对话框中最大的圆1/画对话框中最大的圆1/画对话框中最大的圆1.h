
// ���Ի���������Բ1.h : ���Ի���������Բ1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C���Ի���������Բ1App:
// �йش����ʵ�֣������ ���Ի���������Բ1.cpp
//

class C���Ի���������Բ1App : public CWinApp
{
public:
	C���Ի���������Բ1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C���Ի���������Բ1App theApp;
