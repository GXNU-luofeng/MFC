
// �ڶԻ������ԲView.h : C�ڶԻ������ԲView ��Ľӿ�
//

#pragma once


class C�ڶԻ������ԲView : public CView
{
protected: // �������л�����
	C�ڶԻ������ԲView();
	DECLARE_DYNCREATE(C�ڶԻ������ԲView)

// ����
public:
	C�ڶԻ������ԲDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�ڶԻ������ԲView();
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

#ifndef _DEBUG  // �ڶԻ������ԲView.cpp �еĵ��԰汾
inline C�ڶԻ������ԲDoc* C�ڶԻ������ԲView::GetDocument() const
   { return reinterpret_cast<C�ڶԻ������ԲDoc*>(m_pDocument); }
#endif

