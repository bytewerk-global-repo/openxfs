/******************************************************************************
*                                                                             *
* xfscdm.h      WOSA/XFS - Cash Dispenser (CDM) definitions                   *
*                                                                             *
*               Version 2.05  --   9/ 6/98                                    *
* 002 pwn nexus Version 2.05  --   2/ 8/99 XFS98066 item 1 Borland extern     *
*               Version 2.07  --   5/ 5/99 no changes                         *
*    Copyright: CEN WS/XFS Core participants                                  *
*                                                                             *
******************************************************************************/
 
#ifndef __INC_XFSCDM__H
#define __INC_XFSCDM__H

#include <xfsapi.h>

/* be aware of alignment */
#pragma pack (push, 1)

#ifdef __cplusplus
extern "C" {
#endif

/* values of WFSCDMCAPS.wClass */

#define     WFS_SERVICE_CLASS_CDM               (3)
#define     WFS_SERVICE_CLASS_VERSION_CDM       0x0002
#define     WFS_SERVICE_CLASS_NAME_CDM          "CDM"

#define     CDM_SERVICE_OFFSET                  (WFS_SERVICE_CLASS_CDM * 100)

/* CDM Info Commands */

#define     WFS_INF_CDM_STATUS                  (CDM_SERVICE_OFFSET + 1)
#define     WFS_INF_CDM_CAPABILITIES            (CDM_SERVICE_OFFSET + 2)
#define     WFS_INF_CDM_CASH_UNIT_INFO          (CDM_SERVICE_OFFSET + 3)
#define     WFS_INF_CDM_TELLER_INFO             (CDM_SERVICE_OFFSET + 4)
#define     WFS_INF_CDM_TELLER_POSITIONS        (CDM_SERVICE_OFFSET + 5)
#define     WFS_INF_CDM_CURRENCY_EXP            (CDM_SERVICE_OFFSET + 6)
#define     WFS_INF_CDM_MIX_TYPES               (CDM_SERVICE_OFFSET + 7)
#define     WFS_INF_CDM_MIX_TABLE               (CDM_SERVICE_OFFSET + 8)
#define     WFS_INF_CDM_PRESENT_STATUS          (CDM_SERVICE_OFFSET + 9)

/* CDM Execute Commands */

#define     WFS_CMD_CDM_DENOMINATE              (CDM_SERVICE_OFFSET + 1)
#define     WFS_CMD_CDM_DISPENSE                (CDM_SERVICE_OFFSET + 2)
#define     WFS_CMD_CDM_PRESENT                 (CDM_SERVICE_OFFSET + 3)
#define     WFS_CMD_CDM_REJECT                  (CDM_SERVICE_OFFSET + 4)
#define     WFS_CMD_CDM_RETRACT                 (CDM_SERVICE_OFFSET + 5)
#define     WFS_CMD_CDM_CASH_IN                 (CDM_SERVICE_OFFSET + 6)
#define     WFS_CMD_CDM_OPEN_SHUTTER            (CDM_SERVICE_OFFSET + 7)
#define     WFS_CMD_CDM_CLOSE_SHUTTER           (CDM_SERVICE_OFFSET + 8)
#define     WFS_CMD_CDM_SET_TELLER_INFO         (CDM_SERVICE_OFFSET + 9)
#define     WFS_CMD_CDM_SET_CASH_UNIT_INFO      (CDM_SERVICE_OFFSET + 10)
#define     WFS_CMD_CDM_START_EXCHANGE          (CDM_SERVICE_OFFSET + 11)
#define     WFS_CMD_CDM_END_EXCHANGE            (CDM_SERVICE_OFFSET + 12)
#define     WFS_CMD_CDM_OPEN_SAFE_DOOR          (CDM_SERVICE_OFFSET + 13)
#define     WFS_CMD_CDM_CHECK_VANDALISM         (CDM_SERVICE_OFFSET + 14)
#define     WFS_CMD_CDM_CALIBRATE_CASH_UNIT     (CDM_SERVICE_OFFSET + 15)
#define     WFS_CMD_CDM_SET_TELLER_POSITIONS    (CDM_SERVICE_OFFSET + 16)
#define     WFS_CMD_CDM_CASH_IN_START           (CDM_SERVICE_OFFSET + 17)
#define     WFS_CMD_CDM_CASH_IN_END             (CDM_SERVICE_OFFSET + 18)
#define     WFS_CMD_CDM_CASH_IN_ROLLBACK        (CDM_SERVICE_OFFSET + 19)
#define     WFS_CMD_CDM_SET_MIXTABLE            (CDM_SERVICE_OFFSET + 20)

/* CDM Messages */

#define     WFS_SRVE_CDM_SAFEDOOROPEN           (CDM_SERVICE_OFFSET + 1)
#define     WFS_SRVE_CDM_SAFEDOORCLOSED         (CDM_SERVICE_OFFSET + 2)
#define     WFS_USRE_CDM_CASHUNITTHRESHOLD      (CDM_SERVICE_OFFSET + 3)
#define     WFS_SRVE_CDM_CASHUNITINFOCHANGED    (CDM_SERVICE_OFFSET + 4)
#define     WFS_SRVE_CDM_TELLERINFOCHANGED      (CDM_SERVICE_OFFSET + 5)
#define     WFS_EXEE_CDM_DELAYEDDISPENSE        (CDM_SERVICE_OFFSET + 6)
#define     WFS_EXEE_CDM_STARTDISPENSE          (CDM_SERVICE_OFFSET + 7)
#define     WFS_EXEE_CDM_CASHUNITERROR          (CDM_SERVICE_OFFSET + 8)
#define     WFS_SRVE_CDM_BILLSTAKEN             (CDM_SERVICE_OFFSET + 9)
#define     WFS_EXEE_CDM_PARTIALDISPENSE        (CDM_SERVICE_OFFSET + 10)
#define     WFS_EXEE_CDM_SUBDISPENSEOK          (CDM_SERVICE_OFFSET + 11)
#define     WFS_EXEE_CDM_INPUTREFUSE            (CDM_SERVICE_OFFSET + 12)

/* values of WFSCDMSTATUS.fwDevice */
#define     WFS_CDM_DEVONLINE                   WFS_STAT_DEVONLINE
#define     WFS_CDM_DEVOFFLINE                  WFS_STAT_DEVOFFLINE
#define     WFS_CDM_DEVPOWEROFF                 WFS_STAT_DEVPOWEROFF
#define     WFS_CDM_DEVBUSY                     WFS_STAT_DEVBUSY
#define     WFS_CDM_DEVNODEVICE                 WFS_STAT_DEVNODEVICE
#define     WFS_CDM_DEVHWERROR                  WFS_STAT_DEVHWERROR
#define     WFS_CDM_DEVUSERERROR                WFS_STAT_DEVUSERERROR

/* values of WFSCDMSTATUS.fwSafeDoor */

#define     WFS_CDM_DOORNOTSUPPORTED            (1)
#define     WFS_CDM_DOOROPEN                    (2)
#define     WFS_CDM_DOORCLOSED                  (3)
#define     WFS_CDM_DOORLOCKED                  (4)
#define     WFS_CDM_DOORUNKNOWN                 (5)

/* values of WFSCDMSTATUS.fwDispenser */

#define     WFS_CDM_DISPOK                      (0)
#define     WFS_CDM_DISPCUSTATE                 (1)
#define     WFS_CDM_DISPCUSTOP                  (2)
#define     WFS_CDM_DISPCUUNKNOWN               (3)

/* values of WFSCDMSTATUS.fwShutter */

#define     WFS_CDM_SHTCLOSED                   (0)
#define     WFS_CDM_SHTOPEN                     (1)
#define     WFS_CDM_SHTJAMMED                   (2)
#define     WFS_CDM_SHTUNKNOWN                  (3)
#define     WFS_CDM_SHTNOTSUPPORTED             (4)

/* values of WFSCDMSTATUS.fwOutputPosition */

#define     WFS_CDM_CTEMPTY                     (0)
#define     WFS_CDM_CTNOTEMPTY                  (1)
#define     WFS_CDM_CTUNKNOWN                   (2)
#define     WFS_CDM_CTNOTSUPPORTED              (3)

/* values of WFSCDMSTATUS.fwTransport */

#define     WFS_CDM_TPOK                        (0)
#define     WFS_CDM_TPINOP                      (1)
#define     WFS_CDM_TPUNKNOWN                   (2)
#define     WFS_CDM_TPNOTSUPPORTED              (3)

/* values of WFSCDMSTATUS.fwIntermediateStacker */

#define     WFS_CDM_ISEMPTY                     (0)
#define     WFS_CDM_ISNOTEMPTY                  (1)
#define     WFS_CDM_ISUNKNOWN                   (2)
#define     WFS_CDM_ISNOTSUPPORTED              (3)

/* values of WFSCDMCAPS.fwType */

#define     WFS_CDM_TYPEATSAFE                  (1)
#define     WFS_CDM_TYPEATMACHINE               (2)

/* values of WFSCDMCASHUNIT.usType */

#define     WFS_CDM_TYPENA                      (1)
#define     WFS_CDM_TYPEREJECTCASSETTE          (2)
#define     WFS_CDM_TYPEBILLCASSETTE            (3)
#define     WFS_CDM_TYPECOINCYLINDER            (4)
#define     WFS_CDM_TYPECOINDISPENSER           (5)
#define     WFS_CDM_TYPERETRACTCASSETTE         (6)
#define     WFS_CDM_TYPECOUPON                  (7)
#define     WFS_CDM_TYPEDOCUMENT                (8)

/* values of WFSCDMCASHUNIT.usStatus */

#define     WFS_CDM_STATCUOK                    (0)
#define     WFS_CDM_STATCUFULL                  (1)
#define     WFS_CDM_STATCUHIGH                  (2)
#define     WFS_CDM_STATCULOW                   (3)
#define     WFS_CDM_STATCUEMPTY                 (4)
#define     WFS_CDM_STATCUMISSING               (5)
#define     WFS_CDM_STATCUINOP                  (6)
#define     WFS_CDM_STATCUNOVAL                 (7)
#define     WFS_CDM_STATCUNOREF                 (8)

/* values of WFSCDMMIXTYPE.usMixType */

#define     WFS_CDM_MIXALGORITHM                (1)
#define     WFS_CDM_MIXTABLE                    (2)

/* values of WFSCDMMIXTYPE.usMixNumber */

#define     WFS_CDM_INDIVIDUAL                  (0)

/* values of WFSCDMMIXTYPE.usSubType (predefined mix algorithms) */
#define     WFS_CDM_MIX_MINIMUM_NUMBER_OF_BILLS            (1)
#define     WFS_CDM_MIX_EQUAL_EMPTYING_OF_CASH_UNITS       (2)

/* values of WFSCDMPRESENTSTATUS.wPresentState */

#define     WFS_CDM_PRESENTED                   (1)
#define     WFS_CDM_NOTPRESENTED                (2)
#define     WFS_CDM_UNKNOWN                     (3)

/* values of WFSCDMDISPENSE.usPosition */
/* values of WFSCDMCAPS.fwOutputPositions */
/* values of WFSCDMOUTPOS.fwPosition */
/* values of WFSCDMTELLERPOS.usPosition */

#define     WFS_CDM_POSNULL                     (0x0000)
#define     WFS_CDM_POSLEFT                     (0x0001)
#define     WFS_CDM_POSRIGHT                    (0x0002)
#define     WFS_CDM_POSCENTER                   (0x0004)

/* values of lpusVandalism */

#define     WFS_CDM_NODEVMANIPULATION           (0)
#define     WFS_CDM_DEVMANIPULATION             (1)

/* values of WFSCDMCUERROR.wFailure */

#define     WFS_CDM_CASHUNITEMPTY               (1)
#define     WFS_CDM_CASHUNITLOCKED              (2)
#define     WFS_CDM_CASHUNITNOTCONF             (3)
#define     WFS_CDM_CASHUNITINVALID             (4)
#define     WFS_CDM_CASHUNITERROR               (5)
#define     WFS_CDM_CASHUNITFULL                (6)

/* values of lpusReason in WFS_EXEE_CDM_INPUTREFUSE */
#define     WFS_CDM_INVALIDBILL                 (7)

/* WOSA/XFS CDM Errors */ 

#define WFS_ERR_CDM_INVALIDCURRENCY     (-(CDM_SERVICE_OFFSET + 0))
#define WFS_ERR_CDM_INVALIDTELLERID     (-(CDM_SERVICE_OFFSET + 1))
#define WFS_ERR_CDM_CASHUNITERROR       (-(CDM_SERVICE_OFFSET + 2))
#define WFS_ERR_CDM_INVALIDDENOMINATION (-(CDM_SERVICE_OFFSET + 3))
#define WFS_ERR_CDM_INVALIDMIXNUMBER    (-(CDM_SERVICE_OFFSET + 4))
#define WFS_ERR_CDM_NOCURRENCYMIX       (-(CDM_SERVICE_OFFSET + 5))
#define WFS_ERR_CDM_NOTDISPENSABLE      (-(CDM_SERVICE_OFFSET + 6))
#define WFS_ERR_CDM_TOOMANYBILLS        (-(CDM_SERVICE_OFFSET + 7))
#define WFS_ERR_CDM_INVALIDPOSITION     (-(CDM_SERVICE_OFFSET + 8))
#define WFS_ERR_CDM_POSITIONLOCKED      (-(CDM_SERVICE_OFFSET + 9))
#define WFS_ERR_CDM_SAFEDOOROPEN        (-(CDM_SERVICE_OFFSET + 10))
#define WFS_ERR_CDM_INVALIDRETRACT      (-(CDM_SERVICE_OFFSET + 11))
#define WFS_ERR_CDM_SHUTTERNOTOPEN      (-(CDM_SERVICE_OFFSET + 12))
#define WFS_ERR_CDM_SHUTTEROPEN         (-(CDM_SERVICE_OFFSET + 13))
#define WFS_ERR_CDM_SHUTTERCLOSED       (-(CDM_SERVICE_OFFSET + 14))
#define WFS_ERR_CDM_INVALIDCASHUNIT     (-(CDM_SERVICE_OFFSET + 15))
#define WFS_ERR_CDM_NOBILLS             (-(CDM_SERVICE_OFFSET + 16))
#define WFS_ERR_CDM_EXCHANGEACTIVE      (-(CDM_SERVICE_OFFSET + 17))
#define WFS_ERR_CDM_NOEXCHANGEACTIVE    (-(CDM_SERVICE_OFFSET + 18))
#define WFS_ERR_CDM_SHUTTERNOTCLOSED    (-(CDM_SERVICE_OFFSET + 19))
#define WFS_ERR_CDM_PRERRORNOBILLS      (-(CDM_SERVICE_OFFSET + 20))
#define WFS_ERR_CDM_PRERRORBILLS        (-(CDM_SERVICE_OFFSET + 21))
#define WFS_ERR_CDM_PRERRORUNKNOWN      (-(CDM_SERVICE_OFFSET + 22))
#define WFS_ERR_CDM_BILLSTAKEN          (-(CDM_SERVICE_OFFSET + 23))
#define WFS_ERR_CDM_TOOMANYCOINS        (-(CDM_SERVICE_OFFSET + 24))
#define WFS_ERR_CDM_CASHINACTIVE        (-(CDM_SERVICE_OFFSET + 25))
#define WFS_ERR_CDM_NOCASHINSTARTED     (-(CDM_SERVICE_OFFSET + 26))
#define WFS_ERR_CDM_INVALIDMIXTABLE     (-(CDM_SERVICE_OFFSET + 27))


/*=================================================================*/
/* CDM Info Command Structures */
/*=================================================================*/

typedef struct _wfs_cdm_outpos
{
    WORD            fwPosition;
    WORD            fwShutter;
    WORD            fwOutputPosition;
    WORD            fwTransport;
} WFSCDMOUTPOS, * LPWFSCDMOUTPOS;

typedef struct _wfs_cdm_status
{
    WORD             fwDevice;
    WORD             fwSafeDoor;
    WORD             fwDispenser;
    WORD             fwIntermediateStacker;
    LPWFSCDMOUTPOS * lppOutputPositions;
    LPSTR            lpszExtra;
} WFSCDMSTATUS, * LPWFSCDMSTATUS;

typedef struct _wfs_cdm_caps
{
    WORD            wClass;
    WORD            fwType;
    WORD            wMaxBills;
    WORD            wMaxCoins;
    BOOL            bCompound;
    BOOL            bShutter;
    BOOL            bRetract;
    BOOL            bSafeDoor;
    BOOL            bCoins;
    BOOL            bCylinders;
    BOOL            bCashBox;
    BOOL            bCashIn;
    BOOL            bRefill;
    BOOL            bAutoDeposit;
    BOOL            bVandalCheck;
    BOOL            bIntermediateStacker;
    BOOL            bBillsTakenSensor;
    WORD            fwOutputPositions;
    LPSTR           lpszExtra;
} WFSCDMCAPS, * LPWFSCDMCAPS;

typedef struct _wfs_cdm_physicalcu
{
    LPSTR           lpPhysicalPositionName;
    CHAR            cUnitID[5];
    ULONG           ulCount;
    USHORT          usPStatus;
} WFSCDMPHCU, * LPWFSCDMPHCU;

typedef struct _wfs_cdm_cashunit
{
    USHORT          usNumber;
    USHORT          usType;
    CHAR            cUnitID[5];
    CHAR            cCurrencyID[3];
    ULONG           ulValues;
    ULONG           ulInitialCount;
    ULONG           ulCount;
    ULONG           ulMinimum;
    ULONG           ulMaximum;
    BOOL            bAppLock;
    BOOL            bDevLock;
    USHORT          usStatus;
    LPSTR           lpPhysicalPositionName;
    USHORT          usNumPhysicalCUs;
    LPWFSCDMPHCU   *lppPhysical;
} WFSCDMCASHUNIT, * LPWFSCDMCASHUNIT;

typedef struct _wfs_cdm_cu_info
{
    USHORT          usTellerID;
    USHORT          usCount;
    LPWFSCDMCASHUNIT *lppList;
} WFSCDMCUINFO, * LPWFSCDMCUINFO;

typedef struct _wfs_cdm_teller_info
{
    USHORT          usTellerID;
    CHAR            cCurrencyID[3];
} WFSCDMTELLERINFO, * LPWFSCDMTELLERINFO;

typedef struct _wfs_cdm_teller_totals
{
    USHORT          usTellerID;
    CHAR            cCurrencyID[3];
    ULONG           ulBills;
    ULONG           ulCoins;
    ULONG           ulCashIn;
    ULONG           ulCashBox;
} WFSCDMTELLERTOTALS, * LPWFSCDMTELLERTOTALS;

typedef struct _wfs_cdm_teller_pos
{
    USHORT          usTellerID;
    USHORT          usPosition;
} WFSCDMTELLERPOS, * LPWFSCDMTELLERPOS;

typedef struct _wfs_cdm_currency_exp
{
    CHAR            cCurrencyID[3];
    SHORT           sExponent;
} WFSCDMCURRENCYEXP, * LPWFSCDMCURRENCYEXP;

typedef struct _wfs_cdm_mix_type
{
    USHORT          usMixNumber;
    USHORT          usMixType;
    USHORT          usSubType;
    LPSTR           lpszName;
} WFSCDMMIXTYPE, * LPWFSCDMMIXTYPE;

typedef struct _wfs_cdm_mix_row
{
    ULONG           ulAmount;
    LPUSHORT        lpusMixture;
} WFSCDMMIXROW, * LPWFSCDMMIXROW;

typedef struct _wfs_cdm_mix_table
{
    USHORT          usMixNumber;
    LPSTR           lpszName;
    USHORT          usRows;
    USHORT          usCols;
    LPULONG         lpulMixHeader;
    LPWFSCDMMIXROW  *lppMixRows;
} WFSCDMMIXTABLE, * LPWFSCDMMIXTABLE;

typedef struct _wfs_cdm_denomination
{
    CHAR            cCurrencyID[3];
    ULONG           ulAmount;
    USHORT          usCount;
    LPULONG         lpulValues;
    ULONG           ulCashBox;
} WFSCDMDENOMINATION, * LPWFSCDMDENOMINATION;
                         
typedef struct _wfs_cdm_present_status
{
    LPWFSCDMDENOMINATION  lpDenomination;
    WORD                  wPresentState;
    LPSTR                 lpszExtra;
} WFSCDMPRESENTSTATUS, * LPWFSCDMPRESENTSTATUS;


/*=================================================================*/
/* CDM Execute Command Structures */
/*=================================================================*/

typedef struct _wfs_cdm_denominate
{
    USHORT                usTellerID;
    USHORT                usMixNumber;
    LPWFSCDMDENOMINATION  lpDenomination;
} WFSCDMDENOMINATE, * LPWFSCDMDENOMINATE;

typedef struct _wfs_cdm_dispense
{
    USHORT                usTellerID;
    USHORT                usMixNumber;
    USHORT                usPosition;
    BOOL                  bPresent;
    LPWFSCDMDENOMINATION  lpDenomination;
} WFSCDMDISPENSE, * LPWFSCDMDISPENSE;

typedef struct _wfs_cdm_cashin
{
    USHORT                usTellerID;
    LPWFSCDMDENOMINATION  lpDenomination;
} WFSCDMCASHIN, * LPWFSCDMCASHIN;

typedef struct _wfs_cdm_start_ex
{
    USHORT           usTellerID;
    USHORT           usCount;
    LPUSHORT         lpusCUNumList;
} WFSCDMSTARTEX, * LPWFSCDMSTARTEX;

typedef struct _wfs_cdm_calibrate
{
    USHORT        usNumber;
    USHORT        usNumOfBills;
} WFSCDMCALIBRATE, * LPWFSCDMCALIBRATE;

/*=================================================================*/
/* CDM Message Structures */
/*=================================================================*/

typedef struct _wfs_cdm_cu_error
{
    WORD              wFailure;
    LPWFSCDMCASHUNIT  lpCashUnit;
} WFSCDMCUERROR, * LPWFSCDMCUERROR;

#ifdef __cplusplus
}       /* extern "C" */
#endif

/* restore alignment */
#pragma pack (pop)

#endif  /* __INC_XFSCDM__H */
