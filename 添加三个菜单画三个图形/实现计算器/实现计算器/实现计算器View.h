
// 实现计算器View.h : C实现计算器View 类的接口
//

#pragma once


class C实现计算器View : public CView
{
protected: // 仅从序列化创建
	C实现计算器View();
	DECLARE_DYNCREATE(C实现计算器View)

// 特性
public:
	C实现计算器Doc* GetDocument() const;

// 操作
public:
	MyDlg dlg;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C实现计算器View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 实现计算器View.cpp 中的调试版本
inline C实现计算器Doc* C实现计算器View::GetDocument() const
   { return reinterpret_cast<C实现计算器Doc*>(m_pDocument); }
#endif

