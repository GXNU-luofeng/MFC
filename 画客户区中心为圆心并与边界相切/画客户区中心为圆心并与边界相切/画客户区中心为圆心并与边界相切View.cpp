
// 画客户区中心为圆心并与边界相切View.cpp : C画客户区中心为圆心并与边界相切View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "画客户区中心为圆心并与边界相切.h"
#endif

#include "画客户区中心为圆心并与边界相切Doc.h"
#include "画客户区中心为圆心并与边界相切View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C画客户区中心为圆心并与边界相切View

IMPLEMENT_DYNCREATE(C画客户区中心为圆心并与边界相切View, CView)

BEGIN_MESSAGE_MAP(C画客户区中心为圆心并与边界相切View, CView)
END_MESSAGE_MAP()

// C画客户区中心为圆心并与边界相切View 构造/析构

C画客户区中心为圆心并与边界相切View::C画客户区中心为圆心并与边界相切View()
{
	// TODO: 在此处添加构造代码

}

C画客户区中心为圆心并与边界相切View::~C画客户区中心为圆心并与边界相切View()
{
}

BOOL C画客户区中心为圆心并与边界相切View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C画客户区中心为圆心并与边界相切View 绘制

void C画客户区中心为圆心并与边界相切View::OnDraw(CDC* pDC)
{
	C画客户区中心为圆心并与边界相切Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect cr;
	this->GetClientRect(&cr);
	pDC->Ellipse(cr);
	this->Invalidate();


	// TODO: 在此处为本机数据添加绘制代码
}


// C画客户区中心为圆心并与边界相切View 诊断

#ifdef _DEBUG
void C画客户区中心为圆心并与边界相切View::AssertValid() const
{
	CView::AssertValid();
}

void C画客户区中心为圆心并与边界相切View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C画客户区中心为圆心并与边界相切Doc* C画客户区中心为圆心并与边界相切View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C画客户区中心为圆心并与边界相切Doc)));
	return (C画客户区中心为圆心并与边界相切Doc*)m_pDocument;
}
#endif //_DEBUG


// C画客户区中心为圆心并与边界相切View 消息处理程序
