
// ���λͼ��Դ1View.h : C���λͼ��Դ1View ��Ľӿ�
//

#pragma once


class C���λͼ��Դ1View : public CView
{
protected: // �������л�����
	C���λͼ��Դ1View();
	DECLARE_DYNCREATE(C���λͼ��Դ1View)

// ����
public:
	C���λͼ��Դ1Doc* GetDocument() const;
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;
// ����
public:
	
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C���λͼ��Դ1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ���λͼ��Դ1View.cpp �еĵ��԰汾
inline C���λͼ��Դ1Doc* C���λͼ��Դ1View::GetDocument() const
   { return reinterpret_cast<C���λͼ��Դ1Doc*>(m_pDocument); }
#endif

