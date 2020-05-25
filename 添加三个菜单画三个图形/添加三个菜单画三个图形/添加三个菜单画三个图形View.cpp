
// ��������˵�������ͼ��View.cpp : C��������˵�������ͼ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��������˵�������ͼ��.h"
#endif

#include "��������˵�������ͼ��Doc.h"
#include "��������˵�������ͼ��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��������˵�������ͼ��View

IMPLEMENT_DYNCREATE(C��������˵�������ͼ��View, CView)

BEGIN_MESSAGE_MAP(C��������˵�������ͼ��View, CView)
	ON_COMMAND(ID_HUAXIAN, &C��������˵�������ͼ��View::OnHuaxian)
	ON_COMMAND(ID_HUAJUXING, &C��������˵�������ͼ��View::OnHuajuxing)
	ON_COMMAND(ID_HUATUYUAN, &C��������˵�������ͼ��View::OnHuatuyuan)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// C��������˵�������ͼ��View ����/����

C��������˵�������ͼ��View::C��������˵�������ͼ��View()
{
	// TODO: �ڴ˴���ӹ������

}

C��������˵�������ͼ��View::~C��������˵�������ͼ��View()
{
}

BOOL C��������˵�������ͼ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��������˵�������ͼ��View ����

void C��������˵�������ͼ��View::OnDraw(CDC* /*pDC*/)
{
	C��������˵�������ͼ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��������˵�������ͼ��View ���

#ifdef _DEBUG
void C��������˵�������ͼ��View::AssertValid() const
{
	CView::AssertValid();
}

void C��������˵�������ͼ��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��������˵�������ͼ��Doc* C��������˵�������ͼ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��������˵�������ͼ��Doc)));
	return (C��������˵�������ͼ��Doc*)m_pDocument;
}
#endif //_DEBUG


// C��������˵�������ͼ��View ��Ϣ�������


void C��������˵�������ͼ��View::OnHuaxian()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	dc.MoveTo(point0);
	dc.LineTo(point1);
}


void C��������˵�������ͼ��View::OnHuajuxing()
{
	// TODO: �ڴ���������������
	CClientDC dc1(this);
	CRect cr(point0.x, point0.y, point1.x, point1.y);
	dc1.Rectangle(cr);
	
}


void C��������˵�������ͼ��View::OnHuatuyuan()
{
	// TODO: �ڴ���������������
	CClientDC dc2(this);
	CRect cr(point0.x, point0.y, point1.x, point1.y);
	dc2.Ellipse(cr);
}


void C��������˵�������ͼ��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	point0 = point;
	CView::OnLButtonDown(nFlags, point);
}


void C��������˵�������ͼ��View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	point1 = point;
	CView::OnLButtonUp(nFlags, point);
}
