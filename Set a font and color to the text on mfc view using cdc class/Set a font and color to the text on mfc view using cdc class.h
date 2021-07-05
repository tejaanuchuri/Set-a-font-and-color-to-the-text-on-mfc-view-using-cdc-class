
// Set a font and color to the text on mfc view using cdc class.h : main header file for the Set a font and color to the text on mfc view using cdc class application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CSetafontandcolortothetextonmfcviewusingcdcclassApp:
// See Set a font and color to the text on mfc view using cdc class.cpp for the implementation of this class
//

class CSetafontandcolortothetextonmfcviewusingcdcclassApp : public CWinAppEx
{
public:
	CSetafontandcolortothetextonmfcviewusingcdcclassApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CSetafontandcolortothetextonmfcviewusingcdcclassApp theApp;
