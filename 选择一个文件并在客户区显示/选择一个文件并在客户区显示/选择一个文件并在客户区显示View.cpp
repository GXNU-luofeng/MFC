
// ѡ��һ���ļ����ڿͻ�����ʾView.cpp : Cѡ��һ���ļ����ڿͻ�����ʾView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ѡ��һ���ļ����ڿͻ�����ʾ.h"
#endif

#include "ѡ��һ���ļ����ڿͻ�����ʾDoc.h"
#include "ѡ��һ���ļ����ڿͻ�����ʾView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cѡ��һ���ļ����ڿͻ�����ʾView

IMPLEMENT_DYNCREATE(Cѡ��һ���ļ����ڿͻ�����ʾView, CView)

BEGIN_MESSAGE_MAP(Cѡ��һ���ļ����ڿͻ�����ʾView, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_SHOWFILE, &Cѡ��һ���ļ����ڿͻ�����ʾView::OnShowfile)
END_MESSAGE_MAP()

// Cѡ��һ���ļ����ڿͻ�����ʾView ����/����

Cѡ��һ���ļ����ڿͻ�����ʾView::Cѡ��һ���ļ����ڿͻ�����ʾView()
{
	// TODO: �ڴ˴���ӹ������
	r = " ";
}

Cѡ��һ���ļ����ڿͻ�����ʾView::~Cѡ��һ���ļ����ڿͻ�����ʾView()
{
}

BOOL Cѡ��һ���ļ����ڿͻ�����ʾView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cѡ��һ���ļ����ڿͻ�����ʾView ����

void Cѡ��һ���ļ����ڿͻ�����ʾView::OnDraw(CDC* /*pDC*/)
{
	Cѡ��һ���ļ����ڿͻ�����ʾDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cѡ��һ���ļ����ڿͻ�����ʾView ���

#ifdef _DEBUG
void Cѡ��һ���ļ����ڿͻ�����ʾView::AssertValid() const
{
	CView::AssertValid();
}

void Cѡ��һ���ļ����ڿͻ�����ʾView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cѡ��һ���ļ����ڿͻ�����ʾDoc* Cѡ��һ���ļ����ڿͻ�����ʾView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cѡ��һ���ļ����ڿͻ�����ʾDoc)));
	return (Cѡ��һ���ļ����ڿͻ�����ʾDoc*)m_pDocument;
}
#endif //_DEBUG


// Cѡ��һ���ļ����ڿͻ�����ʾView ��Ϣ�������


void Cѡ��һ���ļ����ڿͻ�����ʾView::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
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


void Cѡ��һ���ļ����ڿͻ�����ʾView::OnShowfile()
{
	
	
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		
		
		
	}
	// TODO: �ڴ���������������>
}
