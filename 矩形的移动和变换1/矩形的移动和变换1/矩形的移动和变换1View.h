
// 矩形的移动和变换1View.h : C矩形的移动和变换1View 类的接口
//

#pragma once


class C矩形的移动和变换1View : public CView
{
protected: // 仅从序列化创建
	C矩形的移动和变换1View();
	DECLARE_DYNCREATE(C矩形的移动和变换1View)

// 特性
public:
	C矩形的移动和变换1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C矩形的移动和变换1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // 矩形的移动和变换1View.cpp 中的调试版本
inline C矩形的移动和变换1Doc* C矩形的移动和变换1View::GetDocument() const
   { return reinterpret_cast<C矩形的移动和变换1Doc*>(m_pDocument); }
#endif

