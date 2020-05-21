
// 文档类自我介绍View.h : C文档类自我介绍View 类的接口
//

#pragma once


class C文档类自我介绍View : public CView
{
protected: // 仅从序列化创建
	C文档类自我介绍View();
	DECLARE_DYNCREATE(C文档类自我介绍View)

// 特性
public:
	C文档类自我介绍Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C文档类自我介绍View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 文档类自我介绍View.cpp 中的调试版本
inline C文档类自我介绍Doc* C文档类自我介绍View::GetDocument() const
   { return reinterpret_cast<C文档类自我介绍Doc*>(m_pDocument); }
#endif

