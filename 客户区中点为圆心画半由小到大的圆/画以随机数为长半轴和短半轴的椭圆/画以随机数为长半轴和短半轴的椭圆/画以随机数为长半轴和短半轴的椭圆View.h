
// ���������Ϊ������Ͷ̰������ԲView.h : C���������Ϊ������Ͷ̰������ԲView ��Ľӿ�
//

#pragma once


class C���������Ϊ������Ͷ̰������ԲView : public CView
{
protected: // �������л�����
	C���������Ϊ������Ͷ̰������ԲView();
	DECLARE_DYNCREATE(C���������Ϊ������Ͷ̰������ԲView)

// ����
public:
	C���������Ϊ������Ͷ̰������ԲDoc* GetDocument() const;

// ����
public:
	CArray<CRect, CRect&> ca;
	CPoint point0;
	int a;
	int b;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C���������Ϊ������Ͷ̰������ԲView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ���������Ϊ������Ͷ̰������ԲView.cpp �еĵ��԰汾
inline C���������Ϊ������Ͷ̰������ԲDoc* C���������Ϊ������Ͷ̰������ԲView::GetDocument() const
   { return reinterpret_cast<C���������Ϊ������Ͷ̰������ԲDoc*>(m_pDocument); }
#endif

