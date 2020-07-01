/******************************************************************************
*                                                                             *
* xfscam.h      WOSA/XFS - Camera (CAM) definitions                           *
*                                                                             *
*               Version 2.05  --   9/ 6/98                                    *
* 002 pwn nexus Version 2.05  --   2/ 8/99 XFS98066 item 1 Borland extern     *
*               Version 2.07  --   5/ 5/99 no changes                         *
*    Copyright: CEN WS/XFS Core participants                                  *
*                                                                             *
******************************************************************************/
 
#ifndef __INC_XFSCAM__H
#define __INC_XFSCAM__H

#include    <xfsapi.h>

/* be aware of  alignment */
#pragma pack (push, 1)

#ifdef __cplusplus//@M002
extern "C" {//@M002
#endif//@M002

/* values of WFSCAMCAPS.wClass */

#define     WFS_SERVICE_CLASS_CAM               (10)
#define     WFS_SERVICE_VERSION_CAM             (0x0002) /* Version 2.00 */
#define     WFS_SERVICE_NAME_CAM                "CAM"

#define     CAM_SERVICE_OFFSET                  (WFS_SERVICE_CLASS_CAM * 100)

/* CAM Info Commands */

#define     WFS_INF_CAM_STATUS                  (CAM_SERVICE_OFFSET + 1)
#define     WFS_INF_CAM_CAPABILITIES            (CAM_SERVICE_OFFSET + 2)

/* CAM Execute Commands */

#define     WFS_CMD_CAM_TAKE_PICTURE            (CAM_SERVICE_OFFSET + 1)

/* CAM Messages */

#define     WFS_USRE_CAM_MEDIATHRESHOLD         (CAM_SERVICE_OFFSET + 1)
#define     WFS_EXEE_CAM_INVALIDDATA            (CAM_SERVICE_OFFSET + 2)

/* values of WFSCAMSTATUS.fwDevice */

#define     WFS_CAM_DEVONLINE                   WFS_STAT_DEVONLINE
#define     WFS_CAM_DEVOFFLINE                  WFS_STAT_DEVOFFLINE
#define     WFS_CAM_DEVPOWEROFF                 WFS_STAT_DEVPOWEROFF
#define     WFS_CAM_DEVBUSY                     WFS_STAT_DEVBUSY
#define     WFS_CAM_DEVNODEVICE                 WFS_STAT_DEVNODEVICE
#define     WFS_CAM_DEVHWERROR                  WFS_STAT_DEVHWERROR
#define     WFS_CAM_DEVUSERERROR                WFS_STAT_DEVUSERERROR

/* number of cameras supported/length of WFSCAMSTATUS.fwCameras field */

#define     WFS_CAM_CAMERAS_SIZE                (8)
#define     WFS_CAM_CAMERAS_MAX                 (WFS_CAM_CAMERAS_SIZE - 1)

/* indices of WFSCAMSTATUS.fwCameras [...]
              WFSCAMCAPS.fwCameras [...]
              WFSCAMTAKEPICT.wCamera             */
#define     WFS_CAM_ROOM                        (0)
#define     WFS_CAM_PERSON                      (1)
#define     WFS_CAM_EXITSLOT                    (2)

/* values of WFSCAMSTATUS.fwMedia */

#define     WFS_CAM_MEDIAOK                     (0)
#define     WFS_CAM_MEDIAHIGH                   (1)
#define     WFS_CAM_MEDIAFULL                   (2)
#define     WFS_CAM_MEDIAUNKNOWN                (3)

/* values of WFSCAMSTATUS.fwCameras */

#define     WFS_CAM_CAMNOTSUPP                  (0)
#define     WFS_CAM_CAMOK                       (1)
#define     WFS_CAM_CAMINOP                     (2)
#define     WFS_CAM_CAMUNKNOWN                  (3)

/* values of WFSCAMCAPS.fwType */

#define     WFS_CAM_TYPE_CAM                    (1)


/* values of WFSCAMCAPS.fwCamData */

#define     WFS_CAM_NOTADD                      (0)
#define     WFS_CAM_AUTOADD                     (1)
#define     WFS_CAM_MANADD                      (2)


/* WOSA/XFS CAM Errors */ 

#define WFS_ERR_CAM_CAMNOTSUPP          (-(CAM_SERVICE_OFFSET + 0))
#define WFS_ERR_CAM_MEDIAFULL           (-(CAM_SERVICE_OFFSET + 1))
#define WFS_ERR_CAM_CAMINOP             (-(CAM_SERVICE_OFFSET + 2))


/*=================================================================*/
/* CAM Info Command Structures */
/*=================================================================*/

typedef struct _wfs_cam_status        
{
    WORD            fwDevice;
    WORD            fwMedia;
    WORD            fwCameras[WFS_CAM_CAMERAS_SIZE];
    USHORT          usPictures;
    LPSTR           lpszExtra; 
} WFSCAMSTATUS, *LPWFSCAMSTATUS;   

typedef struct _wfs_cam_caps            
{
    WORD            wClass;     
    WORD            fwType;
    WORD            fwCameras[WFS_CAM_CAMERAS_SIZE];
    USHORT          usMaxPictures;
    WORD            fwCamData;
    USHORT          usMaxDataLength;
    LPSTR           lpszExtra;
} WFSCAMCAPS, * LPWFSCAMCAPS;


/*=================================================================*/
/* CAM Execute Command Structures */
/*=================================================================*/

typedef struct _wfs_cam_take_picture
{
    WORD            wCamera; 
    LPSTR           lpszCamData; 
} WFSCAMTAKEPICT, *LPWFSCAMTAKEPICT;   

#ifdef __cplusplus//@M002
}       /*extern "C" @M002*/
#endif//@M002

/* restore alignment */
#pragma pack (pop)

#endif  /* __INC_XFSCAM__H */

