
// ��Ӳ˵���ԴView.cpp : C��Ӳ˵���ԴView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��Ӳ˵���Դ.h"
#endif

#include "��Ӳ˵���ԴDoc.h"
#include "��Ӳ˵���ԴView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��Ӳ˵���ԴView

IMPLEMENT_DYNCREATE(C��Ӳ˵���ԴView, CView)

BEGIN_MESSAGE_MAP(C��Ӳ˵���ԴView, CView)
	ON_COMMAND(ID_VIEW_STATUS_BAR, &C��Ӳ˵���ԴView::OnViewStatusBar)
	ON_COMMAND(ID_SHOWNAME, &C��Ӳ˵���ԴView::OnShowname)
END_MESSAGE_MAP()

// C��Ӳ˵���ԴView ����/����

C��Ӳ˵���ԴView::C��Ӳ˵���ԴView()
{
	// TODO: �ڴ˴���ӹ������

}

C��Ӳ˵���ԴView::~C��Ӳ˵���ԴView()
{
}

BOOL C��Ӳ˵���ԴView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��Ӳ˵���ԴView ����

void C��Ӳ˵���ԴView::OnDraw(CDC* /*pDC*/)
{
	C��Ӳ˵���ԴDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��Ӳ˵���ԴView ���

#ifdef _DEBUG
void C��Ӳ˵���ԴView::AssertValid() const
{
	CView::AssertValid();
}

void C��Ӳ˵���ԴView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��Ӳ˵���ԴDoc* C��Ӳ˵���ԴView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��Ӳ˵���ԴDoc)));
	return (C��Ӳ˵���ԴDoc*)m_pDocument;
}
#endif //_DEBUG


// C��Ӳ˵���ԴView ��Ϣ�������


void C��Ӳ˵���ԴView::OnViewStatusBar()
{
	// TODO: �ڴ���������������

}


void C��Ӳ˵���ԴView::OnShowname()
{
	// TODO: �ڴ���������������
	CString s;
	s = "�޷�";
	CClientDC dc(this);
	dc.TextOutW(200, 300, s);
}
