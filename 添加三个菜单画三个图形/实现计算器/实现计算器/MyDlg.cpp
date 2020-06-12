// MyDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "实现计算器.h"
#include "MyDlg.h"
#include "afxdialogex.h"


// MyDlg 对话框

IMPLEMENT_DYNAMIC(MyDlg, CDialogEx)

MyDlg::MyDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, c(_T(""))
	, y(0)
	, z(0)
{
	

}

MyDlg::~MyDlg()
{
	
}

void MyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, Lbox);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, c);
	DDX_Text(pDX, IDC_EDIT3, y);
	DDX_Text(pDX, IDC_EDIT4, z);
}


BEGIN_MESSAGE_MAP(MyDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &MyDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_B, &MyDlg::OnBnClickedB)
END_MESSAGE_MAP()


// MyDlg 消息处理程序


void MyDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	int n = Lbox.GetCurSel();
	Lbox.GetText(n, s);
}


void MyDlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	c = s;
	if ("加" == c)
	{
		
		z = x + y;
	}
	if ("减" == c)
	{
		z = x - y;
	}
	if ("乘" == c)
	{
		z = x * y;
	}
	if ("除" == c)
	{
		if (y!= 0)
		{
			z = x / y;
		}
	}
	if ("开平方" == c)
	{
		if (y >=0)
		{
			z = y ^ (1 / 2);
		}
	}
	else
	{
		if (x!= 0)
		{
			z = 1 / x;
		}
	}
	UpdateData(false);
}


BOOL MyDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	Lbox.AddString(_T("加"));
	Lbox.AddString(_T("减"));
	Lbox.AddString(_T("乘"));
	Lbox.AddString(_T("除"));
	Lbox.AddString(_T("开平方"));
	Lbox.AddString(_T("倒数"));
	s = "";
	y = 0;
	
	// TODO:  在此添加额外的初始化

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void MyDlg::OnBnClickedB()
{
	// TODO: 在此添加控件通知处理程序代码
}
