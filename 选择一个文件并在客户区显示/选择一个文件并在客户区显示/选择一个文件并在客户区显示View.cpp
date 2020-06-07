
// 选择一个文件并在客户区显示View.cpp : C选择一个文件并在客户区显示View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "选择一个文件并在客户区显示.h"
#endif

#include "选择一个文件并在客户区显示Doc.h"
#include "选择一个文件并在客户区显示View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C选择一个文件并在客户区显示View

IMPLEMENT_DYNCREATE(C选择一个文件并在客户区显示View, CView)

BEGIN_MESSAGE_MAP(C选择一个文件并在客户区显示View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_SHOWFILE, &C选择一个文件并在客户区显示View::OnShowfile)
END_MESSAGE_MAP()

// C选择一个文件并在客户区显示View 构造/析构

C选择一个文件并在客户区显示View::C选择一个文件并在客户区显示View()
{
	// TODO: 在此处添加构造代码
	r = " ";
}

C选择一个文件并在客户区显示View::~C选择一个文件并在客户区显示View()
{
}

BOOL C选择一个文件并在客户区显示View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C选择一个文件并在客户区显示View 绘制

void C选择一个文件并在客户区显示View::OnDraw(CDC* /*pDC*/)
{
	C选择一个文件并在客户区显示Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	

	// TODO: 在此处为本机数据添加绘制代码
}


// C选择一个文件并在客户区显示View 诊断

#ifdef _DEBUG
void C选择一个文件并在客户区显示View::AssertValid() const
{
	CView::AssertValid();
}

void C选择一个文件并在客户区显示View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C选择一个文件并在客户区显示Doc* C选择一个文件并在客户区显示View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C选择一个文件并在客户区显示Doc)));
	return (C选择一个文件并在客户区显示Doc*)m_pDocument;
}
#endif //_DEBUG


// C选择一个文件并在客户区显示View 消息处理程序


void C选择一个文件并在客户区显示View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		CString s1;
		s1.Format(_T("%s"), dlg.s);
		r = dlg.s;
		GetDC()->TextOutW(200, 300, s1);
	}
	CView::OnLButtonDblClk(nFlags, point);
}


void C选择一个文件并在客户区显示View::OnShowfile()
{
	
	
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		
		
		
	}
	// TODO: 在此添加命令处理程序代码>
}
