/******************************************************************************
*                                                                             *
* xfsttu.h      WOSA/XFS - definitions                                        *
*               for the Text Terminal Unit - services                         *
*                                                                             *
*               Version 2.05  --   9/ 6/98                                    *
* 002 pwn nexus Version 2.05  --   2/ 8/99 XFS98066 item 1 Borland extern     *
*               Version 2.07  --   5/ 5/99 no changes                         *
*    Copyright: CEN WS/XFS Core participants                                  *
*                                                                             *
******************************************************************************/
 
#ifndef __INC_XFSTTU__H
#define __INC_XFSTTU__H

#include <xfsapi.h>

/*   be aware of alignment   */
#pragma pack(push,1)

#ifdef __cplusplus//@M002
extern "C" {//@M002
#endif//@M002

/* values of WFSTTUCAPS.wClass */
#define     WFS_SERVICE_CLASS_TTU               (7)
#define     WFS_SERVICE_CLASS_NAME_TTU          "TTU"
#define     WFS_SERVICE_CLASS_VERSION_TTU       (0x0002)

#define     TTU_SERVICE_OFFSET                  (WFS_SERVICE_CLASS_TTU * 100)

/* TTU Info Commands */
#define     WFS_INF_TTU_STATUS                  (TTU_SERVICE_OFFSET + 1)
#define     WFS_INF_TTU_CAPABILITIES            (TTU_SERVICE_OFFSET + 2)
#define     WFS_INF_TTU_FORM_LIST               (TTU_SERVICE_OFFSET + 3)
#define     WFS_INF_TTU_QUERY_FORM              (TTU_SERVICE_OFFSET + 4)
#define     WFS_INF_TTU_QUERY_FIELD             (TTU_SERVICE_OFFSET + 5)

/* TTU Command Verbs */
#define     WFS_CMD_TTU_BEEP                    (TTU_SERVICE_OFFSET + 1)
#define     WFS_CMD_TTU_CLEARSCREEN             (TTU_SERVICE_OFFSET + 2)
#define     WFS_CMD_TTU_DISPLIGHT               (TTU_SERVICE_OFFSET + 3)
#define     WFS_CMD_TTU_SET_LED                 (TTU_SERVICE_OFFSET + 4)
#define     WFS_CMD_TTU_SET_RESOLUTION          (TTU_SERVICE_OFFSET + 5)
#define     WFS_CMD_TTU_DISPLAY_FORM            (TTU_SERVICE_OFFSET + 6)
#define     WFS_CMD_TTU_READ_FORM               (TTU_SERVICE_OFFSET + 7)
#define     WFS_CMD_TTU_WRITE                   (TTU_SERVICE_OFFSET + 8)
#define     WFS_CMD_TTU_READ                    (TTU_SERVICE_OFFSET + 9)


/* WOSA/XFS TTU Errors */ 

#define     WFS_ERR_TTU_FIELDERROR              (-(TTU_SERVICE_OFFSET + 1))
#define     WFS_ERR_TTU_FIELDINVALID            (-(TTU_SERVICE_OFFSET + 2))
#define     WFS_ERR_TTU_FIELDNOTFOUND           (-(TTU_SERVICE_OFFSET + 3))
#define     WFS_ERR_TTU_FIELDSPECFAILURE        (-(TTU_SERVICE_OFFSET + 4))
#define     WFS_ERR_TTU_FORMINVALID             (-(TTU_SERVICE_OFFSET + 5))
#define     WFS_ERR_TTU_FORMNOTFOUND            (-(TTU_SERVICE_OFFSET + 6))
#define     WFS_ERR_TTU_INVALIDLED              (-(TTU_SERVICE_OFFSET + 7))
#define     WFS_ERR_TTU_KEYCANCELED             (-(TTU_SERVICE_OFFSET + 8))
#define     WFS_ERR_TTU_MEDIAOVERFLOW           (-(TTU_SERVICE_OFFSET + 9))
#define     WFS_ERR_TTU_RESNOTSUPP              (-(TTU_SERVICE_OFFSET + 10))


/* Values of WFSTTUSTATUS.fwDevice */
#define     WFS_TTU_DEVONLINE                   WFS_STAT_DEVONLINE
#define     WFS_TTU_DEVOFFLINE                  WFS_STAT_DEVOFFLINE
#define     WFS_TTU_DEVPOWEROFF                 WFS_STAT_DEVPOWEROFF
#define     WFS_TTU_DEVBUSY                     WFS_STAT_DEVBUSY
#define     WFS_TTU_DEVNODEVICE                 WFS_STAT_DEVNODEVICE
#define     WFS_TTU_DEVHWERROR                  WFS_STAT_DEVHWERROR
#define     WFS_TTU_DEVUSERERROR                WFS_STAT_DEVUSERERROR

/* Values of WFSTTUSTATUS.wKeyboard */
#define     WFS_TTU_KBDNA                       (0)
#define     WFS_TTU_KBDON                       (1)
#define     WFS_TTU_KBDOFF                      (2)

/* Values of WFSTTUSTATUS.wKeyLock */
#define     WFS_TTU_KBDLOCKNA                   (0)
#define     WFS_TTU_KBDLOCKON                   (1)
#define     WFS_TTU_KBDLOCKOFF                  (2)

#define     WFS_TTU_LEDS_MAX                    (8)

/* Values of WFSTTUSTATUS.fwLEDs */
#define     WFS_TTU_LEDNA                       (0x0000)
#define     WFS_TTU_LEDOFF                      (0x0001)
#define     WFS_TTU_LEDON                       (0x0002)
#define     WFS_TTU_LEDSLOWFLASH                (0x0004)
#define     WFS_TTU_LEDMEDIUMFLASH              (0x0008)
#define     WFS_TTU_LEDQUICKFLASH               (0x0010)
#define     WFS_TTU_LEDCONTINUOUS               (0x0080)

/* Values of WFSTTUCAPS.fwType */
#define     WFS_TTU_FIXED                       (0x0001)
#define     WFS_TTU_REMOVABLE                   (0x0002)

/* Values of WFSTTUCAPS.fwKeys */
#define     WFS_TTU_KEYNUMERIC                  (0x0001)
#define     WFS_TTU_KEYHEXADECIMAL              (0x0002)
#define     WFS_TTU_KEYALPHANUMERIC             (0x0004)

/* Values of WFSTTUFRMFIELD.fwType */
#define     WFS_TTU_FIELDTEXT                   (0)
#define     WFS_TTU_FIELDINVISIBLE              (1)
#define     WFS_TTU_FIELDPASSWORD               (2)

/* Values of WFSTTUFRMFIELD.fwClass */
#define     WFS_TTU_CLASSOPTIONAL               (0)
#define     WFS_TTU_CLASSSTATIC                 (1)
#define     WFS_TTU_CLASSREQUIRED               (2)

/* Values of WFSTTUFRMFIELD.fwAccess */
#define     WFS_TTU_ACCESSREAD                  (0x0001)
#define     WFS_TTU_ACCESSWRITE                 (0x0002)

/* Values of WFSTTUFRMFIELD.fwOverflow */
#define     WFS_TTU_OVFTERMINATE                (0)
#define     WFS_TTU_OVFTRUNCATE                 (1)
#define     WFS_TTU_OVFOVERWRITE                (2)

/* Values of WFSTTUWRITE.fwMode */
#define     WFS_TTU_POSRELATIVE                 (0)
#define     WFS_TTU_POSABSOLUTE                 (1)

/* Values of WFSTTUWRITE.fwTextAttr */
#define     WFS_TTU_TEXTUNDERLINE               (0x0001)
#define     WFS_TTU_TEXTINVERTED                (0x0002)
#define     WFS_TTU_TEXTFLASH                   (0x0004)

/* Values of WFSTTUFRMREAD.fwEchoMode */
#define     WFS_TTU_ECHOTEXT                    (0)
#define     WFS_TTU_ECHOINVISIBLE               (1)
#define     WFS_TTU_ECHOPASSWORD                (2)

#define     WFS_TTU_BEEPOFF                     (0x0001)
#define     WFS_TTU_BEEPKEYPRESS                (0x0002)
#define     WFS_TTU_BEEPEXCLAMATION             (0x0004)
#define     WFS_TTU_BEEPWARNING                 (0x0008)
#define     WFS_TTU_BEEPERROR                   (0x0010)
#define     WFS_TTU_BEEPCRITICAL                (0x0020)
#define     WFS_TTU_BEEPCONTINUOUS              (0x0080)

/*=================================================================*/
/* TTU Info Command Structures and variables */
/*=================================================================*/

typedef struct _wfs_ttu_status
{
    WORD            fwDevice;
    WORD            wKeyboard;
    WORD            wKeylock;
    WORD            wLEDs[WFS_TTU_LEDS_MAX];
    WORD            wDisplaySizeX;
    WORD            wDisplaySizeY;
    LPSTR           lpszExtra;
} WFSTTUSTATUS, * LPWFSTTUSTATUS;

typedef struct _wfs_ttu_resolution
{
    WORD            wSizeX;
    WORD            wSizeY;
} WFSTTURESOLUTION, * LPWFSTTURESOLUTION;

typedef struct _wfs_ttu_caps
{
    WORD                  wClass;
    WORD                  fwType;
    LPWFSTTURESOLUTION *  lppResolutions;
    WORD                  wNumOfLEDs;
    BOOL                  bKeyLock;
    BOOL                  bDisplayLight;
    WORD                  fwKeys;
    BOOL                  bCursor;
    BOOL                  bForms;
    LPSTR                 lpszExtra;
} WFSTTUCAPS, * LPWFSTTUCAPS;

typedef struct _wfs_ttu_frm_header
{
    LPSTR           lpszFormName;
    WORD            wWidth;
    WORD            wHeight;
    WORD            wVersionMajor;
    WORD            wVersionMinor;
    LPSTR           lpszFields;
} WFSTTUFRMHEADER, * LPWFSTTUFRMHEADER;

typedef struct _wfs_ttu_query_field
{
    LPSTR           lpszFormName;
    LPSTR           lpszFieldName;
} WFSTTUQUERYFIELD, * LPWFSTTUQUERYFIELD;

typedef struct _wfs_ttu_frm_field
{
    LPSTR           lpszFieldName;
    WORD            fwType;
    WORD            fwClass;
    WORD            fwAccess;
    WORD            fwOverflow;
    LPSTR           lpszFormat;
} WFSTTUFRMFIELD, * LPWFSTTUFRMFIELD;

typedef struct _wfs_ttu_clear_screen
{
    WORD            wPositionX;
    WORD            wPositionY;
    WORD            wWidth;
    WORD            wHeight;
} WFSTTUCLEARSCREEN, * LPWFSTTUCLEARSCREEN;

typedef struct _wfs_ttu_disp_light
{
    BOOL            bMode;
} WFSTTUDISPLIGHT, * LPWFSTTUDISPLIGHT;

typedef struct _wfs_ttu_set_leds
{
    WORD            wLED;
    WORD            fwCommand;
} WFSTTUSETLEDS, * LPWFSTTUSETLEDS;

typedef struct _wfs_ttu_display_form
{
    LPSTR           lpszFormName;
    BOOL            bClearScreen;
    LPSTR           lpszFields;
} WFSTTUDISPLAYFORM, * LPWFSTTUDISPLAYFORM;

typedef struct _wfs_ttu_read_form
{
    LPSTR           lpszFormName;
    LPSTR           lpszFieldNames;
} WFSTTUREADFORM, * LPWFSTTUREADFORM;

typedef struct _wfs_ttu_write
{
    WORD            fwMode;
    WORD            wPosX;
    WORD            wPosY;
    WORD            fwTextAttr;
    LPSTR           lpsText;
} WFSTTUWRITE, * LPWFSTTUWRITE;

typedef struct _wfs_ttu_read
{
    WORD            wNumOfChars;
    WORD            fwMode;
    WORD            wPosX;
    WORD            wPosY;
    WORD            fwEchoMode;
    WORD            fwEchoAttr;
    WORD            wKeys;
    BOOL            bCursor;
    BOOL            bFlush;
    BOOL            bAutoEnd;
} WFSTTUREAD, * LPWFSTTUREAD;

#ifdef __cplusplus//@M002
}       /*extern "C"@M002*/
#endif//@M002

/* restore alignment */
#pragma pack(pop)

#endif  /* __INC_XFSTTU__H */
