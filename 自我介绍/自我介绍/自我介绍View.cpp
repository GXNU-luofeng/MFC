
// ���ҽ���View.cpp : C���ҽ���View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "���ҽ���.h"
#endif

#include "���ҽ���Doc.h"
#include "���ҽ���View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C���ҽ���View

IMPLEMENT_DYNCREATE(C���ҽ���View, CView)

BEGIN_MESSAGE_MAP(C���ҽ���View, CView)
END_MESSAGE_MAP()

// C���ҽ���View ����/����

C���ҽ���View::C���ҽ���View()
{
	// TODO: �ڴ˴���ӹ������
	a = 100;

}

C���ҽ���View::~C���ҽ���View()
{
}

BOOL C���ҽ���View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C���ҽ���View ����

void C���ҽ���View::OnDraw(CDC* pDC)
{
	C���ҽ���Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s = _T("�����޷�");
	pDC->TextOutW(200, 300, s);
	CString m;
	m.Format(_T("%d"), a);
	pDC->TextOutW(400, 300, m);



	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C���ҽ���View ���

#ifdef _DEBUG
void C���ҽ���View::AssertValid() const
{
	CView::AssertValid();
}

void C���ҽ���View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C���ҽ���Doc* C���ҽ���View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C���ҽ���Doc)));
	return (C���ҽ���Doc*)m_pDocument;
}
#endif //_DEBUG


// C���ҽ���View ��Ϣ�������
