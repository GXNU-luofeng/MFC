// MyDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "在对话框中填数据画椭圆.h"
#include "MyDlg.h"
#include "afxdialogex.h"


// MyDlg 对话框

IMPLEMENT_DYNAMIC(MyDlg, CDialogEx)

MyDlg::MyDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x1(0)
	, x2(0)
	, y1(0)
	, y2(0)
{

}

MyDlg::~MyDlg()
{
}

void MyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x1);
	DDX_Text(pDX, IDC_EDIT2, x2);
	DDX_Text(pDX, IDC_EDIT3, y1);
	DDX_Text(pDX, IDC_EDIT4, y2);
}


BEGIN_MESSAGE_MAP(MyDlg, CDialogEx)
END_MESSAGE_MAP()


// MyDlg 消息处理程序
