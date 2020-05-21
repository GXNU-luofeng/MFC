
// 文档类自我介绍View.cpp : C文档类自我介绍View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "文档类自我介绍.h"
#endif

#include "文档类自我介绍Doc.h"
#include "文档类自我介绍View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C文档类自我介绍View

IMPLEMENT_DYNCREATE(C文档类自我介绍View, CView)

BEGIN_MESSAGE_MAP(C文档类自我介绍View, CView)
END_MESSAGE_MAP()

// C文档类自我介绍View 构造/析构

C文档类自我介绍View::C文档类自我介绍View()
{
	// TODO: 在此处添加构造代码

}

C文档类自我介绍View::~C文档类自我介绍View()
{
}

BOOL C文档类自我介绍View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C文档类自我介绍View 绘制

void C文档类自我介绍View::OnDraw(CDC* pDC)
{
	C文档类自我介绍Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s1;
	s1.Format(_T("%d"), pDoc->a); 
	CString s2 = pDoc->s;
	pDC->TextOutW(100, 200, s1); 
	pDC->TextOutW(400, 200, s2);
	

	// TODO: 在此处为本机数据添加绘制代码
}


// C文档类自我介绍View 诊断

#ifdef _DEBUG
void C文档类自我介绍View::AssertValid() const
{
	CView::AssertValid();
}

void C文档类自我介绍View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C文档类自我介绍Doc* C文档类自我介绍View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C文档类自我介绍Doc)));
	return (C文档类自我介绍Doc*)m_pDocument;
}
#endif //_DEBUG


// C文档类自我介绍View 消息处理程序
