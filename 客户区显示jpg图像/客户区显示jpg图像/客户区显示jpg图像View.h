
// �ͻ�����ʾjpgͼ��View.h : C�ͻ�����ʾjpgͼ��View ��Ľӿ�
//

#pragma once


class C�ͻ�����ʾjpgͼ��View : public CView
{
protected: // �������л�����
	C�ͻ�����ʾjpgͼ��View();
	DECLARE_DYNCREATE(C�ͻ�����ʾjpgͼ��View)

// ����
public:
	C�ͻ�����ʾjpgͼ��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�ͻ�����ʾjpgͼ��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
//	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // �ͻ�����ʾjpgͼ��View.cpp �еĵ��԰汾
inline C�ͻ�����ʾjpgͼ��Doc* C�ͻ�����ʾjpgͼ��View::GetDocument() const
   { return reinterpret_cast<C�ͻ�����ʾjpgͼ��Doc*>(m_pDocument); }
#endif

