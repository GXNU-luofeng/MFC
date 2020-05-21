
// 显示左键按下和抬起View.h : C显示左键按下和抬起View 类的接口
//

#pragma once


class C显示左键按下和抬起View : public CView
{
protected: // 仅从序列化创建
	C显示左键按下和抬起View();
	DECLARE_DYNCREATE(C显示左键按下和抬起View)

// 特性
public:
	C显示左键按下和抬起Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C显示左键按下和抬起View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 显示左键按下和抬起View.cpp 中的调试版本
inline C显示左键按下和抬起Doc* C显示左键按下和抬起View::GetDocument() const
   { return reinterpret_cast<C显示左键按下和抬起Doc*>(m_pDocument); }
#endif

