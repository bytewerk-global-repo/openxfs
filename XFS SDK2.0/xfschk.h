/******************************************************************************
*                                                                             *
* xfschk.h      WOSA/XFS - Check reader/scanner (CHK) definitions             *
*                                                                             *
*               Version 2.05  --   9/ 6/98                                    *
* 002 pwn nexus Version 2.05  --   2/ 8/99 XFS98066 item 1 Borland extern     *
*               Version 2.07  --   5/ 5/99 no changes                         *
*    Copyright: CEN WS/XFS Core participants                                  *
*                                                                             *
******************************************************************************/

#ifndef __INC_XFSCHK__H
#define __INC_XFSCHK__H

#include <xfsapi.h>

/*   be aware of alignment   */
#pragma pack(push,1)

#ifdef __cplusplus//@M002
extern "C" {//@M002
#endif//@M002

/* value of _wfs_chk_caps.wClass */

#define		WFS_SERVICE_CLASS_CHK			(5)

#define		CHK_SERVICE_OFFSET			(WFS_SERVICE_CLASS_CHK * 100)

/* CHK Info Commands */

#define		WFS_INF_CHK_STATUS			(CHK_SERVICE_OFFSET + 1)
#define		WFS_INF_CHK_CAPABILITIES		(CHK_SERVICE_OFFSET + 2)
#define		WFS_INF_CHK_FORM_LIST			(CHK_SERVICE_OFFSET + 3)
#define		WFS_INF_CHK_QUERY_FORM			(CHK_SERVICE_OFFSET + 4)
#define		WFS_INF_CHK_QUERY_FIELD			(CHK_SERVICE_OFFSET + 5)

/* CHK Command Verbs */

#define 		WFS_CMD_CHK_READ_FORM 			(CHK_SERVICE_OFFSET + 1)
#define 		WFS_CMD_CHK_MULTICOMMAND		(CHK_SERVICE_OFFSET + 2)
#define		WFS_CMD_CHK_READ_IMAGE			(CHK_SERVICE_OFFSET + 3)
#define		WFS_CMD_CHK_MODE_SWITCH		 	(CHK_SERVICE_OFFSET + 4)

/* CHK Messages */

#define		WFS_EXEE_CHK_NOMEDIA			(CHK_SERVICE_OFFSET + 1)
#define		WFS_EXEE_CHK_MEDIAINSERTED		(CHK_SERVICE_OFFSET + 2)

/* values of _wfs_chk_status.fwDevice  */

#define		WFS_CHK_DEVONLINE				(0)
#define		WFS_CHK_DEVOFFLINE			(1)
#define		WFS_CHK_DEVPOWEROFF			(2)
#define		WFS_CHK_DEVNODEVICE			(3)

/* values of _wfs_chk_status.fwMedia */

#define		WFS_CHK_MEDIAPRESENT			(0)
#define		WFS_CHK_MEDIANOTPRESENT			(1)
#define		WFS_CHK_MEDIAREQUIRED			(2)
#define		WFS_CHK_MEDIAJAMMED			(3)

/* values of _wfs_chk_status.fwInk */

#define		WFS_CHK_INKFULL				(0)
#define		WFS_CHK_INKLOW				(1)
#define		WFS_CHK_INKOUT				(2)

/* values of _wfs_chk_status.dwMode, _wfs_in_mode_switch.dwMode */

#define		WFS_CHK_MODEMANUAL			(0)
#define		WFS_CHK_MODEAUTOFEED			(1)

/* values of _wfs_chk_status.fwLamp */

#define		WFS_CHK_LAMPOK				(0)
#define		WFS_CHK_LAMPFADING			(1)

/* values of _wfs_chk_caps.fwStamp, _wfs_chk_caps.wImageCapture */

#define		WFS_CHK_STAMPNONE				(1)
#define		WFS_CHK_STAMPFRONT			(2)
#define		WFS_CHK_STAMPREAR				(3)
#define		WFS_CHK_STAMPBOTH				(4)

/* values of _wfs_in_multicommand.dwOptions */

#define		WFS_CHK_OPTSTAMPFRONT			(1)
#define		WFS_CHK_OPTSTAMPBACK			(2)
#define		WFS_CHK_OPTENDORSEFRONT			(3)
#define		WFS_CHK_OPTENDORSEBACK			(4)
#define		WFS_CHK_OPTSORTONLY			(5)
#define		WFS_CHK_OPTTAKEIMAGE			(6)

/* WOSA/XFS CHK Errors */ 

#define	WFS_ERR_CHK_REQDFIELDMISSING			(-(CHK_SERVICE_OFFSET + 0))
#define	WFS_ERR_CHK_FORMNOTFOUND			(-(CHK_SERVICE_OFFSET + 1))
#define	WFS_ERR_CHK_INCOMPLETEREAD			(-(CHK_SERVICE_OFFSET + 2))
#define	WFS_ERR_CHK_FIELDNOTFOUND			(-(CHK_SERVICE_OFFSET + 3))
#define	WFS_ERR_CHK_EXTRAFIELD				(-(CHK_SERVICE_OFFSET + 4))
#define	WFS_ERR_CHK_FIXEDOVERWRITE			(-(CHK_SERVICE_OFFSET + 5))
#define	WFS_ERR_CHK_UNSUPPORTEDCAP			(-(CHK_SERVICE_OFFSET + 6))
#define	WFS_ERR_CHK_FIELDSPECFAILURE			(-(CHK_SERVICE_OFFSET + 7))
#define	WFS_ERR_CHK_INVALIDHDOC				(-(CHK_SERVICE_OFFSET + 8))
#define	WFS_ERR_CHK_IMAGENOTAVAIL			(-(CHK_SERVICE_OFFSET + 9))
#define	WFS_ERR_CHK_INVALIDCOMMAND			(-(CHK_SERVICE_OFFSET + 10))

/*=================================================================*/
/* CHK Info Command Structures */
/*=================================================================*/

typedef struct _wfs_chk_status
{
	WORD			fwDevice;
	WORD			fwMedia; 
	WORD			fwInk; 
	DWORD 		dwMode;
	WORD			fwLamp; 
	LPSTR			lpszExtra; 
} WFSCHKSTATUS, * LPWFSCHKSTATUS; 

typedef	struct	_wfs_chk_caps
{
	WORD			wClass;
	WORD			fwType;
	BOOL			bCompound;
	BOOL			fMICR;
	BOOL			fOCR;
	BOOL			fAutoFeed;
	BOOL			fEndorser;
	BOOL			fEncoder;
	WORD			fwStamp;
	WORD			wImageCapture;
	USHORT		nPockets;
	LPSTR			lpszFontNames;
	LPSTR			lpszEncodeNames;
	LPSTR			lpszExtra;
} WFSCHKCAPS, * LPWFSCHKCAPS;

typedef struct	_wfs_chk_query_field
{
	LPSTR			lpszFormName;
	LPSTR			lpszFieldName;
} WFSCHKQUERYFIELD, * LPWFSCHKQUERYFIELD;

/*=================================================================*/
/* CHK Execute Command Structures */
/*=================================================================*/

typedef struct _wfs_chk_in_read_form
{
	LPSTR			lpszFormName;
	LPSTR			lpszFieldNames;
	DWORD			dwOptions;
	LPSTR			lpszExtra;
} WFSCHKINREADFORM, * LPWFSCHKINREADFORM;

typedef struct _wfs_chk_out_read_form
{
	WORD			hDoc;
	LPSTR			lpszFields;
} WFSCHKOUTREADFORM, * LPWFSCHKOUTREADFORM;

typedef struct _wfs_in_multicommand
{
	WORD			hDoc;
	DWORD			dwOptions;
	BYTE			pocket;
	LPSTR			lpszEncodeFormName;
	LPSTR			lpszEncodeFields;
	LPSTR			lpszEndorserFormName;
	LPSTR			lpszEndorserFields;
	LPSTR			lpszExtra;
} WFSINMULTICOMMAND, * LPWFSINMULTICOMMAND;

typedef struct _wfs_in_read_image
{
	WORD			hDoc;
	DWORD			dwOptions;
	LPSTR			lpszExtra;
} WFSINREADIMAGE, * LPWFSINREADIMAGE;

typedef struct _wfs_out_read_image
{
	WORD			cbImage;
	LPSTR			lpImage;
} WFSOUTREADIMAGE, * LPWFSOUTREADIMAGE;

typedef struct _wfs_in_mode_switch
{
	WORD			dwMode;
} WFSINMODESWITCH, * LPWFSINMODESWITCH;

#ifdef __cplusplus//@M002
}       /*extern "C" @M002*/
#endif//@M002

/* restore alignment */
#pragma pack(pop)

#endif	/* __INC_XFSCHK__H */
