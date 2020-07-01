/************************************************************************
*                                                                       *
* xfsmibcim.h      WOSA/XFS - MIB CIM counters                          *
*                                                                       *
*                  Version 1.00  --  Dec 22, 2003                       *
*                                                                       *
************************************************************************/

#ifndef __inc_xfsmibcim__h
#define __inc_xfsmibcim__h

#ifdef __cplusplus
extern "C" {
#endif



/********************************************************************
*  CIM Status #defines 
********************************************************************/

enum IxfsCIMSafeDoorStatus
{
xfsCIMDoorNotSupported =2,
	xfsCIMDoorOpen,
	xfsCIMDoorClosed,
	xfsCIMDoorUnknown

} xfsCIMSafeDoorStatus;

enum IxfsCIMAcceptorStatus
{
	xfsCIMAccOK =1,
	xfsCIMAccCUState,
	xfsCIMAccCUStop,
	xfsCIMAccCUUnknown

}xfsCIMAcceptorStatus;  

enum IxfsCIMIntermediateStackerStatus
{
	xfsCIMISEmpty =1,
	xfsCIMISNotEmpty,
	xfsCIMISFull,
	xfsCIMISUnknown,
	xfsCIMISNotSupported

} xfsCIMIntermediateStackerStatus;  
				
enum IxfsCIMStackerItemsStatus
{
	xfsCIMCustomerAccess =1,
	xfsCIMNoCustomerAccess,
	xfsCIMAccessUnknown,
	xfsCIMNoItems = 5

} xfsCIMStackerItemsStatus; 

enum IxfsCIMBankNoteReaderStatus
{
	xfsCIMBNROK =1,
	xfsCIMBNRINOP,
	xfsCIMBNRUnknown,
	xfsCIMBNRNotSupported

} xfsCIMBankNoteReaderStatus; 

 

enum IxfsCIMShutterStatus
{
	xfsCIMShtClosed =1,
	xfsCIMShtOpen,
	xfsCIMShtJammed, 
    xfsCIMShtUnknown,
xfsCIMShtNotSupported

} xfsCIMShutterInputStatus;  

enum IxfsCIMPositionStatus
{
	xfsCIMPSEmpty =1,
	xfsCIMPSNotEmpty,
	xfsCIMPSUnknown,
	xfsCIMPSNotSupported

} xfsCIMPositionStatus;

enum IxfsCIMTransportStatus
{
	xfsCIMTPOK =1,
	xfsCIMTPInop,
    xfsCIMTPUnknown,
	xfsCIMTPNotSupported

} xfsCIMTransportStatus;  


enum IxfsCIMTransportItemsStatus
{
	xfsCIMTPStatEmpty =1,
	xfsCIMTPStatNotEmpty,
	xfsCIMTPStatNotEmptyCust,
	xfsCIMTPStatNotEmpty_unk,
	xfsCIMTPStatNotSupported

} xfsCIMTransportItemsInputStatus;  
  

  


/********************************************************************
*  CIM SubDevice #defines 
********************************************************************/

enum IxfsCIMCUType 
{
	xfsCIMTypeRecycling =2,
	xfsCIMTypecashIn,
	xfsCIMTypeRepContainer,
	xfsCIMTypeRetractCassette

}  xfsCIMCUtype;



enum IxfsCIMCUStatus
{
xfsCIMStatCUOK =1,
	xfsCIMStatCUFull,
	xfsCIMStatCUHigh,
	xfsCIMStatCUEmpty,
	xfsCIMStatCUInop,
	xfsCIMStatCUMissing,
	xfsCIMStatCUNoval,
	xfsCIMStatCUNoref,
	xfsCIMStatCUManip

} xfsCIMStatus;





/************************************************************************
*                                                                       *
*	MIB Variables for the Status Table                          *
*                                                                       *
************************************************************************/

#define xfsCIMStatusManagedServiceName			(1)
#define xfsCIMStatusNumberSubDevices   			(2)
#define xfsCIMStatusDevice             			(3)
#define xfsCIMStatusSafeDoor           			(4)
#define xfsCIMStatusAcceptor					(5)
#define xfsCIMStatusIntermediateStacker			(6)
#define xfsCIMStatusStackerItems				(7)
#define xfsCIMStatusBankNoteReader				(8)
#define xfsCIMStatusDropBox						(9)
#define xfsCIMStatusShutterInputCenter			(10)
#define xfsCIMStatusPositionInputCenter			(11)
#define xfsCIMStatusTransportInputCenter 		(12)
#define xfsCIMStatusTransportItemsInputCenter	(13)
#define xfsCIMStatusShutterInputLeft			(14)
#define xfsCIMStatusPositionInputLeft			(15)
#define xfsCIMStatusTransportInputLeft 			(16)
#define xfsCIMStatusTransportItemsInputLeft		(17)
#define xfsCIMStatusShutterInputRight			(18)
#define xfsCIMStatusPositionInputRight			(19)
#define xfsCIMStatusTransportInputRight 		(20)
#define xfsCIMStatusTransportItemsInputRight	(21)
#define xfsCIMStatusShutterInputTop				(22)
#define xfsCIMStatusPositionInputTop			(23)
#define xfsCIMStatusTransportInputTop 			(24)
#define xfsCIMStatusTransportItemsInputTop 		(25)
#define xfsCIMStatusShutterInputBottom			(26)
#define xfsCIMStatusPositionInputBottom			(27)
#define xfsCIMStatusTransportInputBottom 		(28)
#define xfsCIMStatusTransportItemsInputBottom	(29)
#define xfsCIMStatusShutterInputFront			(30)
#define xfsCIMStatusPositionInputFront			(31)
#define xfsCIMStatusTransportInputFront 		(32)
#define xfsCIMStatusTransportItemsInputFront	(33)
#define xfsCIMStatusShutterInputRear			(34)
#define xfsCIMStatusPositionInputRear			(35)
#define xfsCIMStatusTransportInputRear 			(36)
#define xfsCIMStatusTransportItemsInputRear 	(37)
#define xfsCIMStatusShutterOutputCenter			(38)
#define xfsCIMStatusPositionOutputCenter		(39)
#define xfsCIMStatusTransportOutputCenter 		(40)
#define xfsCIMStatusTransportItemsOutputCenter 	(41)
#define xfsCIMStatusShutterOutputLeft			(42)
#define xfsCIMStatusPositionOutputLeft			(43)
#define xfsCIMStatusTransportOutputLeft 		(44)
#define xfsCIMStatusTransportItemsOutputLeft 	(45)
#define xfsCIMStatusShutterOutputRight			(46)
#define xfsCIMStatusPositionOutputRight			(47)
#define xfsCIMStatusTransportOutputRight 		(48)
#define xfsCIMStatusTransportItemsOutputRight 	(49)
#define xfsCIMStatusShutterOutputTop			(50)
#define xfsCIMStatusPositionOutputTop			(51)
#define xfsCIMStatusTransportOutputTop 			(52)
#define xfsCIMStatusTransportItemsOutputTop 	(53)
#define xfsCIMStatusShutterOutputBottom			(54)
#define xfsCIMStatusPositionOutputBottom		(55)
#define xfsCIMStatusTransportOutputBottom 		(56)
#define xfsCIMStatusTransportItemsOutputBottom 	(57)
#define xfsCIMStatusShutterOutputFront			(58)
#define xfsCIMStatusPositionOutputFront			(59)
#define xfsCIMStatusTransportOutputFront 		(60)
#define xfsCIMStatusTransportItemsOutputFront 	(61)
#define xfsCIMStatusShutterOutputRear			(62)
#define xfsCIMStatusPositionOutputRear			(63)
#define xfsCIMStatusTransportOutputRear 		(64)
#define xfsCIMStatusTransportItemsOutputRear	(65)
#define xfsCIMStatusExtraStatus       			(100)   


/************************************************************************
*                                                                       *
*	MIB Variables for the SubDevice Table								*     
*																		*
*                                                                       *
************************************************************************/

#define xfsCIMSubDeviceManagedServiceName		(1)
#define xfsCIMSubDeviceIndex					(2) 
#define xfsCIMSubDeviceCUType					(3)
#define xfsCIMSubDeviceCUItemType				(4)
#define xfsCIMSubDeviceCULUnitID				(5)
#define xfsCIMSubDeviceCUCurrencyID				(6)
#define xfsCIMSubDeviceCUValues					(7)
#define xfsCIMSubDeviceCUCashInCount			(8)
#define xfsCIMSubDeviceCULCount 				(9)
#define xfsCIMSubDeviceCULMaximum				(10)
#define xfsCIMSubDeviceCULogicalStatus			(11)
#define xfsCIMSubDeviceCUApplock				(12)
#define xfsCIMSubDeviceCUPhysicalPositionName	(13)
#define xfsCIMSubDeviceCUPUnitID				(14)
#define xfsCIMSubDeviceCUPCashInCount			(15)
#define xfsCIMSubDeviceCUPCount					(16)
#define xfsCIMSubDeviceCUPMaximum				(17)
#define xfsCIMSubDeviceCUPhysicalStatus			(18)
#define xfsCIMSubDeviceCUPHardwareSensor		(19)


/************************************************************************
*                                                                       *
*	MIB Variables for the Error Table									*
*                                                                       *
************************************************************************/
/* Command codes and error codes correspond to the Service Provider definitions. */

#ifdef __cplusplus
}       /*extern "C"*/
#endif
#endif  /* __inc_xfsmibcim__h */




