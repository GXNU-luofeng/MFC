
// ���Կͻ�������ΪԲ�Ļ���С������ɫ�����Բ.h : ���Կͻ�������ΪԲ�Ļ���С������ɫ�����Բ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲApp:
// �йش����ʵ�֣������ ���Կͻ�������ΪԲ�Ļ���С������ɫ�����Բ.cpp
//

class C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲApp : public CWinAppEx
{
public:
	C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲApp theApp;
