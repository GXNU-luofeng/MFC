
// 客户区显示AB和的值View.h : C客户区显示AB和的值View 类的接口
//

#pragma once


class C客户区显示AB和的值View : public CView
{
protected: // 仅从序列化创建
	C客户区显示AB和的值View();
	DECLARE_DYNCREATE(C客户区显示AB和的值View)

// 特性
public:
	C客户区显示AB和的值Doc* GetDocument() const;

// 操作
public:
	int A;
	int B;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C客户区显示AB和的值View();
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

#ifndef _DEBUG  // 客户区显示AB和的值View.cpp 中的调试版本
inline C客户区显示AB和的值Doc* C客户区显示AB和的值View::GetDocument() const
   { return reinterpret_cast<C客户区显示AB和的值Doc*>(m_pDocument); }
#endif

