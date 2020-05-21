
// 显示左键按下和抬起View.cpp : C显示左键按下和抬起View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "显示左键按下和抬起.h"
#endif

#include "显示左键按下和抬起Doc.h"
#include "显示左键按下和抬起View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C显示左键按下和抬起View

IMPLEMENT_DYNCREATE(C显示左键按下和抬起View, CView)

BEGIN_MESSAGE_MAP(C显示左键按下和抬起View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// C显示左键按下和抬起View 构造/析构

C显示左键按下和抬起View::C显示左键按下和抬起View()
{
	// TODO: 在此处添加构造代码

}

C显示左键按下和抬起View::~C显示左键按下和抬起View()
{
}

BOOL C显示左键按下和抬起View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C显示左键按下和抬起View 绘制

void C显示左键按下和抬起View::OnDraw(CDC* /*pDC*/)
{
	C显示左键按下和抬起Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C显示左键按下和抬起View 诊断

#ifdef _DEBUG
void C显示左键按下和抬起View::AssertValid() const
{
	CView::AssertValid();
}

void C显示左键按下和抬起View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C显示左键按下和抬起Doc* C显示左键按下和抬起View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C显示左键按下和抬起Doc)));
	return (C显示左键按下和抬起Doc*)m_pDocument;
}
#endif //_DEBUG


// C显示左键按下和抬起View 消息处理程序


void C显示左键按下和抬起View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString c = _T("左键正在被按下");
	CClientDC dc(this);
	dc.TextOutW(200, 200, c);

	




	CView::OnLButtonDown(nFlags, point);
}


void C显示左键按下和抬起View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString c = _T("左键正在被抬起");
	CClientDC dc(this);
	dc.TextOutW(200, 200, c);

	CView::OnLButtonUp(nFlags, point);
}
