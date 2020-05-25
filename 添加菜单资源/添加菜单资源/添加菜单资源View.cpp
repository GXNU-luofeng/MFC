
// 添加菜单资源View.cpp : C添加菜单资源View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "添加菜单资源.h"
#endif

#include "添加菜单资源Doc.h"
#include "添加菜单资源View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C添加菜单资源View

IMPLEMENT_DYNCREATE(C添加菜单资源View, CView)

BEGIN_MESSAGE_MAP(C添加菜单资源View, CView)
	ON_COMMAND(ID_VIEW_STATUS_BAR, &C添加菜单资源View::OnViewStatusBar)
	ON_COMMAND(ID_SHOWNAME, &C添加菜单资源View::OnShowname)
END_MESSAGE_MAP()

// C添加菜单资源View 构造/析构

C添加菜单资源View::C添加菜单资源View()
{
	// TODO: 在此处添加构造代码

}

C添加菜单资源View::~C添加菜单资源View()
{
}

BOOL C添加菜单资源View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C添加菜单资源View 绘制

void C添加菜单资源View::OnDraw(CDC* /*pDC*/)
{
	C添加菜单资源Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C添加菜单资源View 诊断

#ifdef _DEBUG
void C添加菜单资源View::AssertValid() const
{
	CView::AssertValid();
}

void C添加菜单资源View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C添加菜单资源Doc* C添加菜单资源View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C添加菜单资源Doc)));
	return (C添加菜单资源Doc*)m_pDocument;
}
#endif //_DEBUG


// C添加菜单资源View 消息处理程序


void C添加菜单资源View::OnViewStatusBar()
{
	// TODO: 在此添加命令处理程序代码

}


void C添加菜单资源View::OnShowname()
{
	// TODO: 在此添加命令处理程序代码
	CString s;
	s = "罗峰";
	CClientDC dc(this);
	dc.TextOutW(200, 300, s);
}
