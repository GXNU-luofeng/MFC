
// ���ε��ƶ��ͱ任1Doc.cpp : C���ε��ƶ��ͱ任1Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "���ε��ƶ��ͱ任1.h"
#endif

#include "���ε��ƶ��ͱ任1Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C���ε��ƶ��ͱ任1Doc

IMPLEMENT_DYNCREATE(C���ε��ƶ��ͱ任1Doc, CDocument)

BEGIN_MESSAGE_MAP(C���ε��ƶ��ͱ任1Doc, CDocument)
END_MESSAGE_MAP()


// C���ε��ƶ��ͱ任1Doc ����/����

C���ε��ƶ��ͱ任1Doc::C���ε��ƶ��ͱ任1Doc()
{
	// TODO: �ڴ����һ���Թ������
	cr.left = 100;
	cr.bottom = 200;
	cr.right = 300;
	cr.top = 100;


}

C���ε��ƶ��ͱ任1Doc::~C���ε��ƶ��ͱ任1Doc()
{
}

BOOL C���ε��ƶ��ͱ任1Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// C���ε��ƶ��ͱ任1Doc ���л�

void C���ε��ƶ��ͱ任1Doc::Serialize(CArchive& ar)
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
void C���ε��ƶ��ͱ任1Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void C���ε��ƶ��ͱ任1Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void C���ε��ƶ��ͱ任1Doc::SetSearchContent(const CString& value)
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

// C���ε��ƶ��ͱ任1Doc ���

#ifdef _DEBUG
void C���ε��ƶ��ͱ任1Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void C���ε��ƶ��ͱ任1Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C���ε��ƶ��ͱ任1Doc ����
