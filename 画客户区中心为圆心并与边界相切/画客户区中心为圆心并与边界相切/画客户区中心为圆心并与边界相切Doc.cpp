
// ���ͻ�������ΪԲ�Ĳ���߽�����Doc.cpp : C���ͻ�������ΪԲ�Ĳ���߽�����Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "���ͻ�������ΪԲ�Ĳ���߽�����.h"
#endif

#include "���ͻ�������ΪԲ�Ĳ���߽�����Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C���ͻ�������ΪԲ�Ĳ���߽�����Doc

IMPLEMENT_DYNCREATE(C���ͻ�������ΪԲ�Ĳ���߽�����Doc, CDocument)

BEGIN_MESSAGE_MAP(C���ͻ�������ΪԲ�Ĳ���߽�����Doc, CDocument)
END_MESSAGE_MAP()


// C���ͻ�������ΪԲ�Ĳ���߽�����Doc ����/����

C���ͻ�������ΪԲ�Ĳ���߽�����Doc::C���ͻ�������ΪԲ�Ĳ���߽�����Doc()
{
	// TODO: �ڴ����һ���Թ������

}

C���ͻ�������ΪԲ�Ĳ���߽�����Doc::~C���ͻ�������ΪԲ�Ĳ���߽�����Doc()
{
}

BOOL C���ͻ�������ΪԲ�Ĳ���߽�����Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// C���ͻ�������ΪԲ�Ĳ���߽�����Doc ���л�

void C���ͻ�������ΪԲ�Ĳ���߽�����Doc::Serialize(CArchive& ar)
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
void C���ͻ�������ΪԲ�Ĳ���߽�����Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void C���ͻ�������ΪԲ�Ĳ���߽�����Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void C���ͻ�������ΪԲ�Ĳ���߽�����Doc::SetSearchContent(const CString& value)
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

// C���ͻ�������ΪԲ�Ĳ���߽�����Doc ���

#ifdef _DEBUG
void C���ͻ�������ΪԲ�Ĳ���߽�����Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void C���ͻ�������ΪԲ�Ĳ���߽�����Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C���ͻ�������ΪԲ�Ĳ���߽�����Doc ����
