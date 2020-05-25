
// 添加位图资源1View.cpp : C添加位图资源1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "添加位图资源1.h"
#endif

#include "添加位图资源1Doc.h"
#include "添加位图资源1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C添加位图资源1View

IMPLEMENT_DYNCREATE(C添加位图资源1View, CView)

BEGIN_MESSAGE_MAP(C添加位图资源1View, CView)
END_MESSAGE_MAP()

// C添加位图资源1View 构造/析构

C添加位图资源1View::C添加位图资源1View()
{
	// TODO: 在此处添加构造代码
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

C添加位图资源1View::~C添加位图资源1View()
{
}

BOOL C添加位图资源1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C添加位图资源1View 绘制

void C添加位图资源1View::OnDraw(CDC* pDC)
{
	C添加位图资源1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);

	// TODO: 在此处为本机数据添加绘制代码
}


// C添加位图资源1View 诊断

#ifdef _DEBUG
void C添加位图资源1View::AssertValid() const
{
	CView::AssertValid();
}

void C添加位图资源1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C添加位图资源1Doc* C添加位图资源1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C添加位图资源1Doc)));
	return (C添加位图资源1Doc*)m_pDocument;
}
#endif //_DEBUG


// C添加位图资源1View 消息处理程序
