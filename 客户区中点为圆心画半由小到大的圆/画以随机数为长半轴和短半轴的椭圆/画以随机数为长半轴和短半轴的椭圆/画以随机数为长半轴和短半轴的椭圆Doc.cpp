
// ���������Ϊ������Ͷ̰������ԲDoc.cpp : C���������Ϊ������Ͷ̰������ԲDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "���������Ϊ������Ͷ̰������Բ.h"
#endif

#include "���������Ϊ������Ͷ̰������ԲDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C���������Ϊ������Ͷ̰������ԲDoc

IMPLEMENT_DYNCREATE(C���������Ϊ������Ͷ̰������ԲDoc, CDocument)

BEGIN_MESSAGE_MAP(C���������Ϊ������Ͷ̰������ԲDoc, CDocument)
END_MESSAGE_MAP()


// C���������Ϊ������Ͷ̰������ԲDoc ����/����

C���������Ϊ������Ͷ̰������ԲDoc::C���������Ϊ������Ͷ̰������ԲDoc()
{
	// TODO: �ڴ����һ���Թ������

}

C���������Ϊ������Ͷ̰������ԲDoc::~C���������Ϊ������Ͷ̰������ԲDoc()
{
}

BOOL C���������Ϊ������Ͷ̰������ԲDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// C���������Ϊ������Ͷ̰������ԲDoc ���л�

void C���������Ϊ������Ͷ̰������ԲDoc::Serialize(CArchive& ar)
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
void C���������Ϊ������Ͷ̰������ԲDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void C���������Ϊ������Ͷ̰������ԲDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void C���������Ϊ������Ͷ̰������ԲDoc::SetSearchContent(const CString& value)
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

// C���������Ϊ������Ͷ̰������ԲDoc ���

#ifdef _DEBUG
void C���������Ϊ������Ͷ̰������ԲDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void C���������Ϊ������Ͷ̰������ԲDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C���������Ϊ������Ͷ̰������ԲDoc ����
