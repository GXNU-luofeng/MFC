
// 在对话框中填数据画椭圆View.cpp : C在对话框中填数据画椭圆View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "在对话框中填数据画椭圆.h"
#endif

#include "在对话框中填数据画椭圆Doc.h"
#include "在对话框中填数据画椭圆View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C在对话框中填数据画椭圆View

IMPLEMENT_DYNCREATE(C在对话框中填数据画椭圆View, CView)

BEGIN_MESSAGE_MAP(C在对话框中填数据画椭圆View, CView)
END_MESSAGE_MAP()

// C在对话框中填数据画椭圆View 构造/析构

C在对话框中填数据画椭圆View::C在对话框中填数据画椭圆View()
{
	// TODO: 在此处添加构造代码

}

C在对话框中填数据画椭圆View::~C在对话框中填数据画椭圆View()
{
}

BOOL C在对话框中填数据画椭圆View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C在对话框中填数据画椭圆View 绘制

void C在对话框中填数据画椭圆View::OnDraw(CDC* pDC)
{
	C在对话框中填数据画椭圆Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	MyDlg dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		int x1 = dlg.x1;
		int x2 = dlg.x2;
		int y1 = dlg.y1;
		int y2 = dlg.y2;
		
		pDC->Ellipse(x1, y1, x2, y2);
	}

	// TODO: 在此处为本机数据添加绘制代码
}


// C在对话框中填数据画椭圆View 诊断

#ifdef _DEBUG
void C在对话框中填数据画椭圆View::AssertValid() const
{
	CView::AssertValid();
}

void C在对话框中填数据画椭圆View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C在对话框中填数据画椭圆Doc* C在对话框中填数据画椭圆View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C在对话框中填数据画椭圆Doc)));
	return (C在对话框中填数据画椭圆Doc*)m_pDocument;
}
#endif //_DEBUG


// C在对话框中填数据画椭圆View 消息处理程序
