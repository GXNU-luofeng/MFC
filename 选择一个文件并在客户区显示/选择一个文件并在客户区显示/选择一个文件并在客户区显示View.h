
// ѡ��һ���ļ����ڿͻ�����ʾView.h : Cѡ��һ���ļ����ڿͻ�����ʾView ��Ľӿ�
//

#pragma once


class Cѡ��һ���ļ����ڿͻ�����ʾView : public CView
{
protected: // �������л�����
	Cѡ��һ���ļ����ڿͻ�����ʾView();
	DECLARE_DYNCREATE(Cѡ��һ���ļ����ڿͻ�����ʾView)

// ����
public:
	Cѡ��һ���ļ����ڿͻ�����ʾDoc* GetDocument() const;

// ����
public:
	MyDlg3 dlg;
	CString r;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cѡ��һ���ļ����ڿͻ�����ʾView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnShowfile();
};

#ifndef _DEBUG  // ѡ��һ���ļ����ڿͻ�����ʾView.cpp �еĵ��԰汾
inline Cѡ��һ���ļ����ڿͻ�����ʾDoc* Cѡ��һ���ļ����ڿͻ�����ʾView::GetDocument() const
   { return reinterpret_cast<Cѡ��һ���ļ����ڿͻ�����ʾDoc*>(m_pDocument); }
#endif

