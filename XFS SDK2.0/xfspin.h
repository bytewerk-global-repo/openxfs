/****************************************************************************
*                                                                           *
*xfspin.h WOSA/XFS - Personal Identification Number Keypad (PIN) definitions*
*                                                                           *
*               Version 2.05  --   9/ 6/98                                  *
* 002 pwn nexus Version 2.05  --   2/ 8/99 XFS98066 item 1 Borland extern   *
*               Version 2.07  --   5/ 5/99 no changes                       *
*    Copyright: CEN WS/XFS Core participants                                *
*                                                                           *
****************************************************************************/

#ifndef __INC_XFSPIN__H
#define __INC_XFSPIN__H

#include <xfsapi.h>

/*   be aware of alignment   */
#pragma pack(push,1)

#ifdef __cplusplus//@M002
extern "C" {//@M002
#endif//@M002

/* values of WFSPINCAPS.wClass */

#define WFS_SERVICE_CLASS_PIN             (4)
#define WFS_SERVICE_CLASS_VERSION_PIN     (0x0002) /* Version 2.00 */
#define WFS_SERVICE_CLASS_NAME_PIN        "PIN"

#define PIN_SERVICE_OFFSET                (WFS_SERVICE_CLASS_PIN * 100)

/* PIN Info Commands */

#define WFS_INF_PIN_STATUS                (PIN_SERVICE_OFFSET + 1)
#define WFS_INF_PIN_CAPABILITIES          (PIN_SERVICE_OFFSET + 2)
#define WFS_INF_PIN_KEY_DETAIL            (PIN_SERVICE_OFFSET + 4)
#define WFS_INF_PIN_FUNCKEY_DETAIL        (PIN_SERVICE_OFFSET + 5)

/* PIN Command Verbs */

#define WFS_CMD_PIN_CRYPT                 (PIN_SERVICE_OFFSET + 1)
#define WFS_CMD_PIN_IMPORT_KEY            (PIN_SERVICE_OFFSET + 3)
#define WFS_CMD_PIN_GET_PIN               (PIN_SERVICE_OFFSET + 5)
#define WFS_CMD_PIN_GET_PINBLOCK          (PIN_SERVICE_OFFSET + 7)
#define WFS_CMD_PIN_GET_DATA              (PIN_SERVICE_OFFSET + 8)
#define WFS_CMD_PIN_INITIALIZATION        (PIN_SERVICE_OFFSET + 9)
#define WFS_CMD_PIN_LOCAL_DES             (PIN_SERVICE_OFFSET + 10)
#define WFS_CMD_PIN_LOCAL_EUROCHEQUE      (PIN_SERVICE_OFFSET + 11)
#define WFS_CMD_PIN_LOCAL_VISA            (PIN_SERVICE_OFFSET + 12)
#define WFS_CMD_PIN_CREATE_OFFSET         (PIN_SERVICE_OFFSET + 13)
#define WFS_CMD_PIN_DERIVE_KEY            (PIN_SERVICE_OFFSET + 14)
#define WFS_CMD_PIN_PRESENT_IDC           (PIN_SERVICE_OFFSET + 15)

/* PIN Messages */

#define WFS_EXEE_PIN_KEY                  (PIN_SERVICE_OFFSET + 1)
#define WFS_SRVE_PIN_INITIALIZED          (PIN_SERVICE_OFFSET + 2)
#define WFS_SRVE_PIN_ILLEGAL_KEY_ACCESS   (PIN_SERVICE_OFFSET + 3)

/* values of WFSPINSTATUS.fwDevice */

#define WFS_PIN_DEVONLINE                 WFS_STAT_DEVONLINE
#define WFS_PIN_DEVOFFLINE                WFS_STAT_DEVOFFLINE
#define WFS_PIN_DEVPOWEROFF               WFS_STAT_DEVPOWEROFF
#define WFS_PIN_DEVBUSY                   WFS_STAT_DEVBUSY
#define WFS_PIN_DEVNODEVICE               WFS_STAT_DEVNODEVICE
#define WFS_PIN_DEVHWERROR                WFS_STAT_DEVHWERROR
#define WFS_PIN_DEVUSERERROR              WFS_STAT_DEVUSERERROR

/* values of WFSPINSTATUS.fwEncStat */

#define WFS_PIN_ENCREADY                  (0)
#define WFS_PIN_ENCNOTREADY               (1)
#define WFS_PIN_ENCNOTINITIALIZED         (2)
#define WFS_PIN_ENCBUSY                   (3)
#define WFS_PIN_ENCUNDEFINED              (4)
#define WFS_PIN_ENCINITIALIZED            (5)

/* values of WFSPINCAPS.wType */

#define WFS_PIN_TYPEEPP                   (0x0001)
#define WFS_PIN_TYPEEDM                   (0x0002)

/* values of WFSPINCAPS.fwAlgorithms, WFSPINCRYPT.wAlgorithm */

#define WFS_PIN_CRYPTDESECB               (0x0001)
#define WFS_PIN_CRYPTDESCBC               (0x0002)
#define WFS_PIN_CRYPTDESCFB               (0x0004)
#define WFS_PIN_CRYPTRSA                  (0x0008)
#define WFS_PIN_CRYPTECMA                 (0x0010)
#define WFS_PIN_CRYPTDESMAC               (0x0020)
#define WFS_PIN_CRYPTTRIDESECB            (0x0040)
#define WFS_PIN_CRYPTTRIDESCBC            (0x0080)
#define WFS_PIN_CRYPTTRIDESCFB            (0x0100)
#define WFS_PIN_CRYPTTRIDESMAC            (0x0200)

/* values of WFSPINCAPS.fwPinFormats */

#define WFS_PIN_FORM3624                  (0x0001)
#define WFS_PIN_FORMANSI                  (0x0002)
#define WFS_PIN_FORMISO0                  (0x0004)
#define WFS_PIN_FORMISO1                  (0x0008)
#define WFS_PIN_FORMECI2                  (0x0010)
#define WFS_PIN_FORMECI3                  (0x0020)
#define WFS_PIN_FORMVISA                  WFS_PIN_FORMECI3
#define WFS_PIN_FORMDIEBOLD               (0x0080)
#define WFS_PIN_FORMDIEBOLDCO             (0x0100)

/* values of WFSPINCAPS.fwDerivationAlgorithms */

#define WFS_PIN_CHIP_ZKA                  (0x0001)

/* values of WFSPINCAPS.fwPresentationAlgorithms */

#define WFS_PIN_PRESENT_CLEAR             (0x0001)

/* values of WFSPINCAPS.fwDisplay */

#define WFS_PIN_DISPNONE                  (1)
#define WFS_PIN_DISPLEDTHROUGH            (2)
#define WFS_PIN_DISPDISPLAY               (3)

/* values of WFSPINCAPS.fwIDKey */

#define WFS_PIN_IDKEYINITIALIZATION       (0x0001)
#define WFS_PIN_IDKEYIMPORT               (0x0002)

/* values of WFSPINCAPS.fwValidationAlgorithms */

#define WFS_PIN_DES                       (0x0001)
#define WFS_PIN_EUROCHEQUE                (0x0002)
#define WFS_PIN_VISA                      (0x0004)
#define WFS_PIN_DES_OFFSET                (0x0008)

/* values of WFSPINKEYDETAIL.fwUse */

#define WFS_PIN_USECRYPT                  (0x0001)
#define WFS_PIN_USEFUNCTION               (0x0002)
#define WFS_PIN_USEMACING                 (0x0004)
#define WFS_PIN_USEKEYENCKEY              (0x0020)
#define WFS_PIN_USENODUPLICATE            (0x0040)
#define WFS_PIN_USESVENCKEY               (0x0080)

/* values of WFSPINFUNCKEYDETAIL.ulFuncMask */

#define WFS_PIN_FK_0                      (0x00000001)
#define WFS_PIN_FK_1                      (0x00000002)
#define WFS_PIN_FK_2                      (0x00000004)
#define WFS_PIN_FK_3                      (0x00000008)
#define WFS_PIN_FK_4                      (0x00000010)
#define WFS_PIN_FK_5                      (0x00000020)
#define WFS_PIN_FK_6                      (0x00000040)
#define WFS_PIN_FK_7                      (0x00000080)
#define WFS_PIN_FK_8                      (0x00000100)
#define WFS_PIN_FK_9                      (0x00000200)
#define WFS_PIN_FK_ENTER                  (0x00000400)
#define WFS_PIN_FK_CANCEL                 (0x00000800)
#define WFS_PIN_FK_CLEAR                  (0x00001000)
#define WFS_PIN_FK_BACKSPACE              (0x00002000)
#define WFS_PIN_FK_HELP                   (0x00004000)
#define WFS_PIN_FK_DECPOINT               (0x00008000)
#define WFS_PIN_FK_00                     (0x00010000)
#define WFS_PIN_FK_000                    (0x00020000)
#define WFS_PIN_FK_RES1                   (0x00040000)
#define WFS_PIN_FK_RES2                   (0x00080000)
#define WFS_PIN_FK_RES3                   (0x00100000)
#define WFS_PIN_FK_RES4                   (0x00200000)
#define WFS_PIN_FK_RES5                   (0x00400000)
#define WFS_PIN_FK_RES6                   (0x00800000)
#define WFS_PIN_FK_RES7                   (0x01000000)
#define WFS_PIN_FK_RES8                   (0x02000000)
#define WFS_PIN_FK_OEM1                   (0x04000000)
#define WFS_PIN_FK_OEM2                   (0x08000000)
#define WFS_PIN_FK_OEM3                   (0x10000000)
#define WFS_PIN_FK_OEM4                   (0x20000000)
#define WFS_PIN_FK_OEM5                   (0x40000000)
#define WFS_PIN_FK_OEM6                   (0x80000000)

/* values of WFSPINFUNCKEY.ulFDK */

#define WFS_PIN_FK_FDK01                  (0x00000001)
#define WFS_PIN_FK_FDK02                  (0x00000002)
#define WFS_PIN_FK_FDK03                  (0x00000004)
#define WFS_PIN_FK_FDK04                  (0x00000008)
#define WFS_PIN_FK_FDK05                  (0x00000010)
#define WFS_PIN_FK_FDK06                  (0x00000020)
#define WFS_PIN_FK_FDK07                  (0x00000040)
#define WFS_PIN_FK_FDK08                  (0x00000080)
#define WFS_PIN_FK_FDK09                  (0x00000100)
#define WFS_PIN_FK_FDK10                  (0x00000200)
#define WFS_PIN_FK_FDK11                  (0x00000400)
#define WFS_PIN_FK_FDK12                  (0x00000800)
#define WFS_PIN_FK_FDK13                  (0x00001000)
#define WFS_PIN_FK_FDK14                  (0x00002000)
#define WFS_PIN_FK_FDK15                  (0x00004000)
#define WFS_PIN_FK_FDK16                  (0x00008000)
#define WFS_PIN_FK_FDK17                  (0x00010000)
#define WFS_PIN_FK_FDK18                  (0x00020000)
#define WFS_PIN_FK_FDK19                  (0x00040000)
#define WFS_PIN_FK_FDK20                  (0x00080000)
#define WFS_PIN_FK_FDK21                  (0x00100000)
#define WFS_PIN_FK_FDK22                  (0x00200000)
#define WFS_PIN_FK_FDK23                  (0x00400000)
#define WFS_PIN_FK_FDK24                  (0x00800000)
#define WFS_PIN_FK_FDK25                  (0x01000000)
#define WFS_PIN_FK_FDK26                  (0x02000000)
#define WFS_PIN_FK_FDK27                  (0x04000000)
#define WFS_PIN_FK_FDK28                  (0x08000000)
#define WFS_PIN_FK_FDK29                  (0x10000000)
#define WFS_PIN_FK_FDK30                  (0x20000000)
#define WFS_PIN_FK_FDK31                  (0x40000000)
#define WFS_PIN_FK_FDK32                  (0x80000000)

/* values of WFSPINCRYPT.wMode */

#define WFS_PIN_MODEENCRYPT               (1)
#define WFS_PIN_MODEDECRYPT               (2)

/* values of WFSPINENTRY.wCompletion */

#define WFS_PIN_COMPAUTO                  (0)
#define WFS_PIN_COMPENTER                 (1)
#define WFS_PIN_COMPCANCEL                (2)
#define WFS_PIN_COMPCONTINUE              (6)
#define WFS_PIN_COMPCLEAR                 (7)
#define WFS_PIN_COMPBACKSPACE             (8)
#define WFS_PIN_COMPFDK                   (9)
#define WFS_PIN_COMPHELP                  (10)
#define WFS_PIN_COMPFK                    (11)


/* WOSA/XFS PIN Errors */ 

#define WFS_ERR_PIN_KEYNOTFOUND           (-(PIN_SERVICE_OFFSET + 0))
#define WFS_ERR_PIN_MODENOTSUPPORTED      (-(PIN_SERVICE_OFFSET + 1))
#define WFS_ERR_PIN_ACCESSDENIED          (-(PIN_SERVICE_OFFSET + 2))
#define WFS_ERR_PIN_INVALIDID             (-(PIN_SERVICE_OFFSET + 3))
#define WFS_ERR_PIN_DUPLICATEKEY          (-(PIN_SERVICE_OFFSET + 4))
#define WFS_ERR_PIN_KEYNOVALUE            (-(PIN_SERVICE_OFFSET + 6))
#define WFS_ERR_PIN_USEVIOLATION          (-(PIN_SERVICE_OFFSET + 7))
#define WFS_ERR_PIN_NOPIN                 (-(PIN_SERVICE_OFFSET + 8))
#define WFS_ERR_PIN_INVALIDKEYLENGTH      (-(PIN_SERVICE_OFFSET + 9))
#define WFS_ERR_PIN_KEYINVALID            (-(PIN_SERVICE_OFFSET + 10))
#define WFS_ERR_PIN_KEYNOTSUPPORTED       (-(PIN_SERVICE_OFFSET + 11))
#define WFS_ERR_PIN_NOACTIVEKEYS          (-(PIN_SERVICE_OFFSET + 12))
#define WFS_ERR_PIN_INVALIDKEY            (-(PIN_SERVICE_OFFSET + 13))
#define WFS_ERR_PIN_NOTERMINATEKEYS       (-(PIN_SERVICE_OFFSET + 14))
#define WFS_ERR_PIN_MINIMUMLENGTH         (-(PIN_SERVICE_OFFSET + 15))
#define WFS_ERR_PIN_PROTOCOLNOTSUPP       (-(PIN_SERVICE_OFFSET + 16))
#define WFS_ERR_PIN_INVALIDDATA           (-(PIN_SERVICE_OFFSET + 17))
#define WFS_ERR_PIN_NOTALLOWED            (-(PIN_SERVICE_OFFSET + 18))


/*=================================================================*/
/* PIN Info Command Structures and variables */
/*=================================================================*/

typedef struct _wfs_pin_status
{
    WORD                fwDevice;
    WORD                fwEncStat;
    LPSTR               lpszExtra;
} WFSPINSTATUS, * LPWFSPINSTATUS;

typedef struct _wfs_pin_caps
{
    WORD                wClass;
    WORD                fwType;
    BOOL                bCompound;
    USHORT              usKeyNum;
    WORD                fwAlgorithms;
    WORD                fwPinFormats;
    WORD                fwDerivationAlgorithms;
    WORD                fwPresentationAlgorithms;
    WORD                fwDisplay;
    BOOL                bIDConnect;
    WORD                fwIDKey;
    WORD                fwValidationAlgorithms;
    LPSTR               lpszExtra;
} WFSPINCAPS, * LPWFSPINCAPS;

typedef struct _wfs_pin_key_detail
{
    LPSTR               lpsKeyName;
    WORD                fwUse;
    BOOL                bLoaded;
} WFSPINKEYDETAIL, * LPWFSPINKEYDETAIL;

typedef struct _wfs_pin_fdk
{
    ULONG               ulFDK;
    USHORT              usXPosition;
    USHORT              usYPosition;
} WFSPINFDK, * LPWFSPINFDK;

typedef struct _wfs_pin_func_key_detail
{
    ULONG               ulFuncMask;
    USHORT              usNumberFDKs;
    LPWFSPINFDK       * lppFDKs;
} WFSPINFUNCKEYDETAIL, * LPWFSPINFUNCKEYDETAIL;

/*=================================================================*/
/* PIN Execute Command Structures */
/*=================================================================*/

typedef struct _wfs_hex_data
{
    USHORT              usLength;
    LPBYTE              lpbData;
} WFSXDATA, * LPWFSXDATA;

typedef struct _wfs_pin_crypt
{
    WORD                wMode;
    LPSTR               lpsKey;
    LPWFSXDATA          lpxKeyEncKey;
    WORD                wAlgorithm;
    LPSTR               lpsStartValueKey;
    LPWFSXDATA          lpxStartValue;
    BYTE                bPadding;
    BYTE                bCompression;
    LPWFSXDATA          lpxCryptData;
} WFSPINCRYPT, * LPWFSPINCRYPT;

typedef struct _wfs_pin_import
{
    LPSTR               lpsKey;
    LPSTR               lpsEncKey;
    LPWFSXDATA          lpxIdent;
    LPWFSXDATA          lpxValue;
    WORD                fwUse;
} WFSPINIMPORT, * LPWFSPINIMPORT;

typedef struct _wfs_pin_derive
{
    WORD                wDerivationAlgorithm;
    LPSTR               lpsKey;
    LPSTR               lpsKeyGenKey;
    LPSTR               lpsStartValueKey;
    LPWFSXDATA          lpxStartValue;
    BYTE                bPadding;
    LPWFSXDATA          lpxInputData;
    LPWFSXDATA          lpxIdent;
 } WFSPINDERIVE, * LPWFSPINDERIVE;

typedef struct _wfs_pin_getpin
{
    USHORT              usMinLen;
    USHORT              usMaxLen;
    BOOL                bAutoEnd;
    CHAR                cEcho;
    ULONG               ulActiveFDKs;
    ULONG               ulActiveKeys;
    ULONG               ulTerminateFDKs;
    ULONG               ulTerminateKeys;
} WFSPINGETPIN, * LPWFSPINGETPIN;

typedef struct _wfs_pin_entry
{
    USHORT              usDigits;
    WORD                wCompletion;
} WFSPINENTRY, * LPWFSPINENTRY;

typedef struct _wfs_pin_local_des
{
    LPSTR               lpsValidationData;
    LPSTR               lpsOffset;
    BYTE                bPadding;
    USHORT              usMaxPIN;
    USHORT              usValDigits;
    BOOL                bNoLeadingZero;
    LPSTR               lpsKey;
    LPWFSXDATA          lpxKeyEncKey;
    LPSTR               lpsDecTable;
} WFSPINLOCALDES, * LPWFSPINLOCALDES;

typedef struct _wfs_pin_create_offset
{
    LPSTR               lpsValidationData;
    BYTE                bPadding;
    USHORT              usMaxPIN;
    USHORT              usValDigits;
    LPSTR               lpsKey;
    LPWFSXDATA          lpxKeyEncKey;
    LPSTR               lpsDecTable;
} WFSPINCREATEOFFSET, * LPWFSPINCREATEOFFSET;

typedef struct _wfs_pin_local_eurocheque
{
    LPSTR               lpsEurochequeData;
    LPSTR               lpsPVV;
    WORD                wFirstEncDigits;
    WORD                wFirstEncOffset;
    WORD                wPVVDigits;
    WORD                wPVVOffset;
    LPSTR               lpsKey;
    LPWFSXDATA          lpxKeyEncKey;
    LPSTR               lpsDecTable;
} WFSPINLOCALEUROCHEQUE, * LPWFSPINLOCALEUROCHEQUE;

typedef struct _wfs_pin_local_visa
{
    LPSTR               lpsPAN;
    LPSTR               lpsPVV;
    WORD                wPVVDigits;
    LPSTR               lpsKey;
    LPWFSXDATA          lpxKeyEncKey;
} WFSPINLOCALVISA, * LPWFSPINLOCALVISA;

typedef struct _wfs_pin_presentidc
{
    WORD                wPresentAlgorithm;
    WORD                wChipProtocol;
    ULONG               ulChipDataLength;
    LPBYTE              lpbChipData;
    LPVOID              lpAlgorithmData;
} WFSPINPRESENTIDC, * LPWFSPINPRESENTIDC;

typedef struct _wfs_pin_present_result
{
    WORD                wChipProtocol;
    ULONG               ulChipDataLength;
    LPBYTE              lpbChipData;
} WFSPINPRESENTRESULT, * LPWFSPINPRESENTRESULT;

typedef struct _wfs_pin_presentclear
{
    ULONG               ulPINPointer;
    USHORT              usPINOffset;
} WFSPINPRESENTCLEAR, * LPWFSPINPRESENTCLEAR;

typedef struct _wfs_pin_block
{
    LPSTR               lpsCustomerData;
    LPSTR               lpsXORData;
    BYTE                bPadding;
    WORD                wFormat;
    LPSTR               lpsKey;
    LPSTR               lpsKeyEncKey;
} WFSPINBLOCK, * LPWFSPINBLOCK;

typedef struct _wfs_pin_getdata
{
    USHORT              usMaxLen;
    BOOL                bAutoEnd;
    ULONG               ulActiveFDKs;
    ULONG               ulActiveKeys;
    ULONG               ulTerminateFDKs;
    ULONG               ulTerminateKeys;
} WFSPINGETDATA, * LPWFSPINGETDATA;

typedef struct _wfs_pin_data
{
    LPSTR               lpsData;
    WORD                wCompletion;
} WFSPINDATA, * LPWFSPINDATA;

typedef struct _wfs_pin_init
{
    LPWFSXDATA          lpxIdent;
    LPWFSXDATA          lpxKey;
} WFSPININIT, * LPWFSPININIT;


/*=================================================================*/
/* PIN Message Structures */
/*=================================================================*/

typedef struct _wfs_pin_key
{
    WORD                wCompletion;
    ULONG               ulDigit;
} WFSPINKEY, * LPWFSPINKEY;

typedef struct _wfs_pin_access
    {
    LPSTR               lpsKeyName;
    LONG                lErrorCode;
    } WFSPINACCESS, * LPWFSPINACCESS;

#ifdef __cplusplus//@M002
}       /*extern "C" @M002*/
#endif//@M002

/* restore alignment */
#pragma pack(pop)

#endif    /* __INC_XFSPIN__H */
