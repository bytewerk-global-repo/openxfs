/************************************************************************
*                                                                       *
* xfsmibceu.h      WOSA/XFS - MIB CEU counters                          *
*                                                                       *
*               Version 1.00  --  20/01/2004                            *
*                                                                       *
************************************************************************/

#ifndef __inc_xfsmibceu__h
#define __inc_xfsmibceu__h

#ifdef __cplusplus
extern "C" {
#endif


enum IxfsCEUMediaStatus 
{
	xfsCEUMediaPresent 		= 2,
	xfsCEUMediaNotPresent,
	xfsCEUMediaJammed,
	xfsCEUMediaNotSupported,
	xfsCEUMediaUnknown,
	xfsCEUMediaEntering,
    xfsCEUMediaTopper,
    xfsCEUMediaInHopper,
    xfsCEUMediaOutHopper,
    xfsCEUMediaMsre,
    xfsCEUMediaRetained,
    xfsCEUMediaRemoved

} xfsCEUMediaStatus;


enum IxfsCEURetainBinStatus
{
	xfsCEURetainBinOK 		= 2,
	xfsCEURetainBinFull,
	xfsCEURetainBinHigh,
	xfsCEURetainBinNotSupported

} xfsCEURetainBinStatus;

enum IxfsCEUOutputBinStatus
{
	xfsCEUOutputBinOK 		= 2,
	xfsCEUOutputBinFull,
	xfsCEUOutputBinHigh,
	xfsCEUOutputBinNotSupported

} xfsCEUOutputBinStatus;

enum IxfsCEUInputBinStatus
{
	xfsCEUInputBinOK 		= 2,
	xfsCEUInputBinEmpty,
	xfsCEUInputBinLow,
	xfsCEUInputBinNotSupported

} xfsCEUInputBinStatus;



/************************************************************************
*                                                                       *
*	MIB Variables for the Status Table                                  *
*                                                                       *
************************************************************************/
#define	xfsCEUStatusManagedServiceName      (1)
#define xfsCEUStatusNumberSubDevices        (2)
#define	xfsCEUStatusDevice                  (3)
#define	xfsCEUStatusMedia                   (4)
#define	xfsCEUStatusRetainBin               (5)
#define xfsCEUStatusOutputBin               (6)
#define xfsCEUStatusInputBin                (7)
#define xfsCEUStatusTotalCards              (8)
#define xfsCEUStatusOutputCards             (9)
#define xfsCEUStatusRetainCards             (10)
#define	xfsCEUStatusExtraStatus             (100)


/************************************************************************
*                                                                       *
*	MIB Variables for the Error Table                                   *
*                                                                       *
************************************************************************/
//Command  codes and error codes correspond to the Service Provider definitions.

#ifdef __cplusplus
}       /*extern "C"*/
#endif

#endif  /* __inc_xfsmibceu__h */
