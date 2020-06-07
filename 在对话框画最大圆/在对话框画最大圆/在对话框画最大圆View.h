
// 在对话框画最大圆View.h : C在对话框画最大圆View 类的接口
//

#pragma once


class C在对话框画最大圆View : public CView
{
protected: // 仅从序列化创建
	C在对话框画最大圆View();
	DECLARE_DYNCREATE(C在对话框画最大圆View)

// 特性
public:
	C在对话框画最大圆Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C在对话框画最大圆View();
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

#ifndef _DEBUG  // 在对话框画最大圆View.cpp 中的调试版本
inline C在对话框画最大圆Doc* C在对话框画最大圆View::GetDocument() const
   { return reinterpret_cast<C在对话框画最大圆Doc*>(m_pDocument); }
#endif

