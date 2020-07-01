/******************************************************************************
*                                                                             *
* xfsadmin.h    WOSA/XFS-Administration and Support functions                 *
*                                                                             *
*               Version 2.07  --   5/ 5/99 no changes                         *
* 002 pwn nexus Version 2.05  --   2/ 8/99 XFS98066 item 1 Borland extern     *
*               Version 2.00  --  11/11/96                                    *
*                                                                             *
******************************************************************************/

#ifndef __INC_XFSADMIN__H
#define __INC_XFSADMIN__H

#include    <xfsapi.h>

/*   be aware of alignment   */
#pragma pack(push,1)

#ifdef __cplusplus//@M002
extern "C" {//@M002
#endif//@M002

/* values of ulFlags used for WFMAllocateBuffer */

#define WFS_MEM_SHARE                        0x00000001
#define WFS_MEM_ZEROINIT                    0x00000002

/****** Support Functions ****************************************************/

HRESULT extern WINAPI WFMAllocateBuffer( ULONG ulSize, ULONG ulFlags, LPVOID * lppvData);

HRESULT extern WINAPI WFMAllocateMore( ULONG ulSize, LPVOID lpvOriginal, LPVOID * lppvData);

HRESULT extern WINAPI WFMFreeBuffer( LPVOID lpvData);

HRESULT extern WINAPI WFMGetTraceLevel ( HSERVICE hService, LPDWORD lpdwTraceLevel);

HRESULT extern WINAPI WFMKillTimer( WORD wTimerID);

HRESULT extern WINAPI WFMOutputTraceData ( LPSTR lpszData);

HRESULT extern WINAPI WFMReleaseDLL ( HPROVIDER hProvider);

HRESULT extern WINAPI WFMSetTimer ( HWND hWnd, LPVOID lpContext, DWORD dwTimeVal, LPWORD lpwTimerID);

#ifdef __cplusplus//@M002
}       /*extern "C" @M002*/
#endif//@M002

/*   restore alignment   */
#pragma pack(pop)

#endif    /* __INC_XFSADMIN__H */
