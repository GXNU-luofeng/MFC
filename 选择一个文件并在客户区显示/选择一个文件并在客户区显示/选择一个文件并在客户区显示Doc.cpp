
// ѡ��һ���ļ����ڿͻ�����ʾDoc.cpp : Cѡ��һ���ļ����ڿͻ�����ʾDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ѡ��һ���ļ����ڿͻ�����ʾ.h"
#endif

#include "ѡ��һ���ļ����ڿͻ�����ʾDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// Cѡ��һ���ļ����ڿͻ�����ʾDoc

IMPLEMENT_DYNCREATE(Cѡ��һ���ļ����ڿͻ�����ʾDoc, CDocument)

BEGIN_MESSAGE_MAP(Cѡ��һ���ļ����ڿͻ�����ʾDoc, CDocument)
END_MESSAGE_MAP()


// Cѡ��һ���ļ����ڿͻ�����ʾDoc ����/����

Cѡ��һ���ļ����ڿͻ�����ʾDoc::Cѡ��һ���ļ����ڿͻ�����ʾDoc()
{
	// TODO: �ڴ����һ���Թ������

}

Cѡ��һ���ļ����ڿͻ�����ʾDoc::~Cѡ��һ���ļ����ڿͻ�����ʾDoc()
{
}

BOOL Cѡ��һ���ļ����ڿͻ�����ʾDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// Cѡ��һ���ļ����ڿͻ�����ʾDoc ���л�

void Cѡ��һ���ļ����ڿͻ�����ʾDoc::Serialize(CArchive& ar)
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
void Cѡ��һ���ļ����ڿͻ�����ʾDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void Cѡ��һ���ļ����ڿͻ�����ʾDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void Cѡ��һ���ļ����ڿͻ�����ʾDoc::SetSearchContent(const CString& value)
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

// Cѡ��һ���ļ����ڿͻ�����ʾDoc ���

#ifdef _DEBUG
void Cѡ��һ���ļ����ڿͻ�����ʾDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void Cѡ��һ���ļ����ڿͻ�����ʾDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// Cѡ��һ���ļ����ڿͻ�����ʾDoc ����
