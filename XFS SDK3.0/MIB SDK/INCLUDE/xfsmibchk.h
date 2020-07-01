/************************************************************************
*                                                                       *
* xfsmibchk.h      WOSA/XFS - MIB CHK counters                          *
*                                                                       *
*               Version 1.00  --  Jan 20, 2004                          *
*                                                                       *
************************************************************************/

#ifndef __inc_xfsmibchk__h
#define __inc_xfsmibchk__h

#ifdef __cplusplus
extern "C" {
#endif

enum IxfsCHKMediaStatus
{
        xfsCHKMediaNotSupp        = 1,
        xfsCHKMediaNotPresent,
        xfsCHKMediaRequired,
        xfsCHKMediaPresent,
        xfsCHKMediaJammed,
        xfsCHKMediaEjected,
        xfsCHKMediaRetained,

} xfsCHKMediaStatus;


enum IxfsCHKInkStatus
{
        xfsCHKInkNotSupp          = 1,
        xfsCHKInkFull,
        xfsCHKInkLow,
        xfsCHKInkOut,

} xfsCHKInkStatus;


/************************************************************************
*                                                                       *
*       MIB Variables for the Status Table                              *
*                                                                       *
************************************************************************/
#define        xfsCHKStatusManagedServiceName      (1)
#define        xfsCHKStatusNumberSubDevices        (2)
#define        xfsCHKStatusDevice                  (3)
#define        xfsCHKStatusMedia                   (4)
#define        xfsCHKStatusInk                     (5)
#define        xfsCHKStatusExtraStatus             (100)


/************************************************************************
*                                                                       *
*       MIB Variables for the Error Table                               *
*                                                                       *
************************************************************************/
//Command codes and error codes correspond to the Service Provider definitions.

#ifdef __cplusplus
}       /*extern "C"*/
#endif

#endif  /* __inc_xfsmibchk__h */

