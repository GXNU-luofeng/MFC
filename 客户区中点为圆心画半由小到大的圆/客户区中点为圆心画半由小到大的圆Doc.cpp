
// �ͻ����е�ΪԲ�Ļ�����С�����ԲDoc.cpp : C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ͻ����е�ΪԲ�Ļ�����С�����Բ.h"
#endif

#include "�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc

IMPLEMENT_DYNCREATE(C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc, CDocument)

BEGIN_MESSAGE_MAP(C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc, CDocument)
END_MESSAGE_MAP()


// C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc ����/����

C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc::C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc()
{
	// TODO: �ڴ����һ���Թ������

}

C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc::~C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc()
{
}

BOOL C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc ���л�

void C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc::Serialize(CArchive& ar)
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
void C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc::SetSearchContent(const CString& value)
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

// C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc ���

#ifdef _DEBUG
void C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc ����
