
// 随机画圆View.cpp : C随机画圆View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "随机画圆.h"
#endif

#include "随机画圆Doc.h"
#include "随机画圆View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C随机画圆View

IMPLEMENT_DYNCREATE(C随机画圆View, CView)

BEGIN_MESSAGE_MAP(C随机画圆View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C随机画圆View 构造/析构

C随机画圆View::C随机画圆View()
{
	// TODO: 在此处添加构造代码

}

C随机画圆View::~C随机画圆View()
{
}

BOOL C随机画圆View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C随机画圆View 绘制

void C随机画圆View::OnDraw(CDC* pDC)
{
	C随机画圆Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	//r = rand() % 100 + 5;
	CClientDC dc(this);
	dc.Ellipse(pDoc->x - r, pDoc->y - r, pDoc->x + r, pDoc->y + r);
	this->Invalidate();
	// TODO: 在此处为本机数据添加绘制代码
}


// C随机画圆View 诊断

#ifdef _DEBUG
void C随机画圆View::AssertValid() const
{
	CView::AssertValid();
}

void C随机画圆View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C随机画圆Doc* C随机画圆View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C随机画圆Doc)));
	return (C随机画圆Doc*)m_pDocument;
}
#endif //_DEBUG


// C随机画圆View 消息处理程序


void C随机画圆View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C随机画圆Doc* pDoc = GetDocument();
	r = rand() % 100 + 5;
	pDoc->x = point.x;
	pDoc->y = point.y;
	 //CClientDC dc(this);
	//dc.Ellipse(point.x - r, point.y - r, point.x + r, point.y + r);
	//this->Invalidate();


	CView::OnLButtonDown(nFlags, point);
}
