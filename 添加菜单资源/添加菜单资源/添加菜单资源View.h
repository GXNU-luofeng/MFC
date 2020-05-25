
// 添加菜单资源View.h : C添加菜单资源View 类的接口
//

#pragma once


class C添加菜单资源View : public CView
{
protected: // 仅从序列化创建
	C添加菜单资源View();
	DECLARE_DYNCREATE(C添加菜单资源View)

// 特性
public:
	C添加菜单资源Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C添加菜单资源View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnViewStatusBar();
	afx_msg void OnShowname();
};

#ifndef _DEBUG  // 添加菜单资源View.cpp 中的调试版本
inline C添加菜单资源Doc* C添加菜单资源View::GetDocument() const
   { return reinterpret_cast<C添加菜单资源Doc*>(m_pDocument); }
#endif

