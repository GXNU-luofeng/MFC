
// 选择一个文件并在客户区显示Doc.cpp : C选择一个文件并在客户区显示Doc 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "选择一个文件并在客户区显示.h"
#endif

#include "选择一个文件并在客户区显示Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C选择一个文件并在客户区显示Doc

IMPLEMENT_DYNCREATE(C选择一个文件并在客户区显示Doc, CDocument)

BEGIN_MESSAGE_MAP(C选择一个文件并在客户区显示Doc, CDocument)
END_MESSAGE_MAP()


// C选择一个文件并在客户区显示Doc 构造/析构

C选择一个文件并在客户区显示Doc::C选择一个文件并在客户区显示Doc()
{
	// TODO: 在此添加一次性构造代码

}

C选择一个文件并在客户区显示Doc::~C选择一个文件并在客户区显示Doc()
{
}

BOOL C选择一个文件并在客户区显示Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 在此添加重新初始化代码
	// (SDI 文档将重用该文档)

	return TRUE;
}




// C选择一个文件并在客户区显示Doc 序列化

void C选择一个文件并在客户区显示Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: 在此添加存储代码
	}
	else
	{
		// TODO: 在此添加加载代码
	}
}

#ifdef SHARED_HANDLERS

// 缩略图的支持
void C选择一个文件并在客户区显示Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// 修改此代码以绘制文档数据
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// 搜索处理程序的支持
void C选择一个文件并在客户区显示Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// 从文档数据设置搜索内容。
	// 内容部分应由“;”分隔

	// 例如:     strSearchContent = _T("point;rectangle;circle;ole object;")；
	SetSearchContent(strSearchContent);
}

void C选择一个文件并在客户区显示Doc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// C选择一个文件并在客户区显示Doc 诊断

#ifdef _DEBUG
void C选择一个文件并在客户区显示Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void C选择一个文件并在客户区显示Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C选择一个文件并在客户区显示Doc 命令
