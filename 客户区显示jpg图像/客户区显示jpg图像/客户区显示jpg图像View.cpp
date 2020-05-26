
// 客户区显示jpg图像View.cpp : C客户区显示jpg图像View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "客户区显示jpg图像.h"
#endif

#include "客户区显示jpg图像Doc.h"
#include "客户区显示jpg图像View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C客户区显示jpg图像View

IMPLEMENT_DYNCREATE(C客户区显示jpg图像View, CView)

BEGIN_MESSAGE_MAP(C客户区显示jpg图像View, CView)
	ON_COMMAND(ID_FILE_OPEN, &C客户区显示jpg图像View::OnFileOpen)
//	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C客户区显示jpg图像View 构造/析构

C客户区显示jpg图像View::C客户区显示jpg图像View()
{
	// TODO: 在此处添加构造代码

}

C客户区显示jpg图像View::~C客户区显示jpg图像View()
{
}

BOOL C客户区显示jpg图像View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C客户区显示jpg图像View 绘制

void C客户区显示jpg图像View::OnDraw(CDC* /*pDC*/)
{
	C客户区显示jpg图像Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: 在此处为本机数据添加绘制代码
}


// C客户区显示jpg图像View 诊断

#ifdef _DEBUG
void C客户区显示jpg图像View::AssertValid() const
{
	CView::AssertValid();
}

void C客户区显示jpg图像View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C客户区显示jpg图像Doc* C客户区显示jpg图像View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C客户区显示jpg图像Doc)));
	return (C客户区显示jpg图像Doc*)m_pDocument;
}
#endif //_DEBUG


// C客户区显示jpg图像View 消息处理程序


void C客户区显示jpg图像View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	
	CClientDC dc(this);
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		CImage img;
		img.Destroy();
		img.Load(filename);
		int h, w, sx, sy;
		{
			CRect rect;
			
			GetClientRect(&rect);
			float rect_ratio = 1.0*rect.Width() / rect.Height();
			float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
			if (rect_ratio > img_ratio)
			{
				h = rect.Height();
				w = img_ratio*h;
				sx = (rect.Width() - w) / 2;
				sy = 0;
			}
			else
			{
				w = rect.Width();
				h = w / img_ratio;
				sx = 0;
				sy = (rect.Height() - h) / 2;
			}


		}
		
		img.Draw(dc.m_hDC, sx, sy, w, h);
		


	}
	

}


//void C客户区显示jpg图像View::OnLButtonDown(UINT nFlags, CPoint point)
//{
//	// TODO: 在此添加消息处理程序代码和/或调用默认值
//	
//	CView::OnLButtonDown(nFlags, point);
//}
