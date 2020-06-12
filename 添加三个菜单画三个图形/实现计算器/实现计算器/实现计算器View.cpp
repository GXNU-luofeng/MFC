
// 实现计算器View.cpp : C实现计算器View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "实现计算器.h"
#endif

#include "实现计算器Doc.h"
#include "实现计算器View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C实现计算器View

IMPLEMENT_DYNCREATE(C实现计算器View, CView)

BEGIN_MESSAGE_MAP(C实现计算器View, CView)
END_MESSAGE_MAP()

// C实现计算器View 构造/析构

C实现计算器View::C实现计算器View()
{
	// TODO: 在此处添加构造代码

}

C实现计算器View::~C实现计算器View()
{
}

BOOL C实现计算器View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C实现计算器View 绘制

void C实现计算器View::OnDraw(CDC* /*pDC*/)
{
	C实现计算器Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		/*CString s1;
		s1.Format(_T("%s"), dlg.s);
		r = dlg.s;
		GetDC()->TextOutW(200, 300, s1);*/
	}

	// TODO: 在此处为本机数据添加绘制代码
}


// C实现计算器View 诊断

#ifdef _DEBUG
void C实现计算器View::AssertValid() const
{
	CView::AssertValid();
}

void C实现计算器View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C实现计算器Doc* C实现计算器View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C实现计算器Doc)));
	return (C实现计算器Doc*)m_pDocument;
}
#endif //_DEBUG


// C实现计算器View 消息处理程序
