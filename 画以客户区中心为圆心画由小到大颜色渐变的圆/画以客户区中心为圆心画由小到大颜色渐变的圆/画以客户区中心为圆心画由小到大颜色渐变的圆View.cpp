
// ���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView.cpp : C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "���Կͻ�������ΪԲ�Ļ���С������ɫ�����Բ.h"
#endif

#include "���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc.h"
#include "���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView

IMPLEMENT_DYNCREATE(C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView, CView)

BEGIN_MESSAGE_MAP(C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_TIMER()
END_MESSAGE_MAP()

// C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView ����/����

C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView::C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView()
{
	// TODO: �ڴ˴���ӹ������
	set = 1;
}

C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView::~C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView()
{
}

BOOL C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView ����

void C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView::OnDraw(CDC* pDC)
{
	C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	GetClientRect(&cr1);//���������ʾ��ɫ�����Բ
	CPen NewPen ;
	CPen	*poldPen;
	NewPen.CreatePen(PS_SOLID, 1, RGB(0, rand()%1000, 0));
	poldPen = pDC->SelectObject(&NewPen);
	a = (cr1.right - cr1.left) / 2;
	b = (cr1.bottom - cr1.top) / 2;
	//a = cs.cx/2;
	//b = cs.cy/2;
	if (set == 1)
	{
		SetTimer(NULL, rand() % 400 + 100, NULL);

		set = 0;
	}


	pDC->Ellipse(cr);
	pDC->SelectObject(poldPen);
	NewPen.DeleteObject();
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView ���

#ifdef _DEBUG
void C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView::AssertValid() const
{
	CView::AssertValid();
}

void C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc* C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc)));
	return (C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc*)m_pDocument;
}
#endif //_DEBUG


// C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView ��Ϣ�������


void C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	cr.left = a;
	cr.top = b;
	cr.right = a;
	cr.bottom = b;
	CView::OnLButtonDown(nFlags, point);
}


void C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	cr.left -= 1;
	cr.top -= 1;
	cr.right += 1;
	cr.bottom += 1;
	Invalidate();
	CView::OnTimer(nIDEvent);
}
