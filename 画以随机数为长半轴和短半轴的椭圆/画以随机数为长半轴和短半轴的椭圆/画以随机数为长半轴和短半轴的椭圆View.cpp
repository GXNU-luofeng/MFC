
// ���������Ϊ������Ͷ̰������ԲView.cpp : C���������Ϊ������Ͷ̰������ԲView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "���������Ϊ������Ͷ̰������Բ.h"
#endif

#include "���������Ϊ������Ͷ̰������ԲDoc.h"
#include "���������Ϊ������Ͷ̰������ԲView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C���������Ϊ������Ͷ̰������ԲView

IMPLEMENT_DYNCREATE(C���������Ϊ������Ͷ̰������ԲView, CView)

BEGIN_MESSAGE_MAP(C���������Ϊ������Ͷ̰������ԲView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C���������Ϊ������Ͷ̰������ԲView ����/����

C���������Ϊ������Ͷ̰������ԲView::C���������Ϊ������Ͷ̰������ԲView()
{
	// TODO: �ڴ˴���ӹ������
	ca.SetSize(1000);
}

C���������Ϊ������Ͷ̰������ԲView::~C���������Ϊ������Ͷ̰������ԲView()
{
}

BOOL C���������Ϊ������Ͷ̰������ԲView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C���������Ϊ������Ͷ̰������ԲView ����

void C���������Ϊ������Ͷ̰������ԲView::OnDraw(CDC* pDC)
{
	C���������Ϊ������Ͷ̰������ԲDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	a = rand() % 100 + 5;
	b = rand() % 100 + 5;
	
	
	
	

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C���������Ϊ������Ͷ̰������ԲView ���

#ifdef _DEBUG
void C���������Ϊ������Ͷ̰������ԲView::AssertValid() const
{
	CView::AssertValid();
}

void C���������Ϊ������Ͷ̰������ԲView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C���������Ϊ������Ͷ̰������ԲDoc* C���������Ϊ������Ͷ̰������ԲView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C���������Ϊ������Ͷ̰������ԲDoc)));
	return (C���������Ϊ������Ͷ̰������ԲDoc*)m_pDocument;
}
#endif //_DEBUG


// C���������Ϊ������Ͷ̰������ԲView ��Ϣ�������


void C���������Ϊ������Ͷ̰������ԲView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C���������Ϊ������Ͷ̰������ԲDoc* pDoc = GetDocument();
	
	CRect cr(point.x - a, point.y - b, point.x + a, point.y + b);
	ca.Add(cr);
	CClientDC dc(this);
	for (int i = 0; i < ca.GetSize(); i++)
	{
		dc.Ellipse(ca[i]);
	}
	
	


	CView::OnLButtonDown(nFlags, point);
}
