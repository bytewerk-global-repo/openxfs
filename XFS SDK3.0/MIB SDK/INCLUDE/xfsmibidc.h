/************************************************************************
*                                                                       *
* xfsmibidc.h      WOSA/XFS - MIB IDC counters                          *
*                                                                       *
*               Version 1.00  --  Jan 20, 2004                          *
*                                                                       *
************************************************************************/

#ifndef __inc_xfsmibidc__h
#define __inc_xfsmibidc__h

#ifdef __cplusplus
extern "C" {
#endif


enum IxfsIDCMediaStatus 
{
	xfsIDCMediaPresent 		= 2,
	xfsIDCMediaNotPresent,
	xfsIDCMediaJammed,
	xfsIDCMediaNotSupported,
	xfsIDCMediaUnknown,
	xfsIDCMediaEntering,
	xfsIDCMediaLatched

} xfsIDCMediaStatus;


enum IxfsIDCRetainBinStatus
{
	xfsIDCRetainBinOK 		= 2,
	xfsIDCRetainBinNotSupported,
	xfsIDCRetainBinFull,
	xfsIDCRetainBinHigh

} xfsIDCRetainBinStatus;

 
enum IxfsIDCSecurityStatus
{
	xfsIDCSecurityNotSupported 	= 2,
	xfsIDCSecurityNotReady,
	xfsIDCSecurityOpen

} xfsIDCSecurityStatus;


enum IxfsIDCChipPowerStatus
{
    	xfsIDCChipOnline 		= 1,
    	xfsIDCChipPoweredOff,
    	xfsIDCChipBusy,
    	xfsIDCChipNoDevice,
    	xfsIDCChipHwError,
    	xfsIDCChipNoCard,
    	xfsIDCChipNotSupported,
    	xfsIDCChipUnknown
} xfsIDCChipPowerStatus;


/************************************************************************
*                                                                       *
*	MIB Variables for the Status Table                                  *
*                                                                       *
************************************************************************/
#define	xfsIDCStatusManagedServiceName      (1)
#define	xfsIDCStatusNumberSubDevices	    (2)
#define	xfsIDCStatusDevice                  (3)
#define	xfsIDCStatusMedia                   (4)
#define	xfsIDCStatusRetainBin               (5)
#define	xfsIDCStatusSecurity                (6)
#define	xfsIDCStatusCardRetained            (7)
#define	xfsIDCStatusChipPower		        (8)
#define	xfsIDCStatusExtraStatus             (100)


/************************************************************************
*                                                                       *
*	MIB Variables for the Error Table                                   *
*                                                                       *
************************************************************************/
//Command  codes and error codes correspond to the Service Provider definitions.

#ifdef __cplusplus
}       /*extern "C"*/
#endif

#endif  /* __inc_xfsmibidc__h */

