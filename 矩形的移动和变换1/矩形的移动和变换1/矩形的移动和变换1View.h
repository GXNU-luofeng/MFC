
// ���ε��ƶ��ͱ任1View.h : C���ε��ƶ��ͱ任1View ��Ľӿ�
//

#pragma once


class C���ε��ƶ��ͱ任1View : public CView
{
protected: // �������л�����
	C���ε��ƶ��ͱ任1View();
	DECLARE_DYNCREATE(C���ε��ƶ��ͱ任1View)

// ����
public:
	C���ε��ƶ��ͱ任1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C���ε��ƶ��ͱ任1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // ���ε��ƶ��ͱ任1View.cpp �еĵ��԰汾
inline C���ε��ƶ��ͱ任1Doc* C���ε��ƶ��ͱ任1View::GetDocument() const
   { return reinterpret_cast<C���ε��ƶ��ͱ任1Doc*>(m_pDocument); }
#endif

