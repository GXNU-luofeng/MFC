
// 在对话框中填数据画椭圆View.h : C在对话框中填数据画椭圆View 类的接口
//

#pragma once


class C在对话框中填数据画椭圆View : public CView
{
protected: // 仅从序列化创建
	C在对话框中填数据画椭圆View();
	DECLARE_DYNCREATE(C在对话框中填数据画椭圆View)

// 特性
public:
	C在对话框中填数据画椭圆Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C在对话框中填数据画椭圆View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 在对话框中填数据画椭圆View.cpp 中的调试版本
inline C在对话框中填数据画椭圆Doc* C在对话框中填数据画椭圆View::GetDocument() const
   { return reinterpret_cast<C在对话框中填数据画椭圆Doc*>(m_pDocument); }
#endif

