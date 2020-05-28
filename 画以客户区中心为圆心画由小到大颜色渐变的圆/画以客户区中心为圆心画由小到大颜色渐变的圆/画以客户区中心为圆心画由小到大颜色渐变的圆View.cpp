
// 画以客户区中心为圆心画由小到大颜色渐变的圆View.cpp : C画以客户区中心为圆心画由小到大颜色渐变的圆View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "画以客户区中心为圆心画由小到大颜色渐变的圆.h"
#endif

#include "画以客户区中心为圆心画由小到大颜色渐变的圆Doc.h"
#include "画以客户区中心为圆心画由小到大颜色渐变的圆View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C画以客户区中心为圆心画由小到大颜色渐变的圆View

IMPLEMENT_DYNCREATE(C画以客户区中心为圆心画由小到大颜色渐变的圆View, CView)

BEGIN_MESSAGE_MAP(C画以客户区中心为圆心画由小到大颜色渐变的圆View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_TIMER()
END_MESSAGE_MAP()

// C画以客户区中心为圆心画由小到大颜色渐变的圆View 构造/析构

C画以客户区中心为圆心画由小到大颜色渐变的圆View::C画以客户区中心为圆心画由小到大颜色渐变的圆View()
{
	// TODO: 在此处添加构造代码
	set = 1;
}

C画以客户区中心为圆心画由小到大颜色渐变的圆View::~C画以客户区中心为圆心画由小到大颜色渐变的圆View()
{
}

BOOL C画以客户区中心为圆心画由小到大颜色渐变的圆View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C画以客户区中心为圆心画由小到大颜色渐变的圆View 绘制

void C画以客户区中心为圆心画由小到大颜色渐变的圆View::OnDraw(CDC* pDC)
{
	C画以客户区中心为圆心画由小到大颜色渐变的圆Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	GetClientRect(&cr1);//按下左键显示颜色渐变的圆
	CPen NewPen ;
	CPen	*poldPen;
	NewPen.CreatePen(PS_SOLID, 1, RGB(0, rand()%1000, 0));
	poldPen = pDC->SelectObject(&NewPen);
	a = (cr1.right - cr1.left) / 2;
	b = (cr1.bottom - cr1.top) / 2;
	//a = cs.cx/2;
	//b = cs.cy/2;
	if (set == 1)
	{
		SetTimer(NULL, rand() % 400 + 100, NULL);

		set = 0;
	}


	pDC->Ellipse(cr);
	pDC->SelectObject(poldPen);
	NewPen.DeleteObject();
	// TODO: 在此处为本机数据添加绘制代码
}


// C画以客户区中心为圆心画由小到大颜色渐变的圆View 诊断

#ifdef _DEBUG
void C画以客户区中心为圆心画由小到大颜色渐变的圆View::AssertValid() const
{
	CView::AssertValid();
}

void C画以客户区中心为圆心画由小到大颜色渐变的圆View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C画以客户区中心为圆心画由小到大颜色渐变的圆Doc* C画以客户区中心为圆心画由小到大颜色渐变的圆View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C画以客户区中心为圆心画由小到大颜色渐变的圆Doc)));
	return (C画以客户区中心为圆心画由小到大颜色渐变的圆Doc*)m_pDocument;
}
#endif //_DEBUG


// C画以客户区中心为圆心画由小到大颜色渐变的圆View 消息处理程序


void C画以客户区中心为圆心画由小到大颜色渐变的圆View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	cr.left = a;
	cr.top = b;
	cr.right = a;
	cr.bottom = b;
	CView::OnLButtonDown(nFlags, point);
}


void C画以客户区中心为圆心画由小到大颜色渐变的圆View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	cr.left -= 1;
	cr.top -= 1;
	cr.right += 1;
	cr.bottom += 1;
	Invalidate();
	CView::OnTimer(nIDEvent);
}
