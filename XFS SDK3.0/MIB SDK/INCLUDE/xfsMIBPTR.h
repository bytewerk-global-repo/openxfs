/************************************************************************
*                                                                       *
* xfsmibptr.h      WOSA/XFS - MIB PTR counters                          *
*                                                                       *
*                  Version 1.00  --  Jan 20, 2004                       *
*                                                                       *
************************************************************************/

#ifndef __inc_xfsmibptr__h
#define __inc_xfsmibptr__h

#ifdef __cplusplus
extern "C" {
#endif

enum IxfsPTRMediaStatus 
{
	xfsPTRMediaPresent 		= 1,
	xfsPTRMediaNotPresent,
	xfsPTRMediaJammed,
	xfsPTRMediaNotSupported,
	xfsPTRMediaUnknown,
	xfsPTRMediaEntering,
	xfsPTRMediaRetracted

} xfsPTRMediaStatus;

enum IxfsPTRPaperStatus 
{
	xfsPTRPaperFull			=1,
	xfsPTRPaperLow,
	xfsPTRPaperOut,
	xfsPTRPaperNotSupported,
	xfsPTRPaperUnknown,
	xfsPTRPaperJammed

} xfsPTRPaperStatus;

enum IxfsPTRParkPaperStatus 
{
	xfsPTRParkPaperFull			=1,
    xfsPTRParkPaperOut			=3,
	xfsPTRParkPaperNotSupported	=4,
	xfsPTRParkPaperUnknown		=5,
	xfsPTRParkPaperJammed		=6

} xfsPTRPaperParkStatus;

enum IxfsPTRTonerStatus
{
	xfsPTRTonerFull			=1,
    xfsPTRTonerLow,
	xfsPTRTonerOut,
	xfsPTRTonerNotSupported,
	xfsPTRTonerUnknown

} xfsPTRTonerStatus;
				
enum IxfsPTRInkStatus 
{
	xfsPTRInkFull			=1,
    xfsPTRInkrLow,
	xfsPTRInkOut,
	xfsPTRInkNotSupported,
	xfsPTRInkUnknown

} xfsPTRInkStatus;

enum IxfsPTRLampStatus
{
	xfsPTRLampOK			=1,
    xfsPTRLampFading,
	xfsPTRLampInOp,
	xfsPTRLampNotSupported,
	xfsPTRLampUnknown

} xfsPTRLampStatus;

enum IxfsPTRRetractBinStatus 
{
	xfsPTRRetractBinOK		=1,
    xfsPTRRetractBinFull,
	xfsPTRRetractBinNotSupported,
	xfsPTRRetractBinUnknown,
	xfsPTRRetractBinHigh

} xfsPTRRetractBinStatus;

/************************************************************************
*                                                                       *
*	MIB Variables for the Status Table                                  *
*                                                                       *
************************************************************************/
#define xfsPTRStatusManagedServiceName 		(1)
#define xfsPTRStatusNumberSubDevices   		(2)
#define xfsPTRStatusDevice             		(3)
#define xfsPTRStatusMedia              		(4)
#define xfsPTRStatusPaperSupplyUpper   		(5) 
#define xfsPTRStatusPaperSupplyLower   		(6)
#define xfsPTRStatusPaperSupplyExternal   	(7)
#define xfsPTRStatusPaperSupplyAux   		(8)
#define xfsPTRStatusPaperSupplyAux2   		(9)  
#define xfsPTRStatusPaperSupplyPark   		(10)
#define xfsPTRStatusToner              		(11)
#define xfsPTRStatusInk                		(12)
#define xfsPTRStatusLamp               		(13)
#define xfsPTRStatusMediaOnStacker     		(14)
#define xfsPTRStatusExtraStatus        		(100)

/************************************************************************
*                                                                       *
*	MIB Variables for the SubDevice Table                               *
*                                                                       *
************************************************************************/
#define xfsPTRSubDeviceManagedServiceName	(1)
#define xfsPTRSubDeviceIndex               	(2) 
#define xfsPTRSubDeviceRetractBin         	(3)
#define xfsPTRSubDeviceRetractCount			(4)

/************************************************************************
*                                                                       *
*	MIB Variables for the Error Table                                   *
*                                                                       *
************************************************************************/
//Command codes and error codes correspond to the Service Provider definitions.

#ifdef __cplusplus
}       /*extern "C"*/
#endif

#endif  /* __inc_xfsmibptr__h */