
// ��ʾ������º�̧��View.h : C��ʾ������º�̧��View ��Ľӿ�
//

#pragma once


class C��ʾ������º�̧��View : public CView
{
protected: // �������л�����
	C��ʾ������º�̧��View();
	DECLARE_DYNCREATE(C��ʾ������º�̧��View)

// ����
public:
	C��ʾ������º�̧��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ʾ������º�̧��View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ��ʾ������º�̧��View.cpp �еĵ��԰汾
inline C��ʾ������º�̧��Doc* C��ʾ������º�̧��View::GetDocument() const
   { return reinterpret_cast<C��ʾ������º�̧��Doc*>(m_pDocument); }
#endif

