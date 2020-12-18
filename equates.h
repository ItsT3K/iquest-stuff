/* Equates for the LeapFrog iQuest/LeapPad MCS-51 based MCU */

const int CodePage0000 = 0x0fc06;	/* Also uses fc07 */
const int CodePage8000 = 0x0fc08;	/* Also uses fc09 */
const int DataPage0000 = 0x0fc0a;	
const int DataPage8000 = 0x0fc0c;
const int DataPagec000 = 0x0fc0e;

/*Display*/
const int DispStoreLine = 0x0fce3;	/* Line is 0x59 as the display content is stored in portrait mode. Width 64 Height 90 */
const int StoreFrameBuf = 0x0fce4;	/* The stored frame buffer is shifted right by 3 bits */

/*MIDI*/
//const int MidiCalcPitch = 0x0f007	/* Also uses f008 */
//const int MidiPitchShort = 0x0f4ae	
/* These are commented out until more is learned about the MIDI Structure and about how */
/* sound on these devices work in general. What is known is the base sampling rate is   */
/* 8000Hz. Samples for MIDI are also stored in "LeapFont" in General MIDI Fashion       */

/*Flash*/
const int UserName = 0x0c076;
const int hCurDataset = 0x0c086;
const int hCurView = 0x0c087;
const int hPrevView = 0x0c088;
const int flashprisuccess = 0x0c089;	/* Bit 3 - 1: Success, 0: Fail */
const int flashsecsuccess = 0x0c089;	/* Bit 4 - 1: Success, 0: Fail */
//const int Struct2 = 0x0c0a2

/*Serial*/
const int RxBufWpos = 0x0ff00;
const int RxBufRpos = 0x0ff01;
const int RxBuf = 0x0ff02;

/*Registers*/
const int r7 = 0x0f200;
const int r6 = 0x0f000;

/*Misc*/
const int CartStatus = 0x0f058;		/* Bit 0 - 2 is Cart Status */
//const int Initialized = 0x0f058;	/* Bit 3 = Initialized */
//const int BatteryLoss = 0x0f058;	/* Bit 5 = Battery Loss */
/* These are commented out due to the fact they're just different bits of the same address */

const int Short = 0x0f05b;
const int Unknown01 = 0x0f4e2;		/* Also uses F4E3 */

const int PowerDown1 = 0x0fc00;		/* Bit 3 = 0: Auto Power Down, 1: Off Switch */
const int Unknown02 = 0x0fc01;

