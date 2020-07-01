/************************************************************************
*                                                                       *
* xfsmibttu.h      WOSA/XFS - MIB TTU counters                          *
*                                                                       *
*               Version 1.00  --  20/01/2004                            *
*                                                                       *
************************************************************************/

#ifndef __inc_xfsmibttu__h
#define __inc_xfsmibttu__h

#ifdef __cplusplus
extern "C" {
#endif


enum IxfsTTUKeyboardStatus
{
    xfsTTUKeyboardNotAvailable      = 1,
	xfsTTUKeyboardOn, 		
	xfsTTUKeyboardOff

} xfsTTUKeyboardStatus;

enum IxfsTTUKeyLockStatus
{
    xfsTTUKeyboardLockNotAvailable  = 1,
	xfsTTUKeyboardLockOn,
	xfsTTUKeyboardLockOff
	
} xfsTTUKeyLockStatus;

enum IxfsTTULedsStatus
{
	xfsTTULedNotAvailable           = 1,
	xfsTTULedOff,
	xfsTTULedSlowFlash,
	xfsTTULedMediumFlash            = 5,
    xfsTTULedQuickFlash             = 9,
    xfsTTULedContinuous             = 129

} xfsTTULedsStatus;


/************************************************************************
*                                                                       *
*	MIB Variables for the Status Table                                  *
*                                                                       *
************************************************************************/
#define	xfsTTUStatusManagedServiceName      (1)
#define xfsTTUStatusNumberSubDevices        (2)
#define	xfsTTUStatusDevice                  (3)
#define xfsTTUStatusKeyboard                (4)
#define xfsTTUStatusKeyLock                 (5)
#define xfsTTUStatusLed1                    (6)
#define xfsTTUStatusLed2                    (7)
#define xfsTTUStatusLed3                    (8)
#define xfsTTUStatusLed4                    (9)
#define xfsTTUStatusLed5                    (10)
#define xfsTTUStatusLed6                    (11)
#define xfsTTUStatusLed7                    (12)
#define xfsTTUStatusLed8                    (13)
#define xfsTTUStatusDisplaySizeX            (14)
#define xfsTTUStatusDisplaySizeY            (15)
#define	xfsTTUStatusExtraStatus             (100)


/************************************************************************
*                                                                       *
*	MIB Variables for the Error Table                                   *
*                                                                       *
************************************************************************/
//Command  codes and error codes correspond to the Service Provider definitions.


#ifdef __cplusplus
}       /*extern "C"*/
#endif

#endif  /* __inc_xfsmibttu__h */
