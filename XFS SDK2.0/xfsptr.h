/******************************************************************************
*                                                                             *
* xfsptr.h    WOSA/XFS - Banking Printer (PTR) definitions                    *
*               (receipt, journal, passbook and document printer)             *
*                                                                             *
*               Version 2.05  --   9/ 6/98                                    *
* 002 pwn nexus Version 2.05  --   2/ 8/99 XFS98066 item 1 Borland extern     *
*               Version 2.07  --   5/ 5/99 no changes                         *
*    Copyright: CEN WS/XFS Core participants                                  *
*                                                                             *
******************************************************************************/

#ifndef __INC_XFSPTR__H
#define __INC_XFSPTR__H

#include <xfsapi.h>

/*   be aware of alignment   */
#pragma pack(push,1)

#ifdef __cplusplus//@M002
extern "C" {//@M002
#endif//@M002

/* value of WFSPTRCAPS.wClass */

#define    WFS_SERVICE_CLASS_PTR            (1)
#define    WFS_SERVICE_CLASS_VERSION_PTR    (0x0002) /* Version 2.00 */
#define    WFS_SERVICE_CLASS_NAME_PTR       "PTR"

#define    PTR_SERVICE_OFFSET               (WFS_SERVICE_CLASS_PTR * 100)


/* PTR Info Commands */

#define    WFS_INF_PTR_STATUS               (PTR_SERVICE_OFFSET + 1)
#define    WFS_INF_PTR_CAPABILITIES         (PTR_SERVICE_OFFSET + 2)
#define    WFS_INF_PTR_FORM_LIST            (PTR_SERVICE_OFFSET + 3)
#define    WFS_INF_PTR_MEDIA_LIST           (PTR_SERVICE_OFFSET + 4)
#define    WFS_INF_PTR_QUERY_FORM           (PTR_SERVICE_OFFSET + 5)
#define    WFS_INF_PTR_QUERY_MEDIA          (PTR_SERVICE_OFFSET + 6)
#define    WFS_INF_PTR_QUERY_FIELD          (PTR_SERVICE_OFFSET + 7)

/* PTR Execute Commands */

#define    WFS_CMD_PTR_CONTROL_MEDIA        (PTR_SERVICE_OFFSET + 1)
#define    WFS_CMD_PTR_PRINT_FORM           (PTR_SERVICE_OFFSET + 2)
#define    WFS_CMD_PTR_READ_FORM            (PTR_SERVICE_OFFSET + 3)
#define    WFS_CMD_PTR_RAW_DATA             (PTR_SERVICE_OFFSET + 4)
#define    WFS_CMD_PTR_MEDIA_EXTENTS        (PTR_SERVICE_OFFSET + 5)
#define    WFS_CMD_PTR_RESET_COUNT          (PTR_SERVICE_OFFSET + 6)
#define    WFS_CMD_PTR_READ_IMAGE           (PTR_SERVICE_OFFSET + 7)

/* PTR Messages */

#define    WFS_EXEE_PTR_NOMEDIA             (PTR_SERVICE_OFFSET + 1)
#define    WFS_EXEE_PTR_MEDIAINSERTED       (PTR_SERVICE_OFFSET + 2)
#define    WFS_EXEE_PTR_FIELDERROR          (PTR_SERVICE_OFFSET + 3)
#define    WFS_EXEE_PTR_FIELDWARNING        (PTR_SERVICE_OFFSET + 4)
#define    WFS_USRE_PTR_RETRACTBINTHRESHOLD (PTR_SERVICE_OFFSET + 5)
#define    WFS_SRVE_PTR_MEDIATAKEN          (PTR_SERVICE_OFFSET + 6)
#define    WFS_USRE_PTR_PAPERTHRESHOLD      (PTR_SERVICE_OFFSET + 7)
#define    WFS_USRE_PTR_TONERTHRESHOLD      (PTR_SERVICE_OFFSET + 8)
#define    WFS_SRVE_PTR_MEDIAINSERTED       (PTR_SERVICE_OFFSET + 9)


/* values of WFSPTRSTATUS.fwDevice */

#define    WFS_PTR_DEVONLINE                WFS_STAT_DEVONLINE
#define    WFS_PTR_DEVOFFLINE               WFS_STAT_DEVOFFLINE
#define    WFS_PTR_DEVPOWEROFF              WFS_STAT_DEVPOWEROFF
#define    WFS_PTR_DEVBUSY                  WFS_STAT_DEVBUSY
#define    WFS_PTR_DEVNODEVICE              WFS_STAT_DEVNODEVICE
#define    WFS_PTR_DEVHWERROR               WFS_STAT_DEVHWERROR
#define    WFS_PTR_DEVUSERERROR             WFS_STAT_DEVUSERERROR

/* values of WFSPTRSTATUS.fwMedia */

#define    WFS_PTR_MEDIAPRESENT             (0)
#define    WFS_PTR_MEDIANOTPRESENT          (1)
#define    WFS_PTR_MEDIAJAMMED              (2)
#define    WFS_PTR_MEDIANOTSUPP             (3)
#define    WFS_PTR_MEDIAUNKNOWN             (4)
#define    WFS_PTR_MEDIAENTERING            (5)

/* values of WFSPTRSTATUS.fwPaper */

#define    WFS_PTR_PAPERFULL                (0)
#define    WFS_PTR_PAPERLOW                 (1)
#define    WFS_PTR_PAPEROUT                 (2)
#define    WFS_PTR_PAPERNOTSUPP             (3)
#define    WFS_PTR_PAPERUNKNOWN             (4)

/* values of WFSPTRSTATUS.fwToner */

#define    WFS_PTR_TONERFULL                (0)
#define    WFS_PTR_TONERLOW                 (1)
#define    WFS_PTR_TONEROUT                 (2)
#define    WFS_PTR_TONERNOTSUPP             (3)
#define    WFS_PTR_TONERUNKNOWN             (4)

/* values of WFSPTRSTATUS.fwInk */

#define    WFS_PTR_INKFULL                  (0)
#define    WFS_PTR_INKLOW                   (1)
#define    WFS_PTR_INKOUT                   (2)
#define    WFS_PTR_INKNOTSUPP               (3)
#define    WFS_PTR_INKUNKNOWN               (4)

/* values of WFSPTRSTATUS.fwLamp */

#define    WFS_PTR_LAMPOK                   (0)
#define    WFS_PTR_LAMPFADING               (1)
#define    WFS_PTR_LAMPINOP                 (2)
#define    WFS_PTR_LAMPNOTSUPP              (3)
#define    WFS_PTR_LAMPUNKNOWN              (4)

/* values of WFSPTRSTATUS.fwRetractBin */

#define    WFS_PTR_RETRACTBINOK             (0)
#define    WFS_PTR_RETRACTBINFULL           (1)
#define    WFS_PTR_RETRACTNOTSUPP           (2)
#define    WFS_PTR_RETRACTUNKNOWN           (3)
#define    WFS_PTR_RETRACTBINHIGH           (4)

/* values of WFSPTRCAPS.fwType */

#define    WFS_PTR_TYPERECEIPT              0x0001
#define    WFS_PTR_TYPEPASSBOOK             0x0002
#define    WFS_PTR_TYPEJOURNAL              0x0004
#define    WFS_PTR_TYPEDOCUMENT             0x0008

/* values of WFSPTRCAPS.wResolution, WFSPTRPRINTFORM.wResolution */

#define    WFS_PTR_RESLOW                   0x0001
#define    WFS_PTR_RESMED                   0x0002
#define    WFS_PTR_RESHIGH                  0x0004
#define    WFS_PTR_RESVERYHIGH              0x0008

/* values of WFSPTRCAPS.fwReadForm */

#define    WFS_PTR_READOCR                  0x0001
#define    WFS_PTR_READMICR                 0x0002
#define    WFS_PTR_READMSF                  0x0004
#define    WFS_PTR_READBARCODE              0x0008
#define    WFS_PTR_READPAGEMARK             0x0010
#define    WFS_PTR_READIMAGE                0x0020

/* values of WFSPTRCAPS.fwWriteForm */

#define    WFS_PTR_WRITETEXT                0x0001
#define    WFS_PTR_WRITEGRAPHICS            0x0002
#define    WFS_PTR_WRITEOCR                 0x0004
#define    WFS_PTR_WRITEMICR                0x0008
#define    WFS_PTR_WRITEMSF                 0x0010
#define    WFS_PTR_WRITEBARCODE             0x0020
#define    WFS_PTR_WRITESTAMP               0x0040

/* values of WFSPTRCAPS.fwExtents */

#define    WFS_PTR_EXTHORIZONTAL            0x0001
#define    WFS_PTR_EXTVERTICAL              0x0002

/* values of WFSPTRCAPS.fwControl, dwMediaControl */

#define    WFS_PTR_CTRLEJECT                0x0001
#define    WFS_PTR_CTRLPERFORATE            0x0002
#define    WFS_PTR_CTRLCUT                  0x0004
#define    WFS_PTR_CTRLSKIP                 0x0008
#define    WFS_PTR_CTRLFLUSH                0x0010
#define    WFS_PTR_CTRLRETRACT              0x0020
#define    WFS_PTR_CTRLSTACK                0x0040
#define    WFS_PTR_CTRLPARTIALCUT           0x0080
#define    WFS_PTR_CTRLALARM                0x0100
#define    WFS_PTR_CTRLATPFORWARD           0x0200
#define    WFS_PTR_CTRLATPBACKWARD          0x0400
#define    WFS_PTR_CTRLTURNMEDIA            0x0800
#define    WFS_PTR_CTRLSTAMP                0x1000

/* values of WFSFRMHEADER.wBase, WFSFRMMEDIA.wBase, WFSPTRMEDIAUNIT.wBase */

#define    WFS_FRM_INCH                     (0)
#define    WFS_FRM_MM                       (1)
#define    WFS_FRM_ROWCOLUMN                (2)

/* values of WFSFRMHEADER.wAlignment */

#define    WFS_FRM_TOPLEFT                  (0)
#define    WFS_FRM_TOPRIGHT                 (1)
#define    WFS_FRM_BOTTOMLEFT               (2)
#define    WFS_FRM_BOTTOMRIGHT              (3)

/* values of WFSFRMHEADER.wOrientation */

#define    WFS_FRM_PORTRAIT                 (0)
#define    WFS_FRM_LANDSCAPE                (1)

/* values of WFSFRMMEDIA.fwMediaType */
#define    WFS_FRM_MEDIAGENERIC             (0)
#define    WFS_FRM_MEDIAPASSBOOK            (1)
#define    WFS_FRM_MEDIAMULTIPART           (2)

/* values of WFSFRMMEDIA.fwFoldType */
#define    WFS_FRM_FOLDNONE                 (0)
#define    WFS_FRM_FOLDHORIZONTAL           (1)
#define    WFS_FRM_FOLDVERTICAL             (2)

/* values of WFSFRMFIELD.fwType */

#define    WFS_FRM_FIELDTEXT                (0)
#define    WFS_FRM_FIELDMICR                (1)
#define    WFS_FRM_FIELDOCR                 (2)
#define    WFS_FRM_FIELDMSF                 (3)
#define    WFS_FRM_FIELDBARCODE             (4)
#define    WFS_FRM_FIELDGRAPHIC             (5)
#define    WFS_FRM_FIELDPAGEMARK            (6)

/* values of WFSFRMFIELD.fwClass */

#define    WFS_FRM_CLASSSTATIC              (0)
#define    WFS_FRM_CLASSOPTIONAL            (1)
#define    WFS_FRM_CLASSREQUIRED            (2)

/* values of WFSFRMFIELD.fwAccess */

#define    WFS_FRM_ACCESSREAD               0x0001
#define    WFS_FRM_ACCESSWRITE              0x0002

/* values of WFSFRMFIELD.fwOverflow */

#define    WFS_FRM_OVFTERMINATE             (0)
#define    WFS_FRM_OVFTRUNCATE              (1)
#define    WFS_FRM_OVFBESTFIT               (2)
#define    WFS_FRM_OVFOVERWRITE             (3)
#define    WFS_FRM_OVFWORDWRAP              (4)

/* values of WFSPTRFIELDFAIL.wFailure */

#define    WFS_PTR_FIELDREQUIRED            (0)
#define    WFS_PTR_FIELDSTATICOVWR          (1)
#define    WFS_PTR_FIELDOVERFLOW            (2)
#define    WFS_PTR_FIELDNOTFOUND            (3)
#define    WFS_PTR_FIELDNOTREAD             (4)
#define    WFS_PTR_FIELDNOTWRITE            (5)
#define    WFS_PTR_FIELDHWERROR             (6)
#define    WFS_PTR_FIELDTYPENOTSUPPORTED    (7)
#define    WFS_PTR_FIELDGRAPHIC             (8)

/* values of WFSPTRPRINTFORM.wAlignment */

#define    WFS_PTR_ALNUSEFORMDEFN           (0)
#define    WFS_PTR_ALNTOPLEFT               (1)
#define    WFS_PTR_ALNTOPRIGHT              (2)
#define    WFS_PTR_ALNBOTTOMLEFT            (3)
#define    WFS_PTR_ALNBOTTOMRIGHT           (4)

/* values of WFSPTRPRINTFORM.wOffsetX and WFSPTRPRINTFORM.wOffsetY */
#define    WFS_PTR_OFFSETUSEFORMDEFN        0xffff

/* values of WFSPTRRAWDATA.wInputData */

#define    WFS_PTR_NOINPUTDATA              (0)
#define    WFS_PTR_INPUTDATA                (1)

/* values of WFSPTRIMAGE.wImageType */

#define    WFS_PTR_IMAGETIF                 (1)
#define    WFS_PTR_IMAGEMTF                 (2)
#define    WFS_PTR_IMAGEBMP                 (3)


/* WOSA/XFS PTR Errors */ 

#define    WFS_ERR_PTR_FORMNOTFOUND         (-(PTR_SERVICE_OFFSET + 0))
#define    WFS_ERR_PTR_FIELDNOTFOUND        (-(PTR_SERVICE_OFFSET + 1))
#define    WFS_ERR_PTR_NOMEDIAPRESENT       (-(PTR_SERVICE_OFFSET + 2))
#define    WFS_ERR_PTR_READNOTSUPPORTED     (-(PTR_SERVICE_OFFSET + 3))
#define    WFS_ERR_PTR_FLUSHFAIL            (-(PTR_SERVICE_OFFSET + 4))
#define    WFS_ERR_PTR_MEDIAOVERFLOW        (-(PTR_SERVICE_OFFSET + 5))
#define    WFS_ERR_PTR_FIELDSPECFAILURE     (-(PTR_SERVICE_OFFSET + 6))
#define    WFS_ERR_PTR_FIELDERROR           (-(PTR_SERVICE_OFFSET + 7))
#define    WFS_ERR_PTR_MEDIANOTFOUND        (-(PTR_SERVICE_OFFSET + 8))
#define    WFS_ERR_PTR_EXTENTNOTSUPPORTED   (-(PTR_SERVICE_OFFSET + 9))
#define    WFS_ERR_PTR_MEDIAINVALID         (-(PTR_SERVICE_OFFSET + 10))
#define    WFS_ERR_PTR_FORMINVALID          (-(PTR_SERVICE_OFFSET + 11))
#define    WFS_ERR_PTR_FIELDINVALID         (-(PTR_SERVICE_OFFSET + 12))
#define    WFS_ERR_PTR_MEDIASKEWED          (-(PTR_SERVICE_OFFSET + 13))
#define    WFS_ERR_PTR_RETRACTBINFULL       (-(PTR_SERVICE_OFFSET + 14))
#define    WFS_ERR_PTR_STACKERFULL          (-(PTR_SERVICE_OFFSET + 15))
#define    WFS_ERR_PTR_PAGETURNFAIL         (-(PTR_SERVICE_OFFSET + 16))
#define    WFS_ERR_PTR_MEDIATURNFAIL        (-(PTR_SERVICE_OFFSET + 17))


/*=================================================================*/
/* PTR Info Command Structures and variables */
/*=================================================================*/

typedef struct _wfs_ptr_status        
{
    WORD            fwDevice;
    WORD            fwMedia;
    WORD            fwPaper;
    WORD            fwToner;
    WORD            fwInk;
    WORD            fwLamp;
    WORD            fwRetractBin;
    USHORT          usRetractCount;
    USHORT          usMediaOnStacker;
    LPSTR           lpszExtra;
} WFSPTRSTATUS, * LPWFSPTRSTATUS;

typedef struct _wfs_ptr_caps
{
    WORD            wClass;
    WORD            fwType;
    BOOL            bCompound;
    WORD            wResolution;
    WORD            fwReadForm;
    WORD            fwWriteForm;
    WORD            fwExtents;
    WORD            fwControl;
    USHORT          usMaxRetract;
    USHORT          usMaxMediaOnStacker;
    BOOL            bAcceptMedia;
    LPSTR           lpszExtra;
} WFSPTRCAPS, * LPWFSPTRCAPS;

typedef struct _wfs_frm_header
{
    LPSTR           lpszFormName;
    WORD            wBase;
    WORD            wUnitX;
    WORD            wUnitY;
    WORD            wWidth;
    WORD            wHeight;
    WORD            wAlignment;
    WORD            wOrientation;
    WORD            wOffsetX;
    WORD            wOffsetY;
    WORD            wVersionMajor;
    WORD            wVersionMinor;
    LPSTR           lpszUserPrompt;
    LPSTR           lpszFields;
} WFSFRMHEADER, * LPWFSFRMHEADER;

typedef struct _wfs_frm_media
{
    WORD            fwMediaType;
    WORD            wBase;
    WORD            wUnitX;
    WORD            wUnitY;
    WORD            wSizeWidth;
    WORD            wSizeHeight;
    WORD            wPageCount;
    WORD            wLineCount;
    WORD            wPrintAreaX;
    WORD            wPrintAreaY;
    WORD            wPrintAreaWidth;
    WORD            wPrintAreaHeight;
    WORD            wRestrictedAreaX;
    WORD            wRestrictedAreaY;
    WORD            wRestrictedAreaWidth;
    WORD            wRestrictedAreaHeight;
    WORD            wStagger;
    WORD            wFoldType;
} WFSFRMMEDIA, * LPWFSFRMMEDIA;

typedef struct _wfs_ptr_query_field
{
    LPSTR           lpszFormName;
    LPSTR           lpszFieldName;
} WFSPTRQUERYFIELD, * LPWFSPTRQUERYFIELD;

typedef struct _wfs_frm_field
{
    LPSTR           lpszFieldName;
    WORD            wIndexCount;
    WORD            fwType;
    WORD            fwClass;
    WORD            fwAccess;
    WORD            fwOverflow;
    LPSTR           lpszInitialValue;
    LPSTR           lpszFormat;
} WFSFRMFIELD, * LPWFSFRMFIELD;


/*=================================================================*/
/* PTR Execute Command Structures */
/*=================================================================*/

typedef struct _wfs_ptr_print_form
{
    LPSTR           lpszFormName; 
    LPSTR           lpszMediaName;
    WORD            wAlignment;
    WORD            wOffsetX;
    WORD            wOffsetY;
    WORD            wResolution;
    DWORD           dwMediaControl;
    LPSTR           lpszFields;
} WFSPTRPRINTFORM, * LPWFSPTRPRINTFORM;

typedef struct _wfs_ptr_read_form
{
    LPSTR           lpszFormName;
    LPSTR           lpszFieldNames;
    LPSTR           lpszMediaName;
    DWORD           dwMediaControl;
} WFSPTRREADFORM, * LPWFSPTRREADFORM;

typedef struct _wfs_ptr_raw_data
{
    WORD            wInputData;
    ULONG           ulSize;
    LPBYTE          lpbData;
} WFSPTRRAWDATA, * LPWFSPTRRAWDATA;

typedef struct _wfs_ptr_raw_data_in
{
    ULONG           ulSize;
    LPBYTE          lpbData;
} WFSPTRRAWDATAIN, * LPWFSPTRRAWDATAIN;

typedef struct _wfs_ptr_media_unit
{
    WORD            wBase;
    WORD            wUnitX;
    WORD            wUnitY;
} WFSPTRMEDIAUNIT, * LPWFSPTRMEDIAUNIT;

typedef struct _wfs_ptr_media_ext
{
    ULONG           ulSizeX;
    ULONG           ulSizeY;
} WFSPTRMEDIAEXT, * LPWFSPTRMEDIAEXT;

typedef struct _wfs_ptr_image
{
    WORD           wImageType;
    ULONG          ulSize;
    LPBYTE         lpImage;
} WFSPTRIMAGE, * LPWFSPTRIMAGE;

/*=================================================================*/
/* PTR Message Structures */
/*=================================================================*/

typedef struct _wfs_ptr_field_failure
{
    LPSTR           lpszFormName;
    LPSTR           lpszFieldName;
    WORD            wFailure;
} WFSPTRFIELDFAIL, * LPWFSPTRFIELDFAIL;

#ifdef __cplusplus//@M002
}       /*extern "C" @M002*/
#endif//@M002

/*   restore alignment   */
#pragma pack(pop)

#endif    /* __INC_XFSPTR__H */
