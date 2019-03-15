
// Test_Vs2008_190306Dlg.h : header file
//

#pragma once


// CTest_Vs2008_190306Dlg dialog
class CTest_Vs2008_190306Dlg : public CDialog
{
// Construction
public:
	CTest_Vs2008_190306Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_TEST_VS2008_190306_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
