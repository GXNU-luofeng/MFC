
// �ͻ����е�ΪԲ�Ļ�����С�����ԲView.h : C�ͻ����е�ΪԲ�Ļ�����С�����ԲView ��Ľӿ�
//

#pragma once


class C�ͻ����е�ΪԲ�Ļ�����С�����ԲView : public CView
{
protected: // �������л�����
	C�ͻ����е�ΪԲ�Ļ�����С�����ԲView();
	DECLARE_DYNCREATE(C�ͻ����е�ΪԲ�Ļ�����С�����ԲView)

// ����
public:
	C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc* GetDocument() const;

// ����
public:
	CRect cr;
	CRect cr1;
	int set;
	int a;
	int b;
	

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�ͻ����е�ΪԲ�Ļ�����С�����ԲView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
//	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // �ͻ����е�ΪԲ�Ļ�����С�����ԲView.cpp �еĵ��԰汾
inline C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc* C�ͻ����е�ΪԲ�Ļ�����С�����ԲView::GetDocument() const
   { return reinterpret_cast<C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc*>(m_pDocument); }
#endif

