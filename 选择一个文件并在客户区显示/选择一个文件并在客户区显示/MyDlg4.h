#pragma once


// MyDlg4 �Ի���

class MyDlg4 : public CDialogEx
{
	DECLARE_DYNAMIC(MyDlg4)

public:
	MyDlg4(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyDlg4();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString x;
	afx_msg void OnBnClickedButton1();
	virtual BOOL OnInitDialog();
};
