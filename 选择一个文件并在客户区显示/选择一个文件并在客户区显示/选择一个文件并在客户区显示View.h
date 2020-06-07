
// 选择一个文件并在客户区显示View.h : C选择一个文件并在客户区显示View 类的接口
//

#pragma once


class C选择一个文件并在客户区显示View : public CView
{
protected: // 仅从序列化创建
	C选择一个文件并在客户区显示View();
	DECLARE_DYNCREATE(C选择一个文件并在客户区显示View)

// 特性
public:
	C选择一个文件并在客户区显示Doc* GetDocument() const;

// 操作
public:
	MyDlg3 dlg;
	CString r;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C选择一个文件并在客户区显示View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnShowfile();
};

#ifndef _DEBUG  // 选择一个文件并在客户区显示View.cpp 中的调试版本
inline C选择一个文件并在客户区显示Doc* C选择一个文件并在客户区显示View::GetDocument() const
   { return reinterpret_cast<C选择一个文件并在客户区显示Doc*>(m_pDocument); }
#endif

