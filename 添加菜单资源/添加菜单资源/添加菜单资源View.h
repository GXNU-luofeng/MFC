
// ��Ӳ˵���ԴView.h : C��Ӳ˵���ԴView ��Ľӿ�
//

#pragma once


class C��Ӳ˵���ԴView : public CView
{
protected: // �������л�����
	C��Ӳ˵���ԴView();
	DECLARE_DYNCREATE(C��Ӳ˵���ԴView)

// ����
public:
	C��Ӳ˵���ԴDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��Ӳ˵���ԴView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnViewStatusBar();
	afx_msg void OnShowname();
};

#ifndef _DEBUG  // ��Ӳ˵���ԴView.cpp �еĵ��԰汾
inline C��Ӳ˵���ԴDoc* C��Ӳ˵���ԴView::GetDocument() const
   { return reinterpret_cast<C��Ӳ˵���ԴDoc*>(m_pDocument); }
#endif

