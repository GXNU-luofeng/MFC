// MyDlg4.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ѡ��һ���ļ����ڿͻ�����ʾ.h"
#include "MyDlg4.h"
#include "afxdialogex.h"


// MyDlg4 �Ի���

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


// MyDlg4 ��Ϣ�������


void MyDlg4::OnBnClickedButton1()
{
	
	
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


BOOL MyDlg4::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
