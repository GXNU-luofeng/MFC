
// ���λͼ��Դ1View.cpp : C���λͼ��Դ1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "���λͼ��Դ1.h"
#endif

#include "���λͼ��Դ1Doc.h"
#include "���λͼ��Դ1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C���λͼ��Դ1View

IMPLEMENT_DYNCREATE(C���λͼ��Դ1View, CView)

BEGIN_MESSAGE_MAP(C���λͼ��Դ1View, CView)
END_MESSAGE_MAP()

// C���λͼ��Դ1View ����/����

C���λͼ��Դ1View::C���λͼ��Դ1View()
{
	// TODO: �ڴ˴���ӹ������
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

C���λͼ��Դ1View::~C���λͼ��Դ1View()
{
}

BOOL C���λͼ��Դ1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C���λͼ��Դ1View ����

void C���λͼ��Դ1View::OnDraw(CDC* pDC)
{
	C���λͼ��Դ1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C���λͼ��Դ1View ���

#ifdef _DEBUG
void C���λͼ��Դ1View::AssertValid() const
{
	CView::AssertValid();
}

void C���λͼ��Դ1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C���λͼ��Դ1Doc* C���λͼ��Դ1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C���λͼ��Դ1Doc)));
	return (C���λͼ��Դ1Doc*)m_pDocument;
}
#endif //_DEBUG


// C���λͼ��Դ1View ��Ϣ�������
