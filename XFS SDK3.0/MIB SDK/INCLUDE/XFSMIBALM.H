/************************************************************************
*                                                                       *
* xfsmibalm.h      WOSA/XFS - MIB ALM counters                          *
*                                                                       *
*               Version 1.00  -- 20/01/2004                             *
*                                                                       *
************************************************************************/

#ifndef __inc_xfsmibalm__h
#define __inc_xfsmibalm__h

#ifdef __cplusplus
extern "C" {
#endif


/************************************************************************
*                                                                       *
*	MIB Variables for the Status Table                                  *
*                                                                       *
************************************************************************/
#define	xfsALMStatusManagedServiceName      (1)
#define xfsALMStatusNumberSubDevices        (2)
#define	xfsALMStatusDevice                  (3)
#define	xfsALMStatusAlarmSet                (4)
#define	xfsALMStatusExtraStatus             (100)


/************************************************************************
*                                                                       *
*	MIB Variables for the Error Table                                   *
*                                                                       *
************************************************************************/
//Command  codes and error codes correspond to the Service Provider definitions.

#ifdef __cplusplus
}       /*extern "C"*/
#endif

#endif  /* __inc_xfsmibalm__h */
