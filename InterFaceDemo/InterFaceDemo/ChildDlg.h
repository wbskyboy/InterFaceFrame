#pragma once
#include "PageOne.h"
#include "PageTwo.h"
#include "MySheet.h"

// CChildDlg dialog

class CChildDlg : public CDialog
{
	DECLARE_DYNAMIC(CChildDlg)

public:
	CChildDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CChildDlg();

// Dialog Data
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	CPageOne *m_pageone;
	CPageTwo *m_pagetwo;
	CMySheet *m_sheet;
	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL Create(LPCTSTR lpszTemplateName, CWnd* pParentWnd = NULL);
	virtual BOOL OnInitDialog();
	virtual void OnCancel();
//	afx_msg LRESULT OnNcHitTest(CPoint point);
//	afx_msg LRESULT OnNcHitTest(CPoint point);
};
