
// 添加三个菜单画三个图形View.h : C添加三个菜单画三个图形View 类的接口
//

#pragma once


class C添加三个菜单画三个图形View : public CView
{
protected: // 仅从序列化创建
	C添加三个菜单画三个图形View();
	DECLARE_DYNCREATE(C添加三个菜单画三个图形View)

// 特性
public:
	C添加三个菜单画三个图形Doc* GetDocument() const;
	CPoint point0;
	CPoint point1;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C添加三个菜单画三个图形View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnHuaxian();
	afx_msg void OnHuajuxing();
	afx_msg void OnHuatuyuan();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 添加三个菜单画三个图形View.cpp 中的调试版本
inline C添加三个菜单画三个图形Doc* C添加三个菜单画三个图形View::GetDocument() const
   { return reinterpret_cast<C添加三个菜单画三个图形Doc*>(m_pDocument); }
#endif

