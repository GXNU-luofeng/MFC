
// ���ε��ƶ��ͱ任1View.cpp : C���ε��ƶ��ͱ任1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "���ε��ƶ��ͱ任1.h"
#endif

#include "���ε��ƶ��ͱ任1Doc.h"
#include "���ε��ƶ��ͱ任1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C���ε��ƶ��ͱ任1View

IMPLEMENT_DYNCREATE(C���ε��ƶ��ͱ任1View, CView)

BEGIN_MESSAGE_MAP(C���ε��ƶ��ͱ任1View, CView)
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// C���ε��ƶ��ͱ任1View ����/����

C���ε��ƶ��ͱ任1View::C���ε��ƶ��ͱ任1View()
{
	// TODO: �ڴ˴���ӹ������

}

C���ε��ƶ��ͱ任1View::~C���ε��ƶ��ͱ任1View()
{
}

BOOL C���ε��ƶ��ͱ任1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C���ε��ƶ��ͱ任1View ����

void C���ε��ƶ��ͱ任1View::OnDraw(CDC* pDC)
{
	C���ε��ƶ��ͱ任1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->cr);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C���ε��ƶ��ͱ任1View ���

#ifdef _DEBUG
void C���ε��ƶ��ͱ任1View::AssertValid() const
{
	CView::AssertValid();
}

void C���ε��ƶ��ͱ任1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C���ε��ƶ��ͱ任1Doc* C���ε��ƶ��ͱ任1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C���ε��ƶ��ͱ任1Doc)));
	return (C���ε��ƶ��ͱ任1Doc*)m_pDocument;
}
#endif //_DEBUG


// C���ε��ƶ��ͱ任1View ��Ϣ�������


void C���ε��ƶ��ͱ任1View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C���ε��ƶ��ͱ任1Doc* pDoc = GetDocument();
	CRect cr1;
	GetClientRect(&cr1);
	switch (nChar)
	{
	case VK_UP:
		if (pDoc->cr.top>0)
		{
			pDoc->cr.left += 0;
			pDoc->cr.bottom -= 10;
			pDoc->cr.right += 0;
			pDoc->cr.top -= 10;
		}
		break;
	case VK_DOWN:
		if (pDoc->cr.bottom <= (cr1.bottom - cr1.top))
		{
			pDoc->cr.left += 0;
			pDoc->cr.bottom += 10;
			pDoc->cr.right += 0;
			pDoc->cr.top += 10;
		}
		break;
	case VK_RIGHT:
		if (pDoc->cr.right<=(cr1.right-cr1.left))
		{
			pDoc->cr.left += 10;
			pDoc->cr.bottom += 0;
			pDoc->cr.right += 10;
			pDoc->cr.top += 0;
		}
		break;
	case VK_LEFT:
		if (pDoc->cr.left>0)
		{
			pDoc->cr.left -= 10;
			pDoc->cr.bottom += 0;
			pDoc->cr.right -= 10;
			pDoc->cr.top += 0;
		}
		break;
	case VK_HOME:
		if (pDoc->cr.top>0&&pDoc->cr.left>0)
		{
			pDoc->cr.left -= 10;
			pDoc->cr.bottom -= 5;
			pDoc->cr.right -= 5;
			pDoc->cr.top -= 10;
		}
		break;
	case VK_RETURN:
		if (pDoc->cr.bottom <= (cr1.bottom - cr1.top) && pDoc->cr.right <= (cr1.right - cr1.left))
		{
			pDoc->cr.left += 10;
			pDoc->cr.bottom += 5;
			pDoc->cr.right += 5;
			pDoc->cr.top += 10;
		}
		break;
		
	}
	InvalidateRect(NULL, TRUE);

	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
