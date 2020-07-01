/************************************************************************
*                                                                       *
* xfsmibdep.h      WOSA/XFS - MIB DEP counters                          *
*                                                                       *
*                  Version 1.00  --  Jan 20, 2004                       *
*                                                                       *
************************************************************************/

#ifndef __inc_xfsmibdep__h
#define __inc_xfsmibdep__h

#ifdef __cplusplus
extern "C" {
#endif

enum IxfsDEPContainerStatus 
{
	xfsDEPContainerOK	=1,
    xfsDEPContainerHigh,
	xfsDEPContainerFull,
	xfsDEPContainerInOp, 
	xfsDEPContainerMissing,
	xfsDEPContainerUnknown,
	xfsDEPContainerNotSupported

} xfsDEPContainerStatus;         

enum IxfsDEPTransportStatus
{
	xfsDEPTransportOK			=1,
	xfsDEPTransportInOp			=4,
	xfsDEPTransportUnknown		=6,
	xfsDEPTransportNotSupported	=7

} xfsDEPTransportStatus;  

enum IxfsDEPEnvSupplyStatus
{
	xfsDEPEnvSupplyOK	=1,
	xfsDEPEnvSupplyLow,
	xfsDEPEnvSupplyEmpty,
	xfsDEPEnvSupplyIn0p, 
	xfsDEPEnvSupplyMissing,
	xfsDEPEnvSupplyUnknown,
	xfsDEPEnvSupplyNotSupported,
	xfsDEPEnvSupplyUnlocked

} xfsDEPEnvSupplyStatus;     

enum IxfsDEPEnvDispenserStatus 
{
	xfsDEPEnvDispenserOK			=1,
	xfsDEPEnvDispenserInOp			=4,
	xfsDEPEnvDispenserUnknown		=6,
	xfsDEPEnvDispenserNotSupported	=7

} xfsDEPEnvDispenserStatus;

enum IxfsDEPPrinterStatus
{
	xfsDEPPrinterOK			=1,
	xfsDEPPrinterInOp,
	xfsDEPPrinterUnknown,
	xfsDEPPrinterNotSupported

} xfsDEPPrinterStatus;

enum IxfsDEPTonerStatus
{
	xfsDEPTonerFull		=1,
	xfsDEPTonerLow, 
	xfsDEPTonerOut,
	xfsDEPTonerUnknown,
	xfsDEPTonerNotSupported

} xfsDEPTonerStatus; 
				
enum IxfsDEPShutterStatus
{
	xfsDEPShutterClosed		=1,
	xfsDEPShutterOpen,
	xfsDEPShutterJammed, 
	xfsDEPShutterUnknown,
	xfsDEPShutterNotSupported

} xfsDEPShutterStatus; 

/************************************************************************
*                                                                       *
*	MIB Variables for the Status Table                                  *
*                                                                       *
************************************************************************/
#define xfsDEPStatusManagedServiceName	(1)
#define xfsDEPStatusNumberSubDevices   	(2)
#define xfsDEPStatusDevice             	(3)
#define xfsDEPStatusContainer           (4)
#define xfsDEPStatusTransport   		(5) 
#define xfsDEPStatusEnvSupply   		(6)
#define xfsDEPStatusEnvDispenser   	    (7)
#define xfsDEPStatusPrinter   		    (8)
#define xfsDEPStatusToner              	(9) 
#define xfsDEPStatusShutter             (10)
#define xfsDEPStatusNumberOfDeposits   	(11)
#define xfsDEPStatusExtraStatus        	(100)

/************************************************************************
*                                                                       *
*	MIB Variables for the Error Table                                   *
*                                                                       *
************************************************************************/
//Command codes and error codes correspond to the Service Provider definitions.

#ifdef __cplusplus
}       /*extern "C"*/
#endif

#endif  /* __inc_xfsmibdep__h */