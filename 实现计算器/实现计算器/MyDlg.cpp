// MyDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ʵ�ּ�����.h"
#include "MyDlg.h"
#include "afxdialogex.h"


// MyDlg �Ի���

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


// MyDlg ��Ϣ�������


void MyDlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int n = Lbox.GetCurSel();
	Lbox.GetText(n, s);
}


void MyDlg::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	c = s;
	if ("��" == c)
	{
		
		z = x + y;
	}
	if ("��" == c)
	{
		z = x - y;
	}
	if ("��" == c)
	{
		z = x * y;
	}
	if ("��" == c)
	{
		if (y!= 0)
		{
			z = x / y;
		}
	}
	if ("��ƽ��" == c)
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
	Lbox.AddString(_T("��"));
	Lbox.AddString(_T("��"));
	Lbox.AddString(_T("��"));
	Lbox.AddString(_T("��"));
	Lbox.AddString(_T("��ƽ��"));
	Lbox.AddString(_T("����"));
	s = "";
	y = 0;
	
	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void MyDlg::OnBnClickedB()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
