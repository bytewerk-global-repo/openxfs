/******************************************************************************
*                                                                             *
* xfsidc.h    WOSA/XFS - Identification card reader/writer (IDC) definitions  *
*                                                                             *
*               Version 2.05  --   9/ 6/98                                    *
* 002 pwn nexus Version 2.05  --   2/ 8/99 XFS98066 item 1 Borland extern     *
*               Version 2.07  --   5/ 5/99 no changes                         *
*    Copyright: CEN WS/XFS Core participants                                  *
*                                                                             *
******************************************************************************/
 
#ifndef __INC_XFSIDC__H
#define __INC_XFSIDC__H

#include <xfsapi.h>

/*   be aware of alignment   */
#pragma pack(push,1)

#ifdef __cplusplus//@M002
extern "C" {//@M002
#endif//@M002

/* values of WFSIDCCAPS.wClass */

#define     WFS_SERVICE_CLASS_IDC               (2)
#define     WFS_SERVICE_CLASS_NAME_IDC          "IDC"
#define     WFS_SERVICE_CLASS_VERSION_IDC       0x0002

#define     IDC_SERVICE_OFFSET                  (WFS_SERVICE_CLASS_IDC * 100)

/* IDC Info Commands */

#define     WFS_INF_IDC_STATUS                  (IDC_SERVICE_OFFSET + 1)
#define     WFS_INF_IDC_CAPABILITIES            (IDC_SERVICE_OFFSET + 2)
#define     WFS_INF_IDC_FORM_LIST               (IDC_SERVICE_OFFSET + 3)
#define     WFS_INF_IDC_QUERY_FORM              (IDC_SERVICE_OFFSET + 4)

/* IDC Execute Commands */

#define     WFS_CMD_IDC_READ_TRACK              (IDC_SERVICE_OFFSET + 1)
#define     WFS_CMD_IDC_WRITE_TRACK             (IDC_SERVICE_OFFSET + 2)
#define     WFS_CMD_IDC_EJECT_CARD              (IDC_SERVICE_OFFSET + 3)
#define     WFS_CMD_IDC_RETAIN_CARD             (IDC_SERVICE_OFFSET + 4)
#define     WFS_CMD_IDC_RESET_COUNT             (IDC_SERVICE_OFFSET + 5)
#define     WFS_CMD_IDC_SETKEY                  (IDC_SERVICE_OFFSET + 6)
#define     WFS_CMD_IDC_READ_RAW_DATA           (IDC_SERVICE_OFFSET + 7)
#define     WFS_CMD_IDC_WRITE_RAW_DATA          (IDC_SERVICE_OFFSET + 8)
#define     WFS_CMD_IDC_CHIP_IO                 (IDC_SERVICE_OFFSET + 9)

/* IDC Messages */

#define     WFS_EXEE_IDC_INVALIDTRACKDATA       (IDC_SERVICE_OFFSET + 1)
#define     WFS_EXEE_IDC_MEDIAINSERTED          (IDC_SERVICE_OFFSET + 3)
#define     WFS_SRVE_IDC_MEDIAREMOVED           (IDC_SERVICE_OFFSET + 4)
#define     WFS_SRVE_IDC_CARDACTION             (IDC_SERVICE_OFFSET + 5)
#define     WFS_USRE_IDC_RETAINBINTHRESHOLD     (IDC_SERVICE_OFFSET + 6)
#define     WFS_EXEE_IDC_INVALIDMEDIA           (IDC_SERVICE_OFFSET + 7)

/* values of WFSIDCSTATUS.fwDevice */
#define     WFS_IDC_DEVONLINE                   WFS_STAT_DEVONLINE
#define     WFS_IDC_DEVOFFLINE                  WFS_STAT_DEVOFFLINE
#define     WFS_IDC_DEVPOWEROFF                 WFS_STAT_DEVPOWEROFF
#define     WFS_IDC_DEVBUSY                     WFS_STAT_DEVBUSY
#define     WFS_IDC_DEVNODEVICE                 WFS_STAT_DEVNODEVICE
#define     WFS_IDC_DEVHWERROR                  WFS_STAT_DEVHWERROR
#define     WFS_IDC_DEVUSERERROR                WFS_STAT_DEVUSERERROR

/* values of WFSIDCSTATUS.fwMedia, WFSIDCRETAINCARD.fwPosition,  */
/* WFSIDCCARDACT.fwPosition  */

#define     WFS_IDC_MEDIAPRESENT                (1)
#define     WFS_IDC_MEDIANOTPRESENT             (2)
#define     WFS_IDC_MEDIAJAMMED                 (3)
#define     WFS_IDC_MEDIANOTSUPP                (4)
#define     WFS_IDC_MEDIAUNKNOWN                (5)
#define     WFS_IDC_MEDIAENTERING               (6)

/* values of WFSIDCSTATUS.fwRetainBin */

#define     WFS_IDC_RETAINBINOK                 (1)
#define     WFS_IDC_RETAINNOTSUPP               (2)
#define     WFS_IDC_RETAINBINFULL               (3)
#define     WFS_IDC_RETAINBINHIGH               (4)

/* values of WFSIDCSTATUS.fwSecurity */

#define     WFS_IDC_SECNOTSUPP                  (1)
#define     WFS_IDC_SECNOTREADY                 (2)
#define     WFS_IDC_SECOPEN                     (3)

/* values of WFSIDCCAPS.fwPowerOnOption, WFSIDCCAPS.fwPowerOffOption,  */

#define     WFS_IDC_NOACTION                    (1)
#define     WFS_IDC_EJECT                       (2)
#define     WFS_IDC_RETAIN                      (3)
#define     WFS_IDC_EJECTTHENRETAIN             (4)
#define     WFS_IDC_READPOSITION                (5)

/* values of WFSIDCCAPS.fwType */

#define     WFS_IDC_TYPEMOTOR                   (1)
#define     WFS_IDC_TYPESWIPE                   (2)
#define     WFS_IDC_TYPEDIP                     (3)
#define     WFS_IDC_TYPECONTACTLESS             (4)

/* values of WFSIDCCAPS.fwReadTracks, WFSIDCCAPS.fwWriteTracks,
             WFSIDCCARDDATA.wDataSource */

#define     WFS_IDC_NOTSUPP                     0x0000
#define     WFS_IDC_TRACK1                      0x0001
#define     WFS_IDC_TRACK2                      0x0002
#define     WFS_IDC_TRACK3                      0x0004

/* further values of WFSIDCCARDDATA.wDataSource */

#define     WFS_IDC_CHIP                        0x0008
#define     WFS_IDC_SECURITY                    0x0010

/* values of WFSIDCCAPS.fwChipProtocols */

#define     WFS_IDC_CHIPT0                      0x0001
#define     WFS_IDC_CHIPT1                      0x0002
#define     WFS_IDC_CHIPT2                      0x0004
#define     WFS_IDC_CHIPT3                      0x0008
#define     WFS_IDC_CHIPT4                      0x0010
#define     WFS_IDC_CHIPT5                      0x0020
#define     WFS_IDC_CHIPT6                      0x0040
#define     WFS_IDC_CHIPT7                      0x0080
#define     WFS_IDC_CHIPT8                      0x0100
#define     WFS_IDC_CHIPT9                      0x0200
#define     WFS_IDC_CHIPT10                     0x0400
#define     WFS_IDC_CHIPT11                     0x0800
#define     WFS_IDC_CHIPT12                     0x1000
#define     WFS_IDC_CHIPT13                     0x2000
#define     WFS_IDC_CHIPT14                     0x4000
#define     WFS_IDC_CHIPT15                     0x8000

/* values of WFSIDCCAPS.fwSecType */

#define     WFS_IDC_SECNOTSUPP                  (1)
#define     WFS_IDC_SECMMBOX                    (2)
#define     WFS_IDC_SECCIM86                    (3)


/* values of WFSIDCFORM.fwAction */

#define     WFS_IDC_ACTIONREAD                  (1)
#define     WFS_IDC_ACTIONWRITE                 (2)

/* values of WFSIDCTRACKEVENT.fwStatus, WFSIDCCARDDATA.wStatus */

#define     WFS_IDC_DATAOK                      (0)
#define     WFS_IDC_DATAMISSING                 (1)
#define     WFS_IDC_DATAINVALID                 (2)
#define     WFS_IDC_DATATOOLONG                 (3)
#define     WFS_IDC_DATATOOSHORT                (4)
#define     WFS_IDC_DATASRCNOTSUPP              (5)
#define     WFS_IDC_DATASRCMISSING              (6)

/* values WFSIDCCARDACT.wAction */

#define     WFS_IDC_CARDRETAINED                (1)
#define     WFS_IDC_CARDEJECTED                 (2)
#define     WFS_IDC_CARDREADPOSITION            (3)

/* WOSA/XFS IDC Errors */ 

#define WFS_ERR_IDC_MEDIAJAM                    (-(IDC_SERVICE_OFFSET + 0))
#define WFS_ERR_IDC_NOMEDIA                     (-(IDC_SERVICE_OFFSET + 1))
#define WFS_ERR_IDC_MEDIARETAINED               (-(IDC_SERVICE_OFFSET + 2))
#define WFS_ERR_IDC_RETAINBINFULL               (-(IDC_SERVICE_OFFSET + 3))
#define WFS_ERR_IDC_INVALIDDATA                 (-(IDC_SERVICE_OFFSET + 4))
#define WFS_ERR_IDC_INVALIDMEDIA                (-(IDC_SERVICE_OFFSET + 5))
#define WFS_ERR_IDC_FORMNOTFOUND                (-(IDC_SERVICE_OFFSET + 6))
#define WFS_ERR_IDC_FORMINVALID                 (-(IDC_SERVICE_OFFSET + 7))
#define WFS_ERR_IDC_DATASYNTAX                  (-(IDC_SERVICE_OFFSET + 8))
#define WFS_ERR_IDC_SHUTTERFAIL                 (-(IDC_SERVICE_OFFSET + 9))
#define WFS_ERR_IDC_SECURITYFAIL                (-(IDC_SERVICE_OFFSET + 10))
#define WFS_ERR_IDC_PROTOCOLNOTSUPP             (-(IDC_SERVICE_OFFSET + 11))
#define WFS_ERR_IDC_ATRNOTOBTAINED              (-(IDC_SERVICE_OFFSET + 12))


/*=================================================================*/
/* IDC Info Command Structures and variables */
/*=================================================================*/

typedef struct _wfs_idc_status
{
    WORD            fwDevice;
    WORD            fwMedia;
    WORD            fwRetainBin;
    WORD            fwSecurity;
    USHORT          usCards;
    LPSTR           lpszExtra;
} WFSIDCSTATUS, * LPWFSIDCSTATUS;


typedef struct _wfs_idc_caps
{
    WORD            wClass;
    WORD            fwType;
    BOOL            bCompound;
    WORD            fwReadTracks;
    WORD            fwWriteTracks;
    WORD            fwChipProtocols;
    USHORT          usCards;
    WORD            fwSecType;
    WORD            fwPowerOnOption;
    WORD            fwPowerOffOption;
    LPSTR           lpszExtra;
} WFSIDCCAPS, * LPWFSIDCCAPS;

typedef struct _wfs_idc_form
{
    LPSTR           lpszFormName;
    CHAR            cFieldSeparatorTrack1;
    CHAR            cFieldSeparatorTrack2;
    CHAR            cFieldSeparatorTrack3;
    WORD            fwAction;
    LPSTR           lpszTracks;
    BOOL            bSecure;
    LPSTR           lpszTrack1Fields;
    LPSTR           lpszTrack2Fields;
    LPSTR           lpszTrack3Fields;
} WFSIDCFORM, * LPWFSIDCFORM;

/*=================================================================*/
/* IDC Execute Command Structures */
/*=================================================================*/

typedef struct _wfs_idc_write_track
{
    LPSTR           lpstrFormName;
    LPSTR           lpstrTrackData;
} WFSIDCWRITETRACK, * LPWFSIDCWRITETRACK;


typedef struct _wfs_idc_retain_card
{
    USHORT          usCount;
    WORD            fwPosition;
} WFSIDCRETAINCARD, * LPWFSIDCRETAINCARD;


typedef struct _wfs_idc_setkey
{
    USHORT          usKeyLen;
    LPBYTE          lpbKeyValue;
} WFSIDCSETKEY, * LPWFSIDCSETKEY;


typedef struct _wfs_idc_card_data
{
    WORD            wDataSource;
    WORD            wStatus;
    ULONG           ulDataLength;
    LPBYTE          lpbData;
} WFSIDCCARDDATA, * LPWFSIDCCARDDATA;

typedef struct _wfs_idc_chip_io
{
    WORD           wChipProtocol;
    ULONG          ulChipDataLength;
    LPBYTE         lpbChipData;
} WFSIDCCHIPIO, * LPWFSIDCCHIPIO;

/*=================================================================*/
/* IDC Message Structures */
/*=================================================================*/

typedef struct _wfs_idc_track_event
{
    WORD            fwStatus;
    LPSTR           lpstrTrack;
    LPSTR           lpstrData;
} WFSIDCTRACKEVENT, * LPWFSIDCTRACKEVENT;

typedef struct _wfs_idc_card_act
{
    WORD            wAction;
    WORD            wPosition;
} WFSIDCCARDACT, * LPWFSIDCCARDACT;

#ifdef __cplusplus//@M002
}       /*extern "C" @M002*/
#endif//@M002

/*   restore alignment   */
#pragma pack(pop)

#endif  /* __INC_XFSIDC__H */
