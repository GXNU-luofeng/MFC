
// 画以客户区中心为圆心画由小到大颜色渐变的圆View.h : C画以客户区中心为圆心画由小到大颜色渐变的圆View 类的接口
//

#pragma once


class C画以客户区中心为圆心画由小到大颜色渐变的圆View : public CView
{
protected: // 仅从序列化创建
	C画以客户区中心为圆心画由小到大颜色渐变的圆View();
	DECLARE_DYNCREATE(C画以客户区中心为圆心画由小到大颜色渐变的圆View)

// 特性
public:
	C画以客户区中心为圆心画由小到大颜色渐变的圆Doc* GetDocument() const;

// 操作
public:
	int set;
	CRect cr;
	CRect cr1;
	int a;
	int b;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C画以客户区中心为圆心画由小到大颜色渐变的圆View();
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
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // 画以客户区中心为圆心画由小到大颜色渐变的圆View.cpp 中的调试版本
inline C画以客户区中心为圆心画由小到大颜色渐变的圆Doc* C画以客户区中心为圆心画由小到大颜色渐变的圆View::GetDocument() const
   { return reinterpret_cast<C画以客户区中心为圆心画由小到大颜色渐变的圆Doc*>(m_pDocument); }
#endif

