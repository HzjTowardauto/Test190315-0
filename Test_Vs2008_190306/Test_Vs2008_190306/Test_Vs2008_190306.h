
// Test_Vs2008_190306.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CTest_Vs2008_190306App:
// See Test_Vs2008_190306.cpp for the implementation of this class
//

class CTest_Vs2008_190306App : public CWinAppEx
{
public:
	CTest_Vs2008_190306App();

// Overrides
	public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CTest_Vs2008_190306App theApp;