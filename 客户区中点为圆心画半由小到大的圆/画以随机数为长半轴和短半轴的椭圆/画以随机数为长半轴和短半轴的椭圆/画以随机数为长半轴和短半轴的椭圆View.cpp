
// 画以随机数为长半轴和短半轴的椭圆View.cpp : C画以随机数为长半轴和短半轴的椭圆View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "画以随机数为长半轴和短半轴的椭圆.h"
#endif

#include "画以随机数为长半轴和短半轴的椭圆Doc.h"
#include "画以随机数为长半轴和短半轴的椭圆View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C画以随机数为长半轴和短半轴的椭圆View

IMPLEMENT_DYNCREATE(C画以随机数为长半轴和短半轴的椭圆View, CView)

BEGIN_MESSAGE_MAP(C画以随机数为长半轴和短半轴的椭圆View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C画以随机数为长半轴和短半轴的椭圆View 构造/析构

C画以随机数为长半轴和短半轴的椭圆View::C画以随机数为长半轴和短半轴的椭圆View()
{
	// TODO: 在此处添加构造代码
	ca.SetSize(1000);
}

C画以随机数为长半轴和短半轴的椭圆View::~C画以随机数为长半轴和短半轴的椭圆View()
{
}

BOOL C画以随机数为长半轴和短半轴的椭圆View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C画以随机数为长半轴和短半轴的椭圆View 绘制

void C画以随机数为长半轴和短半轴的椭圆View::OnDraw(CDC* pDC)
{
	C画以随机数为长半轴和短半轴的椭圆Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	a = rand() % 100 + 5;
	b = rand() % 100 + 5;
	
	
	
	

	// TODO: 在此处为本机数据添加绘制代码
}


// C画以随机数为长半轴和短半轴的椭圆View 诊断

#ifdef _DEBUG
void C画以随机数为长半轴和短半轴的椭圆View::AssertValid() const
{
	CView::AssertValid();
}

void C画以随机数为长半轴和短半轴的椭圆View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C画以随机数为长半轴和短半轴的椭圆Doc* C画以随机数为长半轴和短半轴的椭圆View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C画以随机数为长半轴和短半轴的椭圆Doc)));
	return (C画以随机数为长半轴和短半轴的椭圆Doc*)m_pDocument;
}
#endif //_DEBUG


// C画以随机数为长半轴和短半轴的椭圆View 消息处理程序


void C画以随机数为长半轴和短半轴的椭圆View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C画以随机数为长半轴和短半轴的椭圆Doc* pDoc = GetDocument();
	
	CRect cr(point.x - a, point.y - b, point.x + a, point.y + b);
	ca.Add(cr);
	CClientDC dc(this);
	for (int i = 0; i < ca.GetSize(); i++)
	{
		dc.Ellipse(ca[i]);
	}
	
	


	CView::OnLButtonDown(nFlags, point);
}
