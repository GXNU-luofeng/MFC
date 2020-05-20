
// 画对话框中最大的圆1View.cpp : C画对话框中最大的圆1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "画对话框中最大的圆1.h"
#endif

#include "画对话框中最大的圆1Doc.h"
#include "画对话框中最大的圆1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C画对话框中最大的圆1View

IMPLEMENT_DYNCREATE(C画对话框中最大的圆1View, CView)

BEGIN_MESSAGE_MAP(C画对话框中最大的圆1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C画对话框中最大的圆1View 构造/析构

C画对话框中最大的圆1View::C画对话框中最大的圆1View()
{
	// TODO: 在此处添加构造代码

}

C画对话框中最大的圆1View::~C画对话框中最大的圆1View()
{
}

BOOL C画对话框中最大的圆1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C画对话框中最大的圆1View 绘制

void C画对话框中最大的圆1View::OnDraw(CDC* /*pDC*/)
{
	C画对话框中最大的圆1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	int x = (pDoc->rect.right - pDoc->rect.left) / 2;
	int y = (pDoc->rect.bottom - pDoc->rect.top) / 2;
	CRect rect1(x - y, 0, x + y, y + y);
	CClientDC dc(this);
	dc.Ellipse(rect1);
	this->Invalidate();
	// TODO: 在此处为本机数据添加绘制代码
}


// C画对话框中最大的圆1View 诊断

#ifdef _DEBUG
void C画对话框中最大的圆1View::AssertValid() const
{
	CView::AssertValid();
}

void C画对话框中最大的圆1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C画对话框中最大的圆1Doc* C画对话框中最大的圆1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C画对话框中最大的圆1Doc)));
	return (C画对话框中最大的圆1Doc*)m_pDocument;
}
#endif //_DEBUG


// C画对话框中最大的圆1View 消息处理程序


void C画对话框中最大的圆1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C画对话框中最大的圆1Doc* pDoc = GetDocument();
	//CRect rect;
	this->GetClientRect(&pDoc->rect);
	CView::OnLButtonDown(nFlags, point);
}
