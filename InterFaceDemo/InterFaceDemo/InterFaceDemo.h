
// InterFaceDemo.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CInterFaceDemoApp:
// See InterFaceDemo.cpp for the implementation of this class
//

class CInterFaceDemoApp : public CWinApp
{
public:
	CInterFaceDemoApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CInterFaceDemoApp theApp;