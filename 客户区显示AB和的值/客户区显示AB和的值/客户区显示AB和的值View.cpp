
// �ͻ�����ʾAB�͵�ֵView.cpp : C�ͻ�����ʾAB�͵�ֵView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ͻ�����ʾAB�͵�ֵ.h"
#endif

#include "�ͻ�����ʾAB�͵�ֵDoc.h"
#include "�ͻ�����ʾAB�͵�ֵView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ͻ�����ʾAB�͵�ֵView

IMPLEMENT_DYNCREATE(C�ͻ�����ʾAB�͵�ֵView, CView)

BEGIN_MESSAGE_MAP(C�ͻ�����ʾAB�͵�ֵView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C�ͻ�����ʾAB�͵�ֵView ����/����

C�ͻ�����ʾAB�͵�ֵView::C�ͻ�����ʾAB�͵�ֵView()
{
	// TODO: �ڴ˴���ӹ������
	A = 1;
	B = 2;

}

C�ͻ�����ʾAB�͵�ֵView::~C�ͻ�����ʾAB�͵�ֵView()
{
}

BOOL C�ͻ�����ʾAB�͵�ֵView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�ͻ�����ʾAB�͵�ֵView ����

void C�ͻ�����ʾAB�͵�ֵView::OnDraw(CDC* /*pDC*/)
{
	C�ͻ�����ʾAB�͵�ֵDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�ͻ�����ʾAB�͵�ֵView ���

#ifdef _DEBUG
void C�ͻ�����ʾAB�͵�ֵView::AssertValid() const
{
	CView::AssertValid();
}

void C�ͻ�����ʾAB�͵�ֵView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�ͻ�����ʾAB�͵�ֵDoc* C�ͻ�����ʾAB�͵�ֵView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ͻ�����ʾAB�͵�ֵDoc)));
	return (C�ͻ�����ʾAB�͵�ֵDoc*)m_pDocument;
}
#endif //_DEBUG


// C�ͻ�����ʾAB�͵�ֵView ��Ϣ�������


void C�ͻ�����ʾAB�͵�ֵView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C�ͻ�����ʾAB�͵�ֵDoc* pDoc = GetDocument();
	//int c = pDoc->A + pDoc->B;

	CString s = _T("A+B=3");
	//s.Format(_T("%d"), c);
	CClientDC dc(this);
	dc.TextOut(200, 200, s);

	CView::OnLButtonDown(nFlags, point);
}
