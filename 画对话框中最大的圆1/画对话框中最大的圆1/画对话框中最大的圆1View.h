
// ���Ի���������Բ1View.h : C���Ի���������Բ1View ��Ľӿ�
//

#pragma once


class C���Ի���������Բ1View : public CView
{
protected: // �������л�����
	C���Ի���������Բ1View();
	DECLARE_DYNCREATE(C���Ի���������Բ1View)

// ����
public:
	C���Ի���������Բ1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C���Ի���������Բ1View();
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

#ifndef _DEBUG  // ���Ի���������Բ1View.cpp �еĵ��԰汾
inline C���Ի���������Բ1Doc* C���Ի���������Բ1View::GetDocument() const
   { return reinterpret_cast<C���Ի���������Բ1Doc*>(m_pDocument); }
#endif

