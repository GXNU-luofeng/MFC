
// 画以随机数为长半轴和短半轴的椭圆文档类View.cpp : C画以随机数为长半轴和短半轴的椭圆文档类View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "画以随机数为长半轴和短半轴的椭圆文档类.h"
#endif

#include "画以随机数为长半轴和短半轴的椭圆文档类Doc.h"
#include "画以随机数为长半轴和短半轴的椭圆文档类View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C画以随机数为长半轴和短半轴的椭圆文档类View

IMPLEMENT_DYNCREATE(C画以随机数为长半轴和短半轴的椭圆文档类View, CView)

BEGIN_MESSAGE_MAP(C画以随机数为长半轴和短半轴的椭圆文档类View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C画以随机数为长半轴和短半轴的椭圆文档类View 构造/析构

C画以随机数为长半轴和短半轴的椭圆文档类View::C画以随机数为长半轴和短半轴的椭圆文档类View()
{
	// TODO: 在此处添加构造代码

}

C画以随机数为长半轴和短半轴的椭圆文档类View::~C画以随机数为长半轴和短半轴的椭圆文档类View()
{
}

BOOL C画以随机数为长半轴和短半轴的椭圆文档类View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C画以随机数为长半轴和短半轴的椭圆文档类View 绘制

void C画以随机数为长半轴和短半轴的椭圆文档类View::OnDraw(CDC* /*pDC*/)
{
	C画以随机数为长半轴和短半轴的椭圆文档类Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C画以随机数为长半轴和短半轴的椭圆文档类View 诊断

#ifdef _DEBUG
void C画以随机数为长半轴和短半轴的椭圆文档类View::AssertValid() const
{
	CView::AssertValid();
}

void C画以随机数为长半轴和短半轴的椭圆文档类View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C画以随机数为长半轴和短半轴的椭圆文档类Doc* C画以随机数为长半轴和短半轴的椭圆文档类View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C画以随机数为长半轴和短半轴的椭圆文档类Doc)));
	return (C画以随机数为长半轴和短半轴的椭圆文档类Doc*)m_pDocument;
}
#endif //_DEBUG


// C画以随机数为长半轴和短半轴的椭圆文档类View 消息处理程序


void C画以随机数为长半轴和短半轴的椭圆文档类View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C画以随机数为长半轴和短半轴的椭圆文档类Doc* pDoc = GetDocument();
	int a, b;
	a = rand() % 100 + 5;
	b = rand() % 100 + 5;
	CRect cr(point.x - a, point.y - b, point.x + a, point.y + b);
	pDoc->ca.Add(cr);
	CClientDC dc(this);
	for (int i = 0; i < pDoc->ca.GetSize(); i++)
	{
		dc.Ellipse(pDoc->ca[i]);
	}
	CView::OnLButtonDown(nFlags, point);
}
