/************************************************************************
*                                                                       *
* xfsmibsiu.h      WOSA/XFS - MIB SIU counters                          *
*                                                                       *
*                  Version 1.00  --  Jan 24, 2004                       *
*                                                                       *
************************************************************************/

#ifndef __inc_xfsmibsiu__h
#define __inc_xfsmibsiu__h

#ifdef __cplusplus
extern "C" {
#endif  


enum IxfsSIUOperatorSwitchStatus
{
	xfsSIUOperatorSwitchNotAvailable	=1,
	xfsSIUOperatorSwitchRun,
	xfsSIUOperatorSwitchMaintenance,
	xfsSIUOperatorSwitchSupervisor		=5

} xfsSIUOperatorSwitchStatus;

enum IxfsSIUSensorStatus
{
	xfsSIUSensorNotAvailable		=1,
	xfsSIUSensorOff,
	xfsSIUSensorOn

} xfsSIUSensorStatus;  

enum IxfsSIUProximityStatus
{
	xfsSIUProximityNotAvailable		=1,
	xfsSIUProximityPresent,
	xfsSIUProximityNotPresent

} xfsSIUProximityStatus; 

enum IxfsSIUAmbLightStatus
{
	xfsSIUAmbLightNotAvailable	=1,
	xfsSIUAmbLightVeryDark,
	xfsSIUAmbLightDark,
	xfsSIUAmbLightMediumLight	=5,
	xfsSIUAmbLightLight			=9,
	xfsSIUAmbLightVeryLight		=17

} xfsSIUAmblightStatus;

enum IxfsSIUEnhancedAudioStatus
{
	xfsSIUEnhancedAudioNotAvailable	=1,
	xfsSIUEnhancedAudioPresent,
	xfsSIUEnhancedAudioNotPresent

} xfsSIUEnhancedAudioStatus;

enum IxfsSIUDoorsStatus
{
	xfsSIUDoorsNotAvailable		=1,
	xfsSIUDoorsClosed,
	xfsSIUDoorsOpen,
	xfsSIUDoorsLocked			=5,
	xfsSIUDoorsBolted			=9

} xfsSIUDoorStatus;

enum IxfsSIUVandalShieldStatus
{
	xfsSIUVandalShieldNotAvailable	=1,
	xfsSIUVandalShieldClosed, 
	xfsSIUVandalShieldOpen,
	xfsSIUVandalShieldLocked		=5,
	xfsSIUVandalShieldService		=17,
	xfsSIUVandalShieldKeyboard		=33,
	xfsSIUVandalShieldAjar			=65,
	xfsSIUVandalShieldJammed		=129

}  xfsSIUVandalShieldStatus;

enum IxfsSIUOpenCloseIndicatorsStatus 
{
	xfsSIUOpenCloseIndicatorsNotAvailable	=1,
	xfsSIUOpenCloseIndicatorClosed,
	xfsSIUOpenCloseIndicatorOpen

} xfsSIUOpenCloseIndicatorStatus;

enum IxfsSIUIndicatorsStatus
{
	xfsSIUIndicatorsNotAvailable  =1,
	xfsSIUIndicatorOff,
	xfsSIUIndicatorOn

} xfsSIUIndicatorStatus;

enum IxfsSIUAuxiliaryStatus
{
	xfsSIUAuxiliaryNotAvailable		=1,
	xfsSIUAuxiliaryOff,
	xfsSIUAuxiliaryOn

} xfsSIUAuxiliaryStatus;								 

enum IxfsSIUEnhancedAudioControlAuxStatus
{
	xfsSIUEnhancedAudioControlAuxNotAvailable			=1,
	xfsSIUEnhancedAudioControlAuxPublicAudioManaual,
	xfsSIUEnhancedAudioControlAuxPublicAudioAuto,
	xfsSIUEnhancedAudioControlAuxPublicAudioSemiAuto	=5,
	xfsSIUEnhancedAudioControlAuxPrivateAudioManual		=9,
	xfsSIUEnhancedAudioControlAuxPrivateAudioAuto		=17,
	xfsSIUEnhancedAudioControlAuxPrivateAudioSemiAuto	=33

} xfsSIUEnhancedAudioControlAuxStatus;

enum IxfsSIUGuideLightsStatus
{
	xfsSIUGuideLightsNotAvailable		=1,
	xfsSIUGuideLightsOff,
	xfsSIUGuideLightsSlowFlash			=5, 
	xfsSIUGuideLightsMediumFlash		=9,
	xfsSIUGuideLightsQuickFlash			=17,
	xfsSIUGuideLightsContinuous			=33

} xfsSIUGuideLightStatus;

/************************************************************************
*                                                                       *
*	MIB Variables for the Status Table                                  *
*                                                                       *
************************************************************************/
#define xfsSIUStatusManagedServiceName			(1)
#define xfsSIUStatusNumberSubDevices   			(2)
#define xfsSIUStatusDevice             			(3)

#define xfsSIUStatusOperatorSwitchSensors   	(4)
#define xfsSIUStatusTamperSensors   			(5) 
#define xfsSIUStatusIntTamperSensors   			(6)
#define xfsSIUStatusSeismicSensors   	    	(7)
#define xfsSIUStatusHeatSensors  		    	(8)
#define xfsSIUStatusProximitySensors        	(9) 
#define xfsSIUStatusAmblightSensors         	(10)
#define xfsSIUStatusEnhancedAudioSensors		(11)

#define xfsSIUStatusCabinetDoors   				(12) 
#define xfsSIUStatusSafeDoors   				(13)
#define xfsSIUStatusVandalShieldDoors   		(14)

#define xfsSIUStatusOpenCloseIndicators   		(15)       
#define xfsSIUStatusFasciaLightIndicators   	(16)
#define xfsSIUStatusAudioIndicators   			(17)
#define xfsSIUStatusHeatingIndicators   		(18)

#define xfsSIUStatusVolumeAux   				(19)
#define xfsSIUStatusUPSAux   					(20)
#define xfsSIUStatusRemoteStatusMonitorAux		(21)
#define xfsSIUStatusAudibleAlarmAux   			(22)
#define xfsSIUStatusEnhancedAudioControlAux		(23)

#define xfsSIUStatusCardUnitGuideLights   		(24)
#define xfsSIUStatusPinpadGuideLights   		(25)
#define xfsSIUStatusNoteDispenserGuideLights   	(26)
#define xfsSIUStatusCoinDispenserGuideLights   	(27)
#define xfsSIUStatusReceiptPrinterGuideLights   (28)
#define xfsSIUStatusPassbookPrinterGuideLights	(29)
#define xfsSIUStatusEnvDepositoryGuideLights   	(30)
#define xfsSIUStatusChequeUnitGuideLights   	(31)
#define xfsSIUStatusBillAcceptorGuideLights   	(32)
#define xfsSIUStatusEnvDispenserGuideLights   	(33)
#define xfsSIUStatusDocumentPrinterGuideLights	(34)
#define xfsSIUStatusCoinAcceptorGuideLights   	(35)
#define xfsSIUStatusScannerGuideLights   		(36)
#define xfsSIUStatusSpare1GuideLights 			(37)
#define xfsSIUStatusSpare2GuideLights           (38)
#define xfsSIUStatusSpare3GuideLights			(39)

#define xfsSIUStatusExtraStatus        			(100)

/************************************************************************
*                                                                       *
*	MIB Variables for the Error Table                                   *
*                                                                       *
************************************************************************/
//Command codes and error codes correspond to the Service Provider definitions.

#ifdef __cplusplus
}       /*extern "C"*/
#endif

#endif  /* __inc_xfsmibsiu__h */