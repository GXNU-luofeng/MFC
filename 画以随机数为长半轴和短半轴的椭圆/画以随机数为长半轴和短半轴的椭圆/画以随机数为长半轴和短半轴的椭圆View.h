
// 画以随机数为长半轴和短半轴的椭圆View.h : C画以随机数为长半轴和短半轴的椭圆View 类的接口
//

#pragma once


class C画以随机数为长半轴和短半轴的椭圆View : public CView
{
protected: // 仅从序列化创建
	C画以随机数为长半轴和短半轴的椭圆View();
	DECLARE_DYNCREATE(C画以随机数为长半轴和短半轴的椭圆View)

// 特性
public:
	C画以随机数为长半轴和短半轴的椭圆Doc* GetDocument() const;

// 操作
public:
	CArray<CRect, CRect&> ca;
	CPoint point0;
	int a;
	int b;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C画以随机数为长半轴和短半轴的椭圆View();
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

#ifndef _DEBUG  // 画以随机数为长半轴和短半轴的椭圆View.cpp 中的调试版本
inline C画以随机数为长半轴和短半轴的椭圆Doc* C画以随机数为长半轴和短半轴的椭圆View::GetDocument() const
   { return reinterpret_cast<C画以随机数为长半轴和短半轴的椭圆Doc*>(m_pDocument); }
#endif

