/************************************************************************
*                                                                       *
* xfsmibpin.h      WOSA/XFS - MIB PIN counters                          *
*                                                                       *
*               Version 1.00  --  Jan 20, 2004                          *
*                                                                       *
************************************************************************/

#ifndef __inc_xfsmibpin__h
#define __inc_xfsmibpin__h

#ifdef __cplusplus
extern "C" {
#endif

enum IxfsPINEncStatStatus
{
        xfsPINEncReady           = 2,
        xfsPINDevNotReady,
        xfsPINEncNotInitialised,
        xfsPINEncBusy,
        xfsPINEncUndefined,
        xfsPINEncInitialized,

} xfsPINEncStatStatus;

enum IxfsPINCertificateStateStatus
{
        xfsPINCertNotSupp        = 1,
        xfsPINCertPrimary        = 2,
        xfsPINCertSecondary      = 3,
        xfsPINCertNotReady       = 5,

} xfsPINCertificateStateStatus;



/************************************************************************
*                                                                       *
*       MIB Variables for the Status Table                              *
*                                                                       *
************************************************************************/
#define        xfsPINStatusManagedServiceName      (1)
#define        xfsPINStatusNumberSubDevices        (2)
#define        xfsPINStatusDevice                  (3)
#define        xfsPINStatusEncStat                 (4)
#define        xfsPINStatusCertificateState        (5)
#define        xfsPINStatusExtraStatus             (100)


/************************************************************************
*                                                                       *
*       MIB Variables for the Error Table                               *
*                                                                       *
************************************************************************/
//Command codes and error codes correspond to the Service Provider definitions.

#ifdef __cplusplus
}       /*extern "C"*/
#endif

#endif  /* __inc_xfsmibpin__h */

