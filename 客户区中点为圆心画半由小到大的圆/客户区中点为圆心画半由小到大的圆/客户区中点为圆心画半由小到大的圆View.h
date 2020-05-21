
// 客户区中点为圆心画半由小到大的圆View.h : C客户区中点为圆心画半由小到大的圆View 类的接口
//

#pragma once


class C客户区中点为圆心画半由小到大的圆View : public CView
{
protected: // 仅从序列化创建
	C客户区中点为圆心画半由小到大的圆View();
	DECLARE_DYNCREATE(C客户区中点为圆心画半由小到大的圆View)

// 特性
public:
	C客户区中点为圆心画半由小到大的圆Doc* GetDocument() const;

// 操作
public:
	CRect cr;
	CRect cr1;
	int set;
	int a;
	int b;
	

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C客户区中点为圆心画半由小到大的圆View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
//	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // 客户区中点为圆心画半由小到大的圆View.cpp 中的调试版本
inline C客户区中点为圆心画半由小到大的圆Doc* C客户区中点为圆心画半由小到大的圆View::GetDocument() const
   { return reinterpret_cast<C客户区中点为圆心画半由小到大的圆Doc*>(m_pDocument); }
#endif

