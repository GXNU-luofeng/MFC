
// �ڶԻ����������ݻ���ԲView.cpp : C�ڶԻ����������ݻ���ԲView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ڶԻ����������ݻ���Բ.h"
#endif

#include "�ڶԻ����������ݻ���ԲDoc.h"
#include "�ڶԻ����������ݻ���ԲView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ڶԻ����������ݻ���ԲView

IMPLEMENT_DYNCREATE(C�ڶԻ����������ݻ���ԲView, CView)

BEGIN_MESSAGE_MAP(C�ڶԻ����������ݻ���ԲView, CView)
END_MESSAGE_MAP()

// C�ڶԻ����������ݻ���ԲView ����/����

C�ڶԻ����������ݻ���ԲView::C�ڶԻ����������ݻ���ԲView()
{
	// TODO: �ڴ˴���ӹ������

}

C�ڶԻ����������ݻ���ԲView::~C�ڶԻ����������ݻ���ԲView()
{
}

BOOL C�ڶԻ����������ݻ���ԲView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�ڶԻ����������ݻ���ԲView ����

void C�ڶԻ����������ݻ���ԲView::OnDraw(CDC* pDC)
{
	C�ڶԻ����������ݻ���ԲDoc* pDoc = GetDocument();
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

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�ڶԻ����������ݻ���ԲView ���

#ifdef _DEBUG
void C�ڶԻ����������ݻ���ԲView::AssertValid() const
{
	CView::AssertValid();
}

void C�ڶԻ����������ݻ���ԲView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�ڶԻ����������ݻ���ԲDoc* C�ڶԻ����������ݻ���ԲView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ڶԻ����������ݻ���ԲDoc)));
	return (C�ڶԻ����������ݻ���ԲDoc*)m_pDocument;
}
#endif //_DEBUG


// C�ڶԻ����������ݻ���ԲView ��Ϣ�������
