
// ���ͻ�������ΪԲ�Ĳ���߽�����View.cpp : C���ͻ�������ΪԲ�Ĳ���߽�����View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "���ͻ�������ΪԲ�Ĳ���߽�����.h"
#endif

#include "���ͻ�������ΪԲ�Ĳ���߽�����Doc.h"
#include "���ͻ�������ΪԲ�Ĳ���߽�����View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C���ͻ�������ΪԲ�Ĳ���߽�����View

IMPLEMENT_DYNCREATE(C���ͻ�������ΪԲ�Ĳ���߽�����View, CView)

BEGIN_MESSAGE_MAP(C���ͻ�������ΪԲ�Ĳ���߽�����View, CView)
END_MESSAGE_MAP()

// C���ͻ�������ΪԲ�Ĳ���߽�����View ����/����

C���ͻ�������ΪԲ�Ĳ���߽�����View::C���ͻ�������ΪԲ�Ĳ���߽�����View()
{
	// TODO: �ڴ˴���ӹ������

}

C���ͻ�������ΪԲ�Ĳ���߽�����View::~C���ͻ�������ΪԲ�Ĳ���߽�����View()
{
}

BOOL C���ͻ�������ΪԲ�Ĳ���߽�����View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C���ͻ�������ΪԲ�Ĳ���߽�����View ����

void C���ͻ�������ΪԲ�Ĳ���߽�����View::OnDraw(CDC* pDC)
{
	C���ͻ�������ΪԲ�Ĳ���߽�����Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect cr;
	this->GetClientRect(&cr);
	pDC->Ellipse(cr);
	this->Invalidate();


	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C���ͻ�������ΪԲ�Ĳ���߽�����View ���

#ifdef _DEBUG
void C���ͻ�������ΪԲ�Ĳ���߽�����View::AssertValid() const
{
	CView::AssertValid();
}

void C���ͻ�������ΪԲ�Ĳ���߽�����View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C���ͻ�������ΪԲ�Ĳ���߽�����Doc* C���ͻ�������ΪԲ�Ĳ���߽�����View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C���ͻ�������ΪԲ�Ĳ���߽�����Doc)));
	return (C���ͻ�������ΪԲ�Ĳ���߽�����Doc*)m_pDocument;
}
#endif //_DEBUG


// C���ͻ�������ΪԲ�Ĳ���߽�����View ��Ϣ�������
