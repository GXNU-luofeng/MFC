
// 矩形的移动和变换1View.cpp : C矩形的移动和变换1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "矩形的移动和变换1.h"
#endif

#include "矩形的移动和变换1Doc.h"
#include "矩形的移动和变换1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C矩形的移动和变换1View

IMPLEMENT_DYNCREATE(C矩形的移动和变换1View, CView)

BEGIN_MESSAGE_MAP(C矩形的移动和变换1View, CView)
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// C矩形的移动和变换1View 构造/析构

C矩形的移动和变换1View::C矩形的移动和变换1View()
{
	// TODO: 在此处添加构造代码

}

C矩形的移动和变换1View::~C矩形的移动和变换1View()
{
}

BOOL C矩形的移动和变换1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C矩形的移动和变换1View 绘制

void C矩形的移动和变换1View::OnDraw(CDC* pDC)
{
	C矩形的移动和变换1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->cr);

	// TODO: 在此处为本机数据添加绘制代码
}


// C矩形的移动和变换1View 诊断

#ifdef _DEBUG
void C矩形的移动和变换1View::AssertValid() const
{
	CView::AssertValid();
}

void C矩形的移动和变换1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C矩形的移动和变换1Doc* C矩形的移动和变换1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C矩形的移动和变换1Doc)));
	return (C矩形的移动和变换1Doc*)m_pDocument;
}
#endif //_DEBUG


// C矩形的移动和变换1View 消息处理程序


void C矩形的移动和变换1View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C矩形的移动和变换1Doc* pDoc = GetDocument();
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
