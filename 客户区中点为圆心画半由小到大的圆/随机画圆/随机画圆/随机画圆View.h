
// 随机画圆View.h : C随机画圆View 类的接口
//

#pragma once


class C随机画圆View : public CView
{
protected: // 仅从序列化创建
	C随机画圆View();
	DECLARE_DYNCREATE(C随机画圆View)

// 特性
public:
	C随机画圆Doc* GetDocument() const;

// 操作
public:
	int r;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C随机画圆View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 随机画圆View.cpp 中的调试版本
inline C随机画圆Doc* C随机画圆View::GetDocument() const
   { return reinterpret_cast<C随机画圆Doc*>(m_pDocument); }
#endif

