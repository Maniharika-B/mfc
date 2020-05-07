#pragma once


// loginpg dialog

class loginpg : public CDialogEx
{
	DECLARE_DYNAMIC(loginpg)

public:
	loginpg(CWnd* pParent = nullptr);   // standard constructor
	virtual ~loginpg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CString hnm;
	CEdit chnm;
	CString pssl;
	CEdit cpssl;
};
