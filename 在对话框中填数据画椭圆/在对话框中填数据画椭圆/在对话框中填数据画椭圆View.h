
// �ڶԻ����������ݻ���ԲView.h : C�ڶԻ����������ݻ���ԲView ��Ľӿ�
//

#pragma once


class C�ڶԻ����������ݻ���ԲView : public CView
{
protected: // �������л�����
	C�ڶԻ����������ݻ���ԲView();
	DECLARE_DYNCREATE(C�ڶԻ����������ݻ���ԲView)

// ����
public:
	C�ڶԻ����������ݻ���ԲDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�ڶԻ����������ݻ���ԲView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // �ڶԻ����������ݻ���ԲView.cpp �еĵ��԰汾
inline C�ڶԻ����������ݻ���ԲDoc* C�ڶԻ����������ݻ���ԲView::GetDocument() const
   { return reinterpret_cast<C�ڶԻ����������ݻ���ԲDoc*>(m_pDocument); }
#endif

