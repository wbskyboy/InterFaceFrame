#pragma once


// CPageOne dialog

class CPageOne : public CPropertyPage
{
	DECLARE_DYNAMIC(CPageOne)

public:
	CPageOne();
	virtual ~CPageOne();

// Dialog Data
	enum { IDD = IDD_PROPPAGE_LARGE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
