
// �ĵ������ҽ���View.cpp : C�ĵ������ҽ���View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ĵ������ҽ���.h"
#endif

#include "�ĵ������ҽ���Doc.h"
#include "�ĵ������ҽ���View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ĵ������ҽ���View

IMPLEMENT_DYNCREATE(C�ĵ������ҽ���View, CView)

BEGIN_MESSAGE_MAP(C�ĵ������ҽ���View, CView)
END_MESSAGE_MAP()

// C�ĵ������ҽ���View ����/����

C�ĵ������ҽ���View::C�ĵ������ҽ���View()
{
	// TODO: �ڴ˴���ӹ������

}

C�ĵ������ҽ���View::~C�ĵ������ҽ���View()
{
}

BOOL C�ĵ������ҽ���View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�ĵ������ҽ���View ����

void C�ĵ������ҽ���View::OnDraw(CDC* pDC)
{
	C�ĵ������ҽ���Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s1;
	s1.Format(_T("%d"), pDoc->a); 
	CString s2 = pDoc->s;
	pDC->TextOutW(100, 200, s1); 
	pDC->TextOutW(400, 200, s2);
	

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�ĵ������ҽ���View ���

#ifdef _DEBUG
void C�ĵ������ҽ���View::AssertValid() const
{
	CView::AssertValid();
}

void C�ĵ������ҽ���View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�ĵ������ҽ���Doc* C�ĵ������ҽ���View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ĵ������ҽ���Doc)));
	return (C�ĵ������ҽ���Doc*)m_pDocument;
}
#endif //_DEBUG


// C�ĵ������ҽ���View ��Ϣ�������
