
// �ͻ�����ʾAB�͵�ֵDoc.cpp : C�ͻ�����ʾAB�͵�ֵDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ͻ�����ʾAB�͵�ֵ.h"
#endif

#include "�ͻ�����ʾAB�͵�ֵDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C�ͻ�����ʾAB�͵�ֵDoc

IMPLEMENT_DYNCREATE(C�ͻ�����ʾAB�͵�ֵDoc, CDocument)

BEGIN_MESSAGE_MAP(C�ͻ�����ʾAB�͵�ֵDoc, CDocument)
END_MESSAGE_MAP()


// C�ͻ�����ʾAB�͵�ֵDoc ����/����

C�ͻ�����ʾAB�͵�ֵDoc::C�ͻ�����ʾAB�͵�ֵDoc()
{
	// TODO: �ڴ����һ���Թ������

}

C�ͻ�����ʾAB�͵�ֵDoc::~C�ͻ�����ʾAB�͵�ֵDoc()
{
}

BOOL C�ͻ�����ʾAB�͵�ֵDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// C�ͻ�����ʾAB�͵�ֵDoc ���л�

void C�ͻ�����ʾAB�͵�ֵDoc::Serialize(CArchive& ar)
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
void C�ͻ�����ʾAB�͵�ֵDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void C�ͻ�����ʾAB�͵�ֵDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void C�ͻ�����ʾAB�͵�ֵDoc::SetSearchContent(const CString& value)
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

// C�ͻ�����ʾAB�͵�ֵDoc ���

#ifdef _DEBUG
void C�ͻ�����ʾAB�͵�ֵDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void C�ͻ�����ʾAB�͵�ֵDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C�ͻ�����ʾAB�͵�ֵDoc ����
