
// ���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView.h : C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView ��Ľӿ�
//

#pragma once


class C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView : public CView
{
protected: // �������л�����
	C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView();
	DECLARE_DYNCREATE(C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView)

// ����
public:
	C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc* GetDocument() const;

// ����
public:
	int set;
	CRect cr;
	CRect cr1;
	int a;
	int b;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView();
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
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // ���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView.cpp �еĵ��԰汾
inline C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc* C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲView::GetDocument() const
   { return reinterpret_cast<C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc*>(m_pDocument); }
#endif

