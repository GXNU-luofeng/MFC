
// ���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc.cpp : C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "���Կͻ�������ΪԲ�Ļ���С������ɫ�����Բ.h"
#endif

#include "���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc

IMPLEMENT_DYNCREATE(C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc, CDocument)

BEGIN_MESSAGE_MAP(C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc, CDocument)
END_MESSAGE_MAP()


// C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc ����/����

C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc::C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc()
{
	// TODO: �ڴ����һ���Թ������

}

C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc::~C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc()
{
}

BOOL C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc ���л�

void C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}

#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// �޸Ĵ˴����Ի����ĵ�����
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// ������������֧��
void C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc ���

#ifdef _DEBUG
void C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc ����
