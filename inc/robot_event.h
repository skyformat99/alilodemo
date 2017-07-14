#ifndef _ROBOT_EVENT_H_
#define _ROBOT_EVENT_H_

#include "../alilodemo/inc/event_notification.h"

#define ROBOT_EVENT_DEBUG_ENABLE            (1)

#define ROBOT_WECHAT_KEY_MIN_TIME           (1000)
#define ROBOT_AI_KEY_MIN_TIME               (1000)

#define ROBOT_MOCULE_REBOOT_CHECK_TIME      (8000)

#define ROBOT_EVENT_BATTERY_LOW_THRESHOLD   (40)


#define ROBOT_USER_KEY_WECHAT               (ROBOT_NOTIFICATION_KEY_INDEX1)
#define ROBOT_USER_KEY_FM                   (ROBOT_NOTIFICATION_KEY_INDEX2)
#define ROBOT_USER_KEY_DOWNLOAD_CYCLE       (ROBOT_NOTIFICATION_KEY_INDEX3)
#define ROBOT_USER_KEY_MENU                 (ROBOT_NOTIFICATION_KEY_INDEX4)
#define ROBOT_USER_KEY_PLAY_PAUSE           (ROBOT_NOTIFICATION_KEY_INDEX5)
#define ROBOT_USER_KEY_AI                   (ROBOT_NOTIFICATION_KEY_INDEX6)
#define ROBOT_USER_KEY_PLAY_NEXT            (ROBOT_NOTIFICATION_KEY_INDEX7)
#define ROBOT_USER_KEY_LED_WIFI             (ROBOT_NOTIFICATION_KEY_INDEX8)
#define ROBOT_USER_KEY_PLAY_PREVIOUS        (ROBOT_NOTIFICATION_KEY_INDEX9)

typedef enum
{
    //key
    ROBOT_EVENT_KEY_MENU_SWITCH,
    ROBOT_EVENT_KEY_AUTO_SLEEP_ON_OFF,

    ROBOT_EVENT_KEY_DOWNLOAD_SWITCH,
    ROBOT_EVENT_KEY_CYCLE_MODE_SWITCH,
    ROBOT_EVENT_KEY_FACTORY_RESET,

    ROBOT_EVENT_KEY_FM_PLAY,

    ROBOT_EVENT_KEY_AI_HOW_TO_USE,
    ROBOT_EVENT_KEY_AI_START,
    ROBOT_EVENT_KEY_AI_TOO_SHORT,
    ROBOT_EVENT_KEY_AI_STOP,
    ROBOT_EVENT_KEY_BIG_VOLUME,

    ROBOT_EVENT_KEY_WECHAT_HOW_TO_USE,
    ROBOT_EVENT_KEY_WECHAT_START,
    ROBOT_EVENT_KEY_WECHAT_TOO_SHORT,
    ROBOT_EVENT_KEY_WECHAT_STOP,

    ROBOT_EVENT_KEY_EAR_LED_ON_OFF,
    ROBOT_EVENT_KEY_NET_CONFIG,

    ROBOT_EVENT_KEY_PLAY_PAUSE,
    ROBOT_EVENT_KEY_CHILD_LOCK,

    ROBOT_EVENT_KEY_PRE_SONG,

    ROBOT_EVENT_KEY_NEXT_SONG,

    //battery
    ROBOT_EVENT_BATTERY_LOW,

    //usb
    ROBOT_EVENT_USB_NOT_INSERTED,
    ROBOT_EVENT_USB_CHARGE_ONLY,
    ROBOT_EVENT_USB_U_DISK,

    //sd card
    ROBOT_EVENT_SD_CARD_NOT_INSERTED,
    ROBOT_EVENT_SD_CARD_INSERTED,

    //file download
    ROBOT_EVENT_FILE_DOWNLOAD,

    //QC mode
    ROBOT_EVENT_QC_MODE_ENTER,
    ROBOT_EVENT_QC_MODE_QUIT,

    //playing file name
    ROBOT_EVENT_PLAYING_FILE_NAME,

    ROBOT_USER_EVENT_MAX,
    ROBOT_USER_EVENT_NONE
} ROBOT_USER_EVENT;


typedef void (*ROBOT_EVENT_NOTIFICATION_CB)( ROBOT_USER_EVENT event, void *data);

OSStatus robot_event_service_start( ROBOT_EVENT_NOTIFICATION_CB robot_event_callback );
#endif