
// �ڶԻ������ԲView.cpp : C�ڶԻ������ԲView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ڶԻ������Բ.h"
#endif

#include "�ڶԻ������ԲDoc.h"
#include "�ڶԻ������ԲView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ڶԻ������ԲView

IMPLEMENT_DYNCREATE(C�ڶԻ������ԲView, CView)

BEGIN_MESSAGE_MAP(C�ڶԻ������ԲView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C�ڶԻ������ԲView ����/����

C�ڶԻ������ԲView::C�ڶԻ������ԲView()
{
	// TODO: �ڴ˴���ӹ������

}

C�ڶԻ������ԲView::~C�ڶԻ������ԲView()
{
}

BOOL C�ڶԻ������ԲView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�ڶԻ������ԲView ����

void C�ڶԻ������ԲView::OnDraw(CDC* pDC)
{
	C�ڶԻ������ԲDoc* pDoc = GetDocument();
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


// C�ڶԻ������ԲView ���

#ifdef _DEBUG
void C�ڶԻ������ԲView::AssertValid() const
{
	CView::AssertValid();
}

void C�ڶԻ������ԲView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�ڶԻ������ԲDoc* C�ڶԻ������ԲView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ڶԻ������ԲDoc)));
	return (C�ڶԻ������ԲDoc*)m_pDocument;
}
#endif //_DEBUG


// C�ڶԻ������ԲView ��Ϣ�������


void C�ڶԻ������ԲView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C�ڶԻ������ԲDoc* pDoc = GetDocument();
	//CRect rect;
	this->GetClientRect(&pDoc->rect);
	/*int x = (rect.right - rect.left)/2;
	int y = (rect.bottom - rect.top)/2;
	 CRect rect1(x - y, 0, x + y, y + y);
	CClientDC dc(this);
	dc.Ellipse(rect1);*/
	

	CView::OnLButtonDown(nFlags, point);
}
