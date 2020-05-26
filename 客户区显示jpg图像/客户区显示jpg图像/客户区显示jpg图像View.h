
// 客户区显示jpg图像View.h : C客户区显示jpg图像View 类的接口
//

#pragma once


class C客户区显示jpg图像View : public CView
{
protected: // 仅从序列化创建
	C客户区显示jpg图像View();
	DECLARE_DYNCREATE(C客户区显示jpg图像View)

// 特性
public:
	C客户区显示jpg图像Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C客户区显示jpg图像View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
//	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 客户区显示jpg图像View.cpp 中的调试版本
inline C客户区显示jpg图像Doc* C客户区显示jpg图像View::GetDocument() const
   { return reinterpret_cast<C客户区显示jpg图像Doc*>(m_pDocument); }
#endif

