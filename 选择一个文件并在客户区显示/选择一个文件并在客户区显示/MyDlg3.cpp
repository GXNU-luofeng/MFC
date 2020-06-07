// MyDlg3.cpp : 实现文件
//

#include "stdafx.h"
#include "选择一个文件并在客户区显示.h"
#include "MyDlg3.h"
#include "afxdialogex.h"


// MyDlg3 对话框

IMPLEMENT_DYNAMIC(MyDlg3, CDialogEx)

MyDlg3::MyDlg3(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s2(_T(""))
{

}

MyDlg3::~MyDlg3()
{
}

void MyDlg3::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, Lbox);
	DDX_Text(pDX, IDC_EDIT1, s2);
	DDX_Control(pDX, IDC_LIST2, Lbox2);
}


BEGIN_MESSAGE_MAP(MyDlg3, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg3::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON3, &MyDlg3::OnBnClickedButton3)
END_MESSAGE_MAP()


// MyDlg3 消息处理程序


BOOL MyDlg3::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	Lbox.AddString(_T("消息处理程序"));
	Lbox.AddString(_T("添加额外的初始化"));
	
	
	// TODO:  在此添加额外的初始化

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void MyDlg3::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	int n = Lbox.GetCurSel();
	Lbox.GetText(n, s);
	
}


void MyDlg3::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	s2 = s;
	Lbox2 .AddString(s);
	UpdateData(false);
}
