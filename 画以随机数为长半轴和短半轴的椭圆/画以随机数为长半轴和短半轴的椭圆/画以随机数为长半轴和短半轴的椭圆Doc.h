
// 画以随机数为长半轴和短半轴的椭圆Doc.h : C画以随机数为长半轴和短半轴的椭圆Doc 类的接口
//


#pragma once


class C画以随机数为长半轴和短半轴的椭圆Doc : public CDocument
{
protected: // 仅从序列化创建
	C画以随机数为长半轴和短半轴的椭圆Doc();
	DECLARE_DYNCREATE(C画以随机数为长半轴和短半轴的椭圆Doc)

// 特性
public:

// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~C画以随机数为长半轴和短半轴的椭圆Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 用于为搜索处理程序设置搜索内容的 Helper 函数
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
