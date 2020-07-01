/************************************************************************
*                                                                       *
* xfsmibcam.h      WOSA/XFS - MIB CAM counters                          *
*                                                                       *
*                  Version 1.00  --  Jan 20, 2004                       *
*                                                                       *
************************************************************************/

#ifndef __inc_xfsmibcam__h
#define __inc_xfsmibcam__h

#ifdef __cplusplus
extern "C" {
#endif

enum IxfsCAMMediaStatus
{
	xfsCAMMediaOK		=1,
	xfsCAMMediaHigh,
	xfsCAMMediaFull,
	xfsCAMMediaUnknown,
	xfsCAMMediaNotSupported

} xfsCAMMediaStatus;

enum IxfsCAMCameraStatus 
{
	xfsCAMCameraNotSupported	=1,
	xfsCAMCameraOK,
	xfsCAMCameraInop,
	xfsCAMCameraUnknown

} xfsCAMCameraStatus;

/************************************************************************
*                                                                       *
*	MIB Variables for the Status Table                                  *
*                                                                       *
************************************************************************/
#define xfsCAMStatusManagedServiceName	(1)
#define xfsCAMStatusNumberSubDevices   	(2)
#define xfsCAMStatusDevice             	(3)
#define xfsCAMStatusMediaRoom          	(4)
#define xfsCAMStatusMediaPerson		   	(5)
#define xfsCAMStatusMediaExitSlot	    (6)
#define xfsCAMStatusCameraRoom          (7)
#define xfsCAMStatusCameraPerson		(8)
#define xfsCAMStatusCameraExitSlot	    (9)
#define xfsCAMStatusPicturesRoom       	(10)
#define xfsCAMStatusPicturesPerson		(11)
#define xfsCAMStatusPicturesExitSlot	(12)
#define xfsCAMStatusExtraStatus        	(100)


/************************************************************************
*                                                                       *
*	MIB Variables for the Error Table                                   *
*                                                                       *
************************************************************************/
//Command codes and error codes correspond to the Service Provider definitions.

#ifdef __cplusplus
}       /*extern "C"*/
#endif

#endif  /* __inc_xfsmibcam__h */