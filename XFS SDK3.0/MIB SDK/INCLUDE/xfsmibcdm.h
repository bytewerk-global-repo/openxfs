/************************************************************************
*                                                                       *
* xfsmibcdm.h      WOSA/XFS - MIB CDM counters                          *
*                                                                       *
*                  Version 1.00  --  Jan 20, 2004                       *
*                                                                       *
************************************************************************/

#ifndef __inc_xfsmibcdm__h
#define __inc_xfsmibcdm__h

#ifdef __cplusplus
extern "C" {
#endif

/********************************************************************
*  CDM Status #defines 
********************************************************************/
enum IxfsCDMSafeDoorStatus
{
	xfsCDMSafeDoorNotSupported	=2,
	xfsCDMSafeDoorOpen,
	xfsCDMSafeDoorClosed,
	xfsCDMSafeDoorUnknown		=6

} xfsCDMSafeDoorStatus;

enum IxfsCDMDispenserStatus
{
	xfsCDMDispenserOK	=1,
	xfsCDMDispenserCUState,
	xfsCDMDispenserCUStop,
	xfsCDMDispenserCUUnknown

} xfsCDMDispenserStatus;  

enum IxfsCDMIntermediateStackerStatus
{
	xfsCDMISEmpty		=1,
	xfsCDMISNotEmpty,
	xfsCDMISNotEmptyCust,
	xfsCDMISNotEmptyUnknown, 
	xfsCDMISUnknown,
	xfsCDMISNotSupported

} intermediateStackerStatus;  
				
enum IxfsCDMShutterStatus
{
	xfsCDMShtClosed	=1,
	xfsCDMShtOpen,
	xfsCDMShtJammed,
	xfsCDMShtUnknown,
	xfsCDMShtNotSupported

} xfsCDMShutterStatus; 

enum IxfsCDMOutputPositionStatus
{
	xfsCDMPSEmpty	=1,
	xfsCDMPSNotEmpty,
	xfsCDMPSUnknown,
	xfsCDMPSNotSupported

} xfsCDMOutputPositionStatus; 

enum IxfsCDMTransportStatus
{
	xfsCDMTPOK	=1,
	xfsCDMTPInop,
	xfsCDMTPUnknown,
	xfsCDMTPNotSupported

} xfsCDMTransportStatus;  

enum IxfsCDMTransportStateStatus
{
	xfsCDMTPStateEmpty	=1,
	xfsCDMTPStateNotEmpty,
	xfsCDMTPStateNotEmptyCust,
	xfsCDMTPStateNotEmptyUnknown,
	xfsCDMTPStateNotSupported

} xfsCDMTransportStateStatus;

/********************************************************************
*  CDM SubDevice #defines 
********************************************************************/
enum IxfsCDMCUType 
{
	xfsCDMTypeNA	=2,
	xfsCDMTypeRejectCassette,
	xfsCDMTypeBillCassette,
	xfsCDMTypeCoinCylinder,
	xfsCDMTypeCoinDispenser,
	xfsCDMTypeRetractCassette,
	xfsCDMTypeCoupon,
	xfsCDMTypeDocument,
	xfsCDMTypeRepContainer	=12,
	xfsCDMTypeRecycling		=13

}  xfsCDMCUType;

enum IxfsCDMCUStatus
{
	xfsCDMCUStatusOK	=1,
	xfsCDMCUStatusFull,
	xfsCDMCUStatusHigh,
	xfsCDMCUStatusLow,
	xfsCDMCUStatusEmpty,
	xfsCDMCUStatusInop,
	xfsCDMCUStatusMissing,
	xfsCDMCUStatusNoval,
	xfsCDMCUStatusNoref,
	xfsCDMCUStatusManip

} xfsCDMCUStatus;
	   
/************************************************************************
*                                                                       *
*	MIB Variables for the Status Table                                  *
*                                                                       *
************************************************************************/
#define xfsCDMStatusManagedServiceName 		(1)
#define xfsCDMStatusNumberSubDevices   		(2)
#define xfsCDMStatusDevice             		(3)
#define xfsCDMStatusSafeDoor           		(4)
#define xfsCDMStatusDispenser		   		(5) 
#define xfsCDMStatusIntermediateStacker		(6)

#define xfsCDMStatusShutterCenter 			(7)
#define xfsCDMStatusOutputPositionCenter	(8)
#define xfsCDMStatusTransportCenter 		(9)
#define xfsCDMStatusTransportStatusCenter	(10)

#define xfsCDMStatusShutterLeft 			(11)
#define xfsCDMStatusOutputPositionLeft 		(12)
#define xfsCDMStatusTransportLeft 			(13)
#define xfsCDMStatusTransportStatusLeft		(14)

#define xfsCDMStatusShutterRight 			(15)
#define xfsCDMStatusOutputPositionRight 	(16)
#define xfsCDMStatusTransportRight 			(17)
#define xfsCDMStatusTransportStatusRight	(18)

#define xfsCDMStatusShutterTop 				(19)
#define xfsCDMStatusOutputPositionTop 		(20)
#define xfsCDMStatusTransportTop 			(21)
#define xfsCDMStatusTransportStatusTop		(22)

#define xfsCDMStatusShutterBottom 			(23)
#define xfsCDMStatusOutputPositionBottom 	(24)
#define xfsCDMStatusTransportBottom			(25)
#define xfsCDMStatusTransportStatusBottom	(26)

#define xfsCDMStatusShutterFront 			(27)
#define xfsCDMStatusOutputPositionFront 	(28)
#define xfsCDMStatusTransportFront 			(29)
#define xfsCDMStatusTransportStatusFront	(30)

#define xfsCDMStatusShutterRear 			(31)
#define xfsCDMStatusOutputPositionRear 		(32)
#define xfsCDMStatusTransportRear			(33)
#define xfsCDMStatusTransportStatusRear		(34)

#define xfsCDMStatusExtraStatus       		(100) 

/************************************************************************
*                                                                       *
*	MIB Variables for the SubDevice Table                               *
*                                                                       *
************************************************************************/
#define xfsCDMSubDeviceManagedServiceName		(1)
#define xfsCDMSubDeviceIndex               		(2) 
#define xfsCDMSubDeviceCUType					(3)	
#define xfsCDMSubDeviceCUName 					(4)
#define xfsCDMSubDeviceCULUnitID				(5)
#define xfsCDMSubDeviceCUCurrencyID				(6)
#define xfsCDMSubDeviceCUValues					(7)
#define xfsCDMSubDeviceCULInitialCount			(8)
#define xfsCDMSubDeviceCULCount					(9) 
#define xfsCDMSubDeviceCULRejectCount			(10)
#define xfsCDMSubDeviceCUMinimum				(11)
#define xfsCDMSubDeviceCULMaximum				(12)  
#define xfsCDMSubDeviceCUAppLock    			(13)
#define xfsCDMSubDeviceCULogicalStatus			(14)
        
#define xfsCDMSubDeviceCUPhysicalPositionName	(15)	
#define xfsCDMSubDeviceCUPUnitID				(16)		
#define xfsCDMSubDeviceCUPInitialCount			(17)      
#define xfsCDMSubDeviceCUPCount					(18) 
#define xfsCDMSubDeviceCUPRejectCount			(19)
#define xfsCDMSubDeviceCUPMaximumCount			(20)  
#define xfsCDMSubDeviceCUPhysicalStatus			(21)
#define xfsCDMSubDeviceCUHardwareSensor			(22)

/************************************************************************
*                                                                       *
*	MIB Variables for the Error Table                                   *
*                                                                       *
************************************************************************/
//Command codes and error codes correspond to the Service Provider definitions.

#ifdef __cplusplus
}       /*extern "C"*/
#endif

#endif  /* __inc_xfsmibcdm__h */