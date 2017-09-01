#pragma once


// CPageTwo dialog

class CPageTwo : public CPropertyPage
{
	DECLARE_DYNAMIC(CPageTwo)

public:
	CPageTwo();
	virtual ~CPageTwo();

// Dialog Data
	enum { IDD = IDD_PROPPAGE_LARGE1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
