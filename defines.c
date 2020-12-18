/* Equates for the LeapFrog iQuest/LeapPad MCS-51 based MCU */

#define CP_CODEPAGE0000 0x0fc06    /* Also uses fc07 */
#define CP_CODEPAGE8000 0x0fc08    /* Also uses fc09 */
#define DP_DATAPAGE0000 0x0fc0a    
#define DP_DATAPAGE8000 0x0fc0c
#define DP_DATAPAGEC000 0x0fc0e

/*Display*/
#define DI_DISPSTORELINE 0x0fce3    /* Line is 0x59 as the display contents are stored in portrait mode */
#define DI_STOREFRAMEBUF 0x0fce4    /* The stored frame buffer is shifted right by 3 bits */

/*MIDI*/
/* These are commented out until more is learned about the MIDI Structure and about how */
/* sound on these devices work in general. What is known is the base sampling rate is   */
/* 8000Hz. Samples for MIDI are also stored in "LeapFont" in General MIDI Fashion       */
//#define MI_MIDICALCPITCH    0x0f007 /* Also uses F008 */
//#define MI_MIDPITCHSHORT    0x0f4ae

/*Flash*/
#define FL_USERNAME 0x0c076
#define FL_HCURDATASET  0x0c086
#define FL_HCURVIEW 0x0c087
#define FL_HPREVVIEW    0x0c088
#define FL_FLASHPRISUCCESS  0x0c089 /* Bit 3: 1 - Success, 0 - Fail */
#define FL_FLASHPRISUCCESS  0x0c089 /* Bit 4: 1 - Success, 0 - Fail */

/*Serial*/
#define SL_RXBUFWPOS    0x0ff00
#define SL_RXBUFRPOS    0x0ff01
#define SL_RXBUF    0x0ff02

/*Registers*/
#define REG_R6  0x0f000
#define REG_R7  0x0f200

/*Misc*/
#define MS_CARTSTATUS   0x0f058
/* Bit 0 thru 2 is Cart Status, Bit 3 is Initialized, Bit 5 is Battery Loss */
#define MS_POWERDOWN    0x0fc00     /* Bit 3: 0 - Auto Power Down, 1 - Off Switch */
