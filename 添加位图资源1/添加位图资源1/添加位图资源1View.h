
// 添加位图资源1View.h : C添加位图资源1View 类的接口
//

#pragma once


class C添加位图资源1View : public CView
{
protected: // 仅从序列化创建
	C添加位图资源1View();
	DECLARE_DYNCREATE(C添加位图资源1View)

// 特性
public:
	C添加位图资源1Doc* GetDocument() const;
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;
// 操作
public:
	
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C添加位图资源1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 添加位图资源1View.cpp 中的调试版本
inline C添加位图资源1Doc* C添加位图资源1View::GetDocument() const
   { return reinterpret_cast<C添加位图资源1Doc*>(m_pDocument); }
#endif

