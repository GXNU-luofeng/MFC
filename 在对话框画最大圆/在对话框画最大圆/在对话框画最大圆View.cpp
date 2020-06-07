
// 在对话框画最大圆View.cpp : C在对话框画最大圆View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "在对话框画最大圆.h"
#endif

#include "在对话框画最大圆Doc.h"
#include "在对话框画最大圆View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C在对话框画最大圆View

IMPLEMENT_DYNCREATE(C在对话框画最大圆View, CView)

BEGIN_MESSAGE_MAP(C在对话框画最大圆View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C在对话框画最大圆View 构造/析构

C在对话框画最大圆View::C在对话框画最大圆View()
{
	// TODO: 在此处添加构造代码

}

C在对话框画最大圆View::~C在对话框画最大圆View()
{
}

BOOL C在对话框画最大圆View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C在对话框画最大圆View 绘制

void C在对话框画最大圆View::OnDraw(CDC* pDC)
{
	C在对话框画最大圆Doc* pDoc = GetDocument();
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


// C在对话框画最大圆View 诊断

#ifdef _DEBUG
void C在对话框画最大圆View::AssertValid() const
{
	CView::AssertValid();
}

void C在对话框画最大圆View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C在对话框画最大圆Doc* C在对话框画最大圆View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C在对话框画最大圆Doc)));
	return (C在对话框画最大圆Doc*)m_pDocument;
}
#endif //_DEBUG


// C在对话框画最大圆View 消息处理程序


void C在对话框画最大圆View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C在对话框画最大圆Doc* pDoc = GetDocument();
	//CRect rect;
	this->GetClientRect(&pDoc->rect);
	/*int x = (rect.right - rect.left)/2;
	int y = (rect.bottom - rect.top)/2;
	 CRect rect1(x - y, 0, x + y, y + y);
	CClientDC dc(this);
	dc.Ellipse(rect1);*/
	

	CView::OnLButtonDown(nFlags, point);
}
