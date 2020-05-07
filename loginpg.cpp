// loginpg.cpp : implementation file
//

#include "pch.h"
#include "MFCApplication4.h"
#include "loginpg.h"
#include "afxdialogex.h"


// loginpg dialog

IMPLEMENT_DYNAMIC(loginpg, CDialogEx)

loginpg::loginpg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, hnm(_T(""))
	, pssl(_T(""))
{

}

loginpg::~loginpg()
{
}

void loginpg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, hnm);
	DDX_Control(pDX, IDC_EDIT1, chnm);
	DDX_Text(pDX, IDC_EDIT2, pssl);
	DDX_Control(pDX, IDC_EDIT2, cpssl);
}


BEGIN_MESSAGE_MAP(loginpg, CDialogEx)
END_MESSAGE_MAP()


// loginpg message handlers
