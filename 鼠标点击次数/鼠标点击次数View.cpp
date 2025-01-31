
// 鼠标点击次数View.cpp : C鼠标点击次数View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "鼠标点击次数.h"
#endif

#include "鼠标点击次数Doc.h"
#include "鼠标点击次数View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C鼠标点击次数View

IMPLEMENT_DYNCREATE(C鼠标点击次数View, CView)

BEGIN_MESSAGE_MAP(C鼠标点击次数View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// C鼠标点击次数View 构造/析构

C鼠标点击次数View::C鼠标点击次数View()
{
	// TODO: 在此处添加构造代码
	count = 0;

}

C鼠标点击次数View::~C鼠标点击次数View()
{
}

BOOL C鼠标点击次数View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C鼠标点击次数View 绘制

void C鼠标点击次数View::OnDraw(CDC* pDC)
{
	C鼠标点击次数Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->TextOutW(100, 200, s);
	this->Invalidate();


	// TODO: 在此处为本机数据添加绘制代码
}


// C鼠标点击次数View 诊断

#ifdef _DEBUG
void C鼠标点击次数View::AssertValid() const
{
	CView::AssertValid();
}

void C鼠标点击次数View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C鼠标点击次数Doc* C鼠标点击次数View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C鼠标点击次数Doc)));
	return (C鼠标点击次数Doc*)m_pDocument;
}
#endif //_DEBUG


// C鼠标点击次数View 消息处理程序


void C鼠标点击次数View::OnLButtonDown(UINT nFlags, CPoint point)
{ 
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	count++;

	CView::OnLButtonDown(nFlags, point);
}


void C鼠标点击次数View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	s.Format(_T("%d"), count);


	CView::OnLButtonUp(nFlags, point);
}
