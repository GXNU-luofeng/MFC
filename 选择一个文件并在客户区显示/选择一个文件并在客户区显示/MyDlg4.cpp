// MyDlg4.cpp : 实现文件
//

#include "stdafx.h"
#include "选择一个文件并在客户区显示.h"
#include "MyDlg4.h"
#include "afxdialogex.h"


// MyDlg4 对话框

IMPLEMENT_DYNAMIC(MyDlg4, CDialogEx)

MyDlg4::MyDlg4(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, x(_T(""))
{

}

MyDlg4::~MyDlg4()
{
}

void MyDlg4::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
}


BEGIN_MESSAGE_MAP(MyDlg4, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg4::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDlg4 消息处理程序


void MyDlg4::OnBnClickedButton1()
{
	
	
	// TODO: 在此添加控件通知处理程序代码
}


BOOL MyDlg4::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	

	// TODO:  在此添加额外的初始化

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
