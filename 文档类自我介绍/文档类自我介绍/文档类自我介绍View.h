
// �ĵ������ҽ���View.h : C�ĵ������ҽ���View ��Ľӿ�
//

#pragma once


class C�ĵ������ҽ���View : public CView
{
protected: // �������л�����
	C�ĵ������ҽ���View();
	DECLARE_DYNCREATE(C�ĵ������ҽ���View)

// ����
public:
	C�ĵ������ҽ���Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�ĵ������ҽ���View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // �ĵ������ҽ���View.cpp �еĵ��԰汾
inline C�ĵ������ҽ���Doc* C�ĵ������ҽ���View::GetDocument() const
   { return reinterpret_cast<C�ĵ������ҽ���Doc*>(m_pDocument); }
#endif

