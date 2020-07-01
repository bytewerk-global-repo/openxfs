/******************************************************************************
*                                                                             *
* xfsconf.h     WOSA/XFS - definitions for the Configuration functions        *
*                                                                             *
*               Version 2.07  --   5/ 5/99 no changes                         *
* 002 pwn nexus Version 2.05  --   2/ 8/99 XFS98066 item 1 Borland extern     *
*               Version 2.00  --  11/11/96                                    *
*                                                                             *
******************************************************************************/
 
#ifndef __INC_XFSCONF__H
#define __INC_XFSCONF__H

/******* Common **************************************************************/

#include    <xfsapi.h>

/*   be aware of alignment   */
#pragma pack(push,1)

#ifdef __cplusplus//@M002
extern "C" {//@M002
#endif//@M002

// following HKEY and PHKEY are already defined in WINREG.H
// so definition has been removed
// typedef HANDLE  HKEY;
// typedef HANDLE * PHKEY;

/******* Value of hKey *******************************************************/
#define     WFS_CFG_HKEY_XFS_ROOT               ((HKEY)1)

/******* Values of lpdwDisposition *******************************************/
#define     WFS_CFG_CREATED_NEW_KEY             (0)
#define     WFS_CFG_OPENED_EXISTING_KEY         (1)

/******* Configuration Functions *********************************************/
HRESULT extern  WINAPI  WFMCloseKey ( HKEY hKey);

HRESULT extern  WINAPI  WFMCreateKey ( HKEY hKey, LPSTR lpszSubKey, PHKEY phkResult, LPDWORD lpdwDisposition);

HRESULT extern  WINAPI  WFMDeleteKey ( HKEY hKey, LPSTR lpszSubKey);

HRESULT extern  WINAPI  WFMDeleteValue ( HKEY hKey, LPSTR lpszValue );

HRESULT extern  WINAPI  WFMEnumKey ( HKEY hKey, DWORD iSubKey, LPSTR lpszName, LPDWORD lpcchName, PFILETIME lpftLastWrite);

HRESULT extern  WINAPI  WFMEnumValue ( HKEY hKey, DWORD iValue, LPSTR lpszValue, LPDWORD lpcchValue, LPSTR lpszData, LPDWORD lpcchData);

HRESULT extern  WINAPI  WFMOpenKey ( HKEY hKey, LPSTR lpszSubKey, PHKEY phkResult);

HRESULT extern  WINAPI  WFMQueryValue ( HKEY hKey, LPSTR lpszValueName, LPSTR lpszData, LPDWORD lpcchData);

HRESULT extern  WINAPI  WFMSetValue ( HKEY hKey, LPSTR lpszValueName, LPSTR lpszData, DWORD cchData);

#ifdef __cplusplus//@M002
}       /*extern "C" @M002*/
#endif//@M002

/*   restore alignment   */
#pragma pack(pop)

#endif  /* __INC_XFSCONF__H */
