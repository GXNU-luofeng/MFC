
// ��ʾ������º�̧��View.cpp : C��ʾ������º�̧��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ʾ������º�̧��.h"
#endif

#include "��ʾ������º�̧��Doc.h"
#include "��ʾ������º�̧��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ʾ������º�̧��View

IMPLEMENT_DYNCREATE(C��ʾ������º�̧��View, CView)

BEGIN_MESSAGE_MAP(C��ʾ������º�̧��View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// C��ʾ������º�̧��View ����/����

C��ʾ������º�̧��View::C��ʾ������º�̧��View()
{
	// TODO: �ڴ˴���ӹ������

}

C��ʾ������º�̧��View::~C��ʾ������º�̧��View()
{
}

BOOL C��ʾ������º�̧��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ʾ������º�̧��View ����

void C��ʾ������º�̧��View::OnDraw(CDC* /*pDC*/)
{
	C��ʾ������º�̧��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ʾ������º�̧��View ���

#ifdef _DEBUG
void C��ʾ������º�̧��View::AssertValid() const
{
	CView::AssertValid();
}

void C��ʾ������º�̧��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ʾ������º�̧��Doc* C��ʾ������º�̧��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ʾ������º�̧��Doc)));
	return (C��ʾ������º�̧��Doc*)m_pDocument;
}
#endif //_DEBUG


// C��ʾ������º�̧��View ��Ϣ�������


void C��ʾ������º�̧��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString c = _T("������ڱ�����");
	CClientDC dc(this);
	dc.TextOutW(200, 200, c);

	




	CView::OnLButtonDown(nFlags, point);
}


void C��ʾ������º�̧��View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString c = _T("������ڱ�̧��");
	CClientDC dc(this);
	dc.TextOutW(200, 200, c);

	CView::OnLButtonUp(nFlags, point);
}
