
// �ͻ�����ʾAB�͵�ֵView.h : C�ͻ�����ʾAB�͵�ֵView ��Ľӿ�
//

#pragma once


class C�ͻ�����ʾAB�͵�ֵView : public CView
{
protected: // �������л�����
	C�ͻ�����ʾAB�͵�ֵView();
	DECLARE_DYNCREATE(C�ͻ�����ʾAB�͵�ֵView)

// ����
public:
	C�ͻ�����ʾAB�͵�ֵDoc* GetDocument() const;

// ����
public:
	int A;
	int B;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�ͻ�����ʾAB�͵�ֵView();
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

#ifndef _DEBUG  // �ͻ�����ʾAB�͵�ֵView.cpp �еĵ��԰汾
inline C�ͻ�����ʾAB�͵�ֵDoc* C�ͻ�����ʾAB�͵�ֵView::GetDocument() const
   { return reinterpret_cast<C�ͻ�����ʾAB�͵�ֵDoc*>(m_pDocument); }
#endif

