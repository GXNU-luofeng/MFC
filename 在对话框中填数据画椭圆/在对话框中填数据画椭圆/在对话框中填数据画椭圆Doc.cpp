
// �ڶԻ����������ݻ���ԲDoc.cpp : C�ڶԻ����������ݻ���ԲDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ڶԻ����������ݻ���Բ.h"
#endif

#include "�ڶԻ����������ݻ���ԲDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C�ڶԻ����������ݻ���ԲDoc

IMPLEMENT_DYNCREATE(C�ڶԻ����������ݻ���ԲDoc, CDocument)

BEGIN_MESSAGE_MAP(C�ڶԻ����������ݻ���ԲDoc, CDocument)
END_MESSAGE_MAP()


// C�ڶԻ����������ݻ���ԲDoc ����/����

C�ڶԻ����������ݻ���ԲDoc::C�ڶԻ����������ݻ���ԲDoc()
{
	// TODO: �ڴ����һ���Թ������

}

C�ڶԻ����������ݻ���ԲDoc::~C�ڶԻ����������ݻ���ԲDoc()
{
}

BOOL C�ڶԻ����������ݻ���ԲDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// C�ڶԻ����������ݻ���ԲDoc ���л�

void C�ڶԻ����������ݻ���ԲDoc::Serialize(CArchive& ar)
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
void C�ڶԻ����������ݻ���ԲDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void C�ڶԻ����������ݻ���ԲDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void C�ڶԻ����������ݻ���ԲDoc::SetSearchContent(const CString& value)
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

// C�ڶԻ����������ݻ���ԲDoc ���

#ifdef _DEBUG
void C�ڶԻ����������ݻ���ԲDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void C�ڶԻ����������ݻ���ԲDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C�ڶԻ����������ݻ���ԲDoc ����
