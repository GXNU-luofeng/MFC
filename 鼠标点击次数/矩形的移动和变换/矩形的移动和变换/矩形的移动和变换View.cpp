
// ���ε��ƶ��ͱ任View.cpp : C���ε��ƶ��ͱ任View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "���ε��ƶ��ͱ任.h"
#endif

#include "���ε��ƶ��ͱ任Doc.h"
#include "���ε��ƶ��ͱ任View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C���ε��ƶ��ͱ任View

IMPLEMENT_DYNCREATE(C���ε��ƶ��ͱ任View, CView)

BEGIN_MESSAGE_MAP(C���ε��ƶ��ͱ任View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C���ε��ƶ��ͱ任View ����/����

C���ε��ƶ��ͱ任View::C���ε��ƶ��ͱ任View()
{
	// TODO: �ڴ˴���ӹ������

}

C���ε��ƶ��ͱ任View::~C���ε��ƶ��ͱ任View()
{
}

BOOL C���ε��ƶ��ͱ任View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C���ε��ƶ��ͱ任View ����

void C���ε��ƶ��ͱ任View::OnDraw(CDC* pDC)
{
	C���ε��ƶ��ͱ任Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	
}


// C���ε��ƶ��ͱ任View ���

#ifdef _DEBUG
void C���ε��ƶ��ͱ任View::AssertValid() const
{
	CView::AssertValid();
}

void C���ε��ƶ��ͱ任View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C���ε��ƶ��ͱ任Doc* C���ε��ƶ��ͱ任View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C���ε��ƶ��ͱ任Doc)));
	return (C���ε��ƶ��ͱ任Doc*)m_pDocument;
}
#endif //_DEBUG


// C���ε��ƶ��ͱ任View ��Ϣ�������


void C���ε��ƶ��ͱ任View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C���ε��ƶ��ͱ任Doc* pDoc = GetDocument();
	
	if (nFlags&VK_UP)
	{
		pDoc->cr.left += 0;
		pDoc->cr.bottom -= 10;
		pDoc->cr.right += 0;
		pDoc->cr.top -= 10;
     }
	if (nFlags&VK_DOWN)
	{
		pDoc->cr.left += 0;
		pDoc->cr.bottom += 10;
		pDoc->cr.right += 0;
		pDoc->cr.top += 10;
	}
	if (nFlags&VK_RIGHT)
	{
		pDoc->cr.left += 10;
		pDoc->cr.bottom += 0;
		pDoc->cr.right += 10;
		pDoc->cr.top += 0;
	}
	if (nFlags&VK_LEFT)
	{
		pDoc->cr.left -= 10;
		pDoc->cr.bottom += 0;
		pDoc->cr.right -= 10;
		pDoc->cr.top += 0;
	}
	InvalidateRect(NULL, TRUE);

	CView::OnLButtonDown(nFlags, point);
}
