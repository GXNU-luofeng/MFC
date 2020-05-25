
// 添加三个菜单画三个图形View.cpp : C添加三个菜单画三个图形View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "添加三个菜单画三个图形.h"
#endif

#include "添加三个菜单画三个图形Doc.h"
#include "添加三个菜单画三个图形View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C添加三个菜单画三个图形View

IMPLEMENT_DYNCREATE(C添加三个菜单画三个图形View, CView)

BEGIN_MESSAGE_MAP(C添加三个菜单画三个图形View, CView)
	ON_COMMAND(ID_HUAXIAN, &C添加三个菜单画三个图形View::OnHuaxian)
	ON_COMMAND(ID_HUAJUXING, &C添加三个菜单画三个图形View::OnHuajuxing)
	ON_COMMAND(ID_HUATUYUAN, &C添加三个菜单画三个图形View::OnHuatuyuan)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// C添加三个菜单画三个图形View 构造/析构

C添加三个菜单画三个图形View::C添加三个菜单画三个图形View()
{
	// TODO: 在此处添加构造代码

}

C添加三个菜单画三个图形View::~C添加三个菜单画三个图形View()
{
}

BOOL C添加三个菜单画三个图形View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C添加三个菜单画三个图形View 绘制

void C添加三个菜单画三个图形View::OnDraw(CDC* /*pDC*/)
{
	C添加三个菜单画三个图形Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C添加三个菜单画三个图形View 诊断

#ifdef _DEBUG
void C添加三个菜单画三个图形View::AssertValid() const
{
	CView::AssertValid();
}

void C添加三个菜单画三个图形View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C添加三个菜单画三个图形Doc* C添加三个菜单画三个图形View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C添加三个菜单画三个图形Doc)));
	return (C添加三个菜单画三个图形Doc*)m_pDocument;
}
#endif //_DEBUG


// C添加三个菜单画三个图形View 消息处理程序


void C添加三个菜单画三个图形View::OnHuaxian()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	dc.MoveTo(point0);
	dc.LineTo(point1);
}


void C添加三个菜单画三个图形View::OnHuajuxing()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc1(this);
	CRect cr(point0.x, point0.y, point1.x, point1.y);
	dc1.Rectangle(cr);
	
}


void C添加三个菜单画三个图形View::OnHuatuyuan()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc2(this);
	CRect cr(point0.x, point0.y, point1.x, point1.y);
	dc2.Ellipse(cr);
}


void C添加三个菜单画三个图形View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	point0 = point;
	CView::OnLButtonDown(nFlags, point);
}


void C添加三个菜单画三个图形View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	point1 = point;
	CView::OnLButtonUp(nFlags, point);
}
