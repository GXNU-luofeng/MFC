
// ѡ��һ���ļ����ڿͻ�����ʾ.h : ѡ��һ���ļ����ڿͻ�����ʾ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������
#include "MyDlg3.h" 
#include "MyDlg4.h" 
// Cѡ��һ���ļ����ڿͻ�����ʾApp:
// �йش����ʵ�֣������ ѡ��һ���ļ����ڿͻ�����ʾ.cpp
//

class Cѡ��һ���ļ����ڿͻ�����ʾApp : public CWinAppEx
{
public:
	Cѡ��һ���ļ����ڿͻ�����ʾApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cѡ��һ���ļ����ڿͻ�����ʾApp theApp;
