
// ���ͻ�������ΪԲ�Ĳ���߽�����View.h : C���ͻ�������ΪԲ�Ĳ���߽�����View ��Ľӿ�
//

#pragma once


class C���ͻ�������ΪԲ�Ĳ���߽�����View : public CView
{
protected: // �������л�����
	C���ͻ�������ΪԲ�Ĳ���߽�����View();
	DECLARE_DYNCREATE(C���ͻ�������ΪԲ�Ĳ���߽�����View)

// ����
public:
	C���ͻ�������ΪԲ�Ĳ���߽�����Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C���ͻ�������ΪԲ�Ĳ���߽�����View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ���ͻ�������ΪԲ�Ĳ���߽�����View.cpp �еĵ��԰汾
inline C���ͻ�������ΪԲ�Ĳ���߽�����Doc* C���ͻ�������ΪԲ�Ĳ���߽�����View::GetDocument() const
   { return reinterpret_cast<C���ͻ�������ΪԲ�Ĳ���߽�����Doc*>(m_pDocument); }
#endif

