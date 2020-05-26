
// �ͻ�����ʾjpgͼ��View.cpp : C�ͻ�����ʾjpgͼ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ͻ�����ʾjpgͼ��.h"
#endif

#include "�ͻ�����ʾjpgͼ��Doc.h"
#include "�ͻ�����ʾjpgͼ��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ͻ�����ʾjpgͼ��View

IMPLEMENT_DYNCREATE(C�ͻ�����ʾjpgͼ��View, CView)

BEGIN_MESSAGE_MAP(C�ͻ�����ʾjpgͼ��View, CView)
	ON_COMMAND(ID_FILE_OPEN, &C�ͻ�����ʾjpgͼ��View::OnFileOpen)
//	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C�ͻ�����ʾjpgͼ��View ����/����

C�ͻ�����ʾjpgͼ��View::C�ͻ�����ʾjpgͼ��View()
{
	// TODO: �ڴ˴���ӹ������

}

C�ͻ�����ʾjpgͼ��View::~C�ͻ�����ʾjpgͼ��View()
{
}

BOOL C�ͻ�����ʾjpgͼ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�ͻ�����ʾjpgͼ��View ����

void C�ͻ�����ʾjpgͼ��View::OnDraw(CDC* /*pDC*/)
{
	C�ͻ�����ʾjpgͼ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�ͻ�����ʾjpgͼ��View ���

#ifdef _DEBUG
void C�ͻ�����ʾjpgͼ��View::AssertValid() const
{
	CView::AssertValid();
}

void C�ͻ�����ʾjpgͼ��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�ͻ�����ʾjpgͼ��Doc* C�ͻ�����ʾjpgͼ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ͻ�����ʾjpgͼ��Doc)));
	return (C�ͻ�����ʾjpgͼ��Doc*)m_pDocument;
}
#endif //_DEBUG


// C�ͻ�����ʾjpgͼ��View ��Ϣ�������


void C�ͻ�����ʾjpgͼ��View::OnFileOpen()
{
	// TODO: �ڴ���������������
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


//void C�ͻ�����ʾjpgͼ��View::OnLButtonDown(UINT nFlags, CPoint point)
//{
//	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
//	
//	CView::OnLButtonDown(nFlags, point);
//}
