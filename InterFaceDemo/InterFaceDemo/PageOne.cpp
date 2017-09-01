// PageOne.cpp : implementation file
//

#include "stdafx.h"
#include "InterFaceDemo.h"
#include "PageOne.h"
#include "afxdialogex.h"


// CPageOne dialog

IMPLEMENT_DYNAMIC(CPageOne, CPropertyPage)

CPageOne::CPageOne()
	: CPropertyPage(CPageOne::IDD)
{

}

CPageOne::~CPageOne()
{
}

void CPageOne::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPageOne, CPropertyPage)
END_MESSAGE_MAP()


// CPageOne message handlers
