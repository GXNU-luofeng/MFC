
// ���������Ϊ������Ͷ̰������Բ�ĵ���View.cpp : C���������Ϊ������Ͷ̰������Բ�ĵ���View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "���������Ϊ������Ͷ̰������Բ�ĵ���.h"
#endif

#include "���������Ϊ������Ͷ̰������Բ�ĵ���Doc.h"
#include "���������Ϊ������Ͷ̰������Բ�ĵ���View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C���������Ϊ������Ͷ̰������Բ�ĵ���View

IMPLEMENT_DYNCREATE(C���������Ϊ������Ͷ̰������Բ�ĵ���View, CView)

BEGIN_MESSAGE_MAP(C���������Ϊ������Ͷ̰������Բ�ĵ���View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C���������Ϊ������Ͷ̰������Բ�ĵ���View ����/����

C���������Ϊ������Ͷ̰������Բ�ĵ���View::C���������Ϊ������Ͷ̰������Բ�ĵ���View()
{
	// TODO: �ڴ˴���ӹ������

}

C���������Ϊ������Ͷ̰������Բ�ĵ���View::~C���������Ϊ������Ͷ̰������Բ�ĵ���View()
{
}

BOOL C���������Ϊ������Ͷ̰������Բ�ĵ���View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C���������Ϊ������Ͷ̰������Բ�ĵ���View ����

void C���������Ϊ������Ͷ̰������Բ�ĵ���View::OnDraw(CDC* /*pDC*/)
{
	C���������Ϊ������Ͷ̰������Բ�ĵ���Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C���������Ϊ������Ͷ̰������Բ�ĵ���View ���

#ifdef _DEBUG
void C���������Ϊ������Ͷ̰������Բ�ĵ���View::AssertValid() const
{
	CView::AssertValid();
}

void C���������Ϊ������Ͷ̰������Բ�ĵ���View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C���������Ϊ������Ͷ̰������Բ�ĵ���Doc* C���������Ϊ������Ͷ̰������Բ�ĵ���View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C���������Ϊ������Ͷ̰������Բ�ĵ���Doc)));
	return (C���������Ϊ������Ͷ̰������Բ�ĵ���Doc*)m_pDocument;
}
#endif //_DEBUG


// C���������Ϊ������Ͷ̰������Բ�ĵ���View ��Ϣ�������


void C���������Ϊ������Ͷ̰������Բ�ĵ���View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C���������Ϊ������Ͷ̰������Բ�ĵ���Doc* pDoc = GetDocument();
	int a, b;
	a = rand() % 100 + 5;
	b = rand() % 100 + 5;
	CRect cr(point.x - a, point.y - b, point.x + a, point.y + b);
	pDoc->ca.Add(cr);
	CClientDC dc(this);
	for (int i = 0; i < pDoc->ca.GetSize(); i++)
	{
		dc.Ellipse(pDoc->ca[i]);
	}
	CView::OnLButtonDown(nFlags, point);
}
