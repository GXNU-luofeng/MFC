
// ���������Ϊ������Ͷ̰������Բ�ĵ���.h : ���������Ϊ������Ͷ̰������Բ�ĵ��� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C���������Ϊ������Ͷ̰������Բ�ĵ���App:
// �йش����ʵ�֣������ ���������Ϊ������Ͷ̰������Բ�ĵ���.cpp
//

class C���������Ϊ������Ͷ̰������Բ�ĵ���App : public CWinAppEx
{
public:
	C���������Ϊ������Ͷ̰������Բ�ĵ���App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C���������Ϊ������Ͷ̰������Բ�ĵ���App theApp;
