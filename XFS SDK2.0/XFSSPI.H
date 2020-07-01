/******************************************************************************
*                                                                             *
* xfsspi.h      WOSA/XFS - SPI functions, types, and definitions              *
*                                                                             *
*               Version 2.05  --   9/ 6/98                                    *
* 002 pwn nexus Version 2.05  --   2/ 8/99 XFS98066 item 1 Borland extern     *
*               Version 2.07  --   5/ 5/99 no changes                         *
*    Copyright: CEN WS/XFS Core participants                                  *
*                                                                             *
******************************************************************************/

#ifndef __inc_xfsspi__h
#define __inc_xfsspi__h

#include <xfsapi.h>

#include <xfsconf.h>
#include <xfsadmin.h>

/*   be aware of alignment   */
#pragma pack(push,1)

#ifdef __cplusplus//@M002
extern "C" {//@M002
#endif//@M002

/****** SPI functions ********************************************************/

HRESULT extern WINAPI WFPCancelAsyncRequest ( HSERVICE hService, REQUESTID RequestID);

HRESULT extern WINAPI WFPClose ( HSERVICE hService, HWND hWnd, REQUESTID ReqID);

HRESULT extern WINAPI WFPDeregister ( HSERVICE hService, DWORD dwEventClass, HWND hWndReg, HWND hWnd, REQUESTID ReqID);

HRESULT extern WINAPI WFPExecute ( HSERVICE hService, DWORD dwCommand, LPVOID lpCmdData, DWORD dwTimeOut, HWND hWnd, REQUESTID ReqID);

HRESULT extern WINAPI WFPGetInfo ( HSERVICE hService, DWORD dwCategory, LPVOID lpQueryDetails, DWORD dwTimeOut, HWND hWnd, REQUESTID ReqID);

HRESULT extern WINAPI WFPLock ( HSERVICE hService, DWORD dwTimeOut, HWND hWnd, REQUESTID ReqID);

HRESULT extern WINAPI WFPOpen ( HSERVICE hService, LPSTR lpszLogicalName, HAPP hApp, LPSTR lpszAppID, DWORD dwTraceLevel, DWORD dwTimeOut, HWND hWnd, REQUESTID ReqID, HPROVIDER hProvider, DWORD dwSPIVersionsRequired, LPWFSVERSION lpSPIVersion, DWORD dwSrvcVersionsRequired, LPWFSVERSION lpSrvcVersion);

HRESULT extern WINAPI WFPRegister ( HSERVICE hService,  DWORD dwEventClass, HWND hWndReg, HWND hWnd, REQUESTID ReqID);

HRESULT extern WINAPI WFPSetTraceLevel ( HSERVICE hService, DWORD dwTraceLevel);

HRESULT extern WINAPI WFPUnloadService (  );

HRESULT extern WINAPI WFPUnlock ( HSERVICE hService, HWND hWnd, REQUESTID );

#ifdef __cplusplus//@M002
}    /*extern "C" @M002*/
#endif//@M002

/*   restore alignment   */
#pragma pack(pop)

#endif  /* __inc_xfsspi__h */

