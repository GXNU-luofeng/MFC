
// ʵ�ּ�����View.cpp : Cʵ�ּ�����View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ�ּ�����.h"
#endif

#include "ʵ�ּ�����Doc.h"
#include "ʵ�ּ�����View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ�ּ�����View

IMPLEMENT_DYNCREATE(Cʵ�ּ�����View, CView)

BEGIN_MESSAGE_MAP(Cʵ�ּ�����View, CView)
END_MESSAGE_MAP()

// Cʵ�ּ�����View ����/����

Cʵ�ּ�����View::Cʵ�ּ�����View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ�ּ�����View::~Cʵ�ּ�����View()
{
}

BOOL Cʵ�ּ�����View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ�ּ�����View ����

void Cʵ�ּ�����View::OnDraw(CDC* /*pDC*/)
{
	Cʵ�ּ�����Doc* pDoc = GetDocument();
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

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ�ּ�����View ���

#ifdef _DEBUG
void Cʵ�ּ�����View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ�ּ�����View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ�ּ�����Doc* Cʵ�ּ�����View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ�ּ�����Doc)));
	return (Cʵ�ּ�����Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ�ּ�����View ��Ϣ�������
