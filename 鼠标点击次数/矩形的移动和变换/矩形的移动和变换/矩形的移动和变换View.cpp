
// 矩形的移动和变换View.cpp : C矩形的移动和变换View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "矩形的移动和变换.h"
#endif

#include "矩形的移动和变换Doc.h"
#include "矩形的移动和变换View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C矩形的移动和变换View

IMPLEMENT_DYNCREATE(C矩形的移动和变换View, CView)

BEGIN_MESSAGE_MAP(C矩形的移动和变换View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C矩形的移动和变换View 构造/析构

C矩形的移动和变换View::C矩形的移动和变换View()
{
	// TODO: 在此处添加构造代码

}

C矩形的移动和变换View::~C矩形的移动和变换View()
{
}

BOOL C矩形的移动和变换View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C矩形的移动和变换View 绘制

void C矩形的移动和变换View::OnDraw(CDC* pDC)
{
	C矩形的移动和变换Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	
}


// C矩形的移动和变换View 诊断

#ifdef _DEBUG
void C矩形的移动和变换View::AssertValid() const
{
	CView::AssertValid();
}

void C矩形的移动和变换View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C矩形的移动和变换Doc* C矩形的移动和变换View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C矩形的移动和变换Doc)));
	return (C矩形的移动和变换Doc*)m_pDocument;
}
#endif //_DEBUG


// C矩形的移动和变换View 消息处理程序


void C矩形的移动和变换View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C矩形的移动和变换Doc* pDoc = GetDocument();
	
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
