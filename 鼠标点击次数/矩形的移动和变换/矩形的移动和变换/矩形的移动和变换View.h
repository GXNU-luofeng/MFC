
// ���ε��ƶ��ͱ任View.h : C���ε��ƶ��ͱ任View ��Ľӿ�
//

#pragma once


class C���ε��ƶ��ͱ任View : public CView
{
protected: // �������л�����
	C���ε��ƶ��ͱ任View();
	DECLARE_DYNCREATE(C���ε��ƶ��ͱ任View)

// ����
public:
	C���ε��ƶ��ͱ任Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C���ε��ƶ��ͱ任View();
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

#ifndef _DEBUG  // ���ε��ƶ��ͱ任View.cpp �еĵ��԰汾
inline C���ε��ƶ��ͱ任Doc* C���ε��ƶ��ͱ任View::GetDocument() const
   { return reinterpret_cast<C���ε��ƶ��ͱ任Doc*>(m_pDocument); }
#endif

