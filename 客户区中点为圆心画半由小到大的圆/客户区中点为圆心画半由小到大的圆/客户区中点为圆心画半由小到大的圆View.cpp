
// �ͻ����е�ΪԲ�Ļ�����С�����ԲView.cpp : C�ͻ����е�ΪԲ�Ļ�����С�����ԲView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ͻ����е�ΪԲ�Ļ�����С�����Բ.h"
#endif

#include "�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc.h"
#include "�ͻ����е�ΪԲ�Ļ�����С�����ԲView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ͻ����е�ΪԲ�Ļ�����С�����ԲView

IMPLEMENT_DYNCREATE(C�ͻ����е�ΪԲ�Ļ�����С�����ԲView, CView)

BEGIN_MESSAGE_MAP(C�ͻ����е�ΪԲ�Ļ�����С�����ԲView, CView)
	ON_WM_TIMER()
	ON_WM_LBUTTONDOWN()
//	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// C�ͻ����е�ΪԲ�Ļ�����С�����ԲView ����/����

C�ͻ����е�ΪԲ�Ļ�����С�����ԲView::C�ͻ����е�ΪԲ�Ļ�����С�����ԲView()
{
	// TODO: �ڴ˴���ӹ������
	
	set = 1;
	
	
	
}

C�ͻ����е�ΪԲ�Ļ�����С�����ԲView::~C�ͻ����е�ΪԲ�Ļ�����С�����ԲView()
{
	
}

BOOL C�ͻ����е�ΪԲ�Ļ�����С�����ԲView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�ͻ����е�ΪԲ�Ļ�����С�����ԲView ����

void C�ͻ����е�ΪԲ�Ļ�����С�����ԲView::OnDraw(CDC* pDC)
{
	C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	GetClientRect(&cr1);
	a = (cr1.right - cr1.left) / 2;
	b = (cr1.bottom - cr1.top) / 2;
	//a = cs.cx/2;
	//b = cs.cy/2;
	if (set == 1)
	{
		SetTimer(NULL, rand() % 400 + 100, NULL);

		set = 0;
	}
	
	
    pDC->Ellipse(cr);//���������ʾ�����Բ

	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�ͻ����е�ΪԲ�Ļ�����С�����ԲView ���

#ifdef _DEBUG
void C�ͻ����е�ΪԲ�Ļ�����С�����ԲView::AssertValid() const
{
	
	
	CView::AssertValid();
}

void C�ͻ����е�ΪԲ�Ļ�����С�����ԲView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc* C�ͻ����е�ΪԲ�Ļ�����С�����ԲView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc)));
	return (C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc*)m_pDocument;
}
#endif //_DEBUG


// C�ͻ����е�ΪԲ�Ļ�����С�����ԲView ��Ϣ�������


void C�ͻ����е�ΪԲ�Ļ�����С�����ԲView::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc* pDoc = GetDocument();
	cr.left -=  1;
	cr.top -=  1;
	cr.right +=  1;
	cr.bottom +=  1;
	Invalidate();
	CView::OnTimer(nIDEvent);
}



void C�ͻ����е�ΪԲ�Ļ�����С�����ԲView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	cr.left = a ;
	cr.top = b ;
	cr.right = a ;
	cr.bottom = b ;
	CView::OnLButtonDown(nFlags, point);
}


//void C�ͻ����е�ΪԲ�Ļ�����С�����ԲView::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
//{
//	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
//	
//	CView::OnKeyDown(nChar, nRepCnt, nFlags);
//}
