
// 画客户区中心为圆心并与边界相切View.h : C画客户区中心为圆心并与边界相切View 类的接口
//

#pragma once


class C画客户区中心为圆心并与边界相切View : public CView
{
protected: // 仅从序列化创建
	C画客户区中心为圆心并与边界相切View();
	DECLARE_DYNCREATE(C画客户区中心为圆心并与边界相切View)

// 特性
public:
	C画客户区中心为圆心并与边界相切Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C画客户区中心为圆心并与边界相切View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 画客户区中心为圆心并与边界相切View.cpp 中的调试版本
inline C画客户区中心为圆心并与边界相切Doc* C画客户区中心为圆心并与边界相切View::GetDocument() const
   { return reinterpret_cast<C画客户区中心为圆心并与边界相切Doc*>(m_pDocument); }
#endif

