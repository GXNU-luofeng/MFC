
// ��������˵�������ͼ��View.h : C��������˵�������ͼ��View ��Ľӿ�
//

#pragma once


class C��������˵�������ͼ��View : public CView
{
protected: // �������л�����
	C��������˵�������ͼ��View();
	DECLARE_DYNCREATE(C��������˵�������ͼ��View)

// ����
public:
	C��������˵�������ͼ��Doc* GetDocument() const;
	CPoint point0;
	CPoint point1;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��������˵�������ͼ��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnHuaxian();
	afx_msg void OnHuajuxing();
	afx_msg void OnHuatuyuan();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ��������˵�������ͼ��View.cpp �еĵ��԰汾
inline C��������˵�������ͼ��Doc* C��������˵�������ͼ��View::GetDocument() const
   { return reinterpret_cast<C��������˵�������ͼ��Doc*>(m_pDocument); }
#endif

