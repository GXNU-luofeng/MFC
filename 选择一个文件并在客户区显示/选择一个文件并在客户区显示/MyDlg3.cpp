// MyDlg3.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ѡ��һ���ļ����ڿͻ�����ʾ.h"
#include "MyDlg3.h"
#include "afxdialogex.h"


// MyDlg3 �Ի���

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


// MyDlg3 ��Ϣ�������


BOOL MyDlg3::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	Lbox.AddString(_T("��Ϣ�������"));
	Lbox.AddString(_T("��Ӷ���ĳ�ʼ��"));
	
	
	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void MyDlg3::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int n = Lbox.GetCurSel();
	Lbox.GetText(n, s);
	
}


void MyDlg3::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	s2 = s;
	Lbox2 .AddString(s);
	UpdateData(false);
}
