
// ���λͼ��Դ1.h : ���λͼ��Դ1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C���λͼ��Դ1App:
// �йش����ʵ�֣������ ���λͼ��Դ1.cpp
//

class C���λͼ��Դ1App : public CWinAppEx
{
public:
	C���λͼ��Դ1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C���λͼ��Դ1App theApp;
