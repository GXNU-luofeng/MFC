
// 客户区显示AB和的值View.cpp : C客户区显示AB和的值View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "客户区显示AB和的值.h"
#endif

#include "客户区显示AB和的值Doc.h"
#include "客户区显示AB和的值View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C客户区显示AB和的值View

IMPLEMENT_DYNCREATE(C客户区显示AB和的值View, CView)

BEGIN_MESSAGE_MAP(C客户区显示AB和的值View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C客户区显示AB和的值View 构造/析构

C客户区显示AB和的值View::C客户区显示AB和的值View()
{
	// TODO: 在此处添加构造代码
	A = 1;
	B = 2;

}

C客户区显示AB和的值View::~C客户区显示AB和的值View()
{
}

BOOL C客户区显示AB和的值View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C客户区显示AB和的值View 绘制

void C客户区显示AB和的值View::OnDraw(CDC* /*pDC*/)
{
	C客户区显示AB和的值Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C客户区显示AB和的值View 诊断

#ifdef _DEBUG
void C客户区显示AB和的值View::AssertValid() const
{
	CView::AssertValid();
}

void C客户区显示AB和的值View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C客户区显示AB和的值Doc* C客户区显示AB和的值View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C客户区显示AB和的值Doc)));
	return (C客户区显示AB和的值Doc*)m_pDocument;
}
#endif //_DEBUG


// C客户区显示AB和的值View 消息处理程序


void C客户区显示AB和的值View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C客户区显示AB和的值Doc* pDoc = GetDocument();
	//int c = pDoc->A + pDoc->B;

	CString s = _T("A+B=3");
	//s.Format(_T("%d"), c);
	CClientDC dc(this);
	dc.TextOut(200, 200, s);

	CView::OnLButtonDown(nFlags, point);
}
