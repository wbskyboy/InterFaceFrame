
// InterFaceDemoDlg.h : header file
//

#pragma once
#include "ChildDlg.h"

// CInterFaceDemoDlg dialog
class CInterFaceDemoDlg : public CDialog
{
// Construction
public:
	CInterFaceDemoDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_INTERFACEDEMO_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	CChildDlg m_dlg;
	HICON m_hIcon;
	CToolBar m_wndToolBar;
	CImageList m_ImageList;
	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnTool1();
	afx_msg void OnTool2();
	afx_msg void OnTool3();
	afx_msg void OnTool4();
	afx_msg void OnTool5();
	afx_msg void OnTool6();
	afx_msg LRESULT OnNcHitTest(CPoint point);
};
