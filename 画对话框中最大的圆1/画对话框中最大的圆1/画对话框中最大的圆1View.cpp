
// ���Ի���������Բ1View.cpp : C���Ի���������Բ1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "���Ի���������Բ1.h"
#endif

#include "���Ի���������Բ1Doc.h"
#include "���Ի���������Բ1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C���Ի���������Բ1View

IMPLEMENT_DYNCREATE(C���Ի���������Բ1View, CView)

BEGIN_MESSAGE_MAP(C���Ի���������Բ1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C���Ի���������Բ1View ����/����

C���Ի���������Բ1View::C���Ի���������Բ1View()
{
	// TODO: �ڴ˴���ӹ������

}

C���Ի���������Բ1View::~C���Ի���������Բ1View()
{
}

BOOL C���Ի���������Բ1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C���Ի���������Բ1View ����

void C���Ի���������Բ1View::OnDraw(CDC* /*pDC*/)
{
	C���Ի���������Բ1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	int x = (pDoc->rect.right - pDoc->rect.left) / 2;
	int y = (pDoc->rect.bottom - pDoc->rect.top) / 2;
	CRect rect1(x - y, 0, x + y, y + y);
	CClientDC dc(this);
	dc.Ellipse(rect1);
	this->Invalidate();
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C���Ի���������Բ1View ���

#ifdef _DEBUG
void C���Ի���������Բ1View::AssertValid() const
{
	CView::AssertValid();
}

void C���Ի���������Բ1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C���Ի���������Բ1Doc* C���Ի���������Բ1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C���Ի���������Բ1Doc)));
	return (C���Ի���������Բ1Doc*)m_pDocument;
}
#endif //_DEBUG


// C���Ի���������Բ1View ��Ϣ�������


void C���Ի���������Բ1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C���Ի���������Բ1Doc* pDoc = GetDocument();
	//CRect rect;
	this->GetClientRect(&pDoc->rect);
	CView::OnLButtonDown(nFlags, point);
}
