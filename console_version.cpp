/* 
 * Copyright (C) 2009 Chanwoong Kim
 */
#include "stdafx.h"
#include <windows.h>
 
void SetVisible(HWND child)
{
 LONG style = GetWindowLong(child, GWL_STYLE);
 style = style & ~WS_DISABLED;
 style = style | WS_VISIBLE;
 
 SetWindowLong(child, GWL_STYLE, style);
}
int _tmain(int argc, _TCHAR* argv[])
{
 
 HWND hWnd_p = NULL;
 printf("maintenance window handle(HWND) value hex code :");
 scanf("%x",&hWnd_p);
 
 for(HWND child = GetWindow(hWnd_p,GW_CHILD); child != NULL; child = GetWindow(child,GW_HWNDNEXT))
 {
 SetVisible(child);
 }
 
 return 0;
}
