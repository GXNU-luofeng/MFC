
// ���������Ϊ������Ͷ̰������Բ�ĵ���View.h : C���������Ϊ������Ͷ̰������Բ�ĵ���View ��Ľӿ�
//

#pragma once


class C���������Ϊ������Ͷ̰������Բ�ĵ���View : public CView
{
protected: // �������л�����
	C���������Ϊ������Ͷ̰������Բ�ĵ���View();
	DECLARE_DYNCREATE(C���������Ϊ������Ͷ̰������Բ�ĵ���View)

// ����
public:
	C���������Ϊ������Ͷ̰������Բ�ĵ���Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C���������Ϊ������Ͷ̰������Բ�ĵ���View();
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

#ifndef _DEBUG  // ���������Ϊ������Ͷ̰������Բ�ĵ���View.cpp �еĵ��԰汾
inline C���������Ϊ������Ͷ̰������Բ�ĵ���Doc* C���������Ϊ������Ͷ̰������Բ�ĵ���View::GetDocument() const
   { return reinterpret_cast<C���������Ϊ������Ͷ̰������Բ�ĵ���Doc*>(m_pDocument); }
#endif

