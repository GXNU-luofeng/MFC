
// ���ҽ���View.h : C���ҽ���View ��Ľӿ�
//

#pragma once


class C���ҽ���View : public CView
{
protected: // �������л�����
	C���ҽ���View();
	DECLARE_DYNCREATE(C���ҽ���View)

// ����
public:
	C���ҽ���Doc* GetDocument() const;

// ����
public:
	int a;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C���ҽ���View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ���ҽ���View.cpp �еĵ��԰汾
inline C���ҽ���Doc* C���ҽ���View::GetDocument() const
   { return reinterpret_cast<C���ҽ���Doc*>(m_pDocument); }
#endif

