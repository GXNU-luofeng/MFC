
// 矩形的移动和变换View.h : C矩形的移动和变换View 类的接口
//

#pragma once


class C矩形的移动和变换View : public CView
{
protected: // 仅从序列化创建
	C矩形的移动和变换View();
	DECLARE_DYNCREATE(C矩形的移动和变换View)

// 特性
public:
	C矩形的移动和变换Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C矩形的移动和变换View();
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

#ifndef _DEBUG  // 矩形的移动和变换View.cpp 中的调试版本
inline C矩形的移动和变换Doc* C矩形的移动和变换View::GetDocument() const
   { return reinterpret_cast<C矩形的移动和变换Doc*>(m_pDocument); }
#endif

