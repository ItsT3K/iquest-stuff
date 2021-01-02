; File: equates.inc
; Author: ItsT3K (J.D.)
; Written on Thursday December 17, 2020 at 14:11
; For the Keil C51 Assembler/Compiler

; Done for the LeapFrog MCS-51 Based MCU
;
; The hardware in the MCS-51 MCU has it's own
; CELP Decoding as well as a full MIDI Synthesizer
; and more RAM than a regular 8051. It seems to be
; based around the 8052 than a 8051

; ===================================
; | LeapFrog iQuest/LeapPad Equates |
; |=================================|
; | These equates were mainly done  |
; | around the iQuest. Meaning there|
; | meaning there are features in   |
; | this that the LeapPad do not    |
; | have                            |
; ===================================
; | NOTE! THIS IS A WORK IN PROGRESS|
; ===================================

	code_page_0000		EQU	0fc06h	; Also uses fc07
	code_page_8000		EQU	0fc08h	; Also uses fc09
	data_page_0000		EQU	0fc0ah
	data_page_8000		EQU	0fc0ch
	data_page_c000		EQU	0fc0eh
	
	disp_storeline		EQU	0fce3h	; Line is 0x59 as the display content is stored in portrait mode
	store_framebuf		EQU	0fce4h	; The stored frame buffer is shifted right by 3 bits
	
;	midi_calc_pitch		EQU	0f007h	; Also uses f008
;	midi_pitch_short	EQU	0f4aeh

; ======= Flash =======
	UserName		EQU	0c076h
	hCurDataset		EQU	0c086h
	hCurView		EQU	0c087h
	hPrevView		EQU	0c088h
	flash_pri_success	EQU	0c089h	; Bit 3 - 1 = Success, 0 = Fail
	flash_sec_success	EQU	0c089h	; Bit 4 - 1 = Success, 0 = Fail
; ====== END Flash ======
	Struct2			EQU	0c0a2h
	
	CartStatus		EQU	0f058h	; Bit 0 - 2 is Cart Status
;	Initialized		EQU	0f058h	; Bit 3 = Initialized
;	BatteryLoss		EQU	0f058h	; Bit 5 = Battery Loss
; These are commented out as it's hard to try to write the individual bits as their own EQUs
	Short			EQU	0f05bh
	
	unknown01		EQU	0f4e2h	; Also uses F4E3
	
	powerdown1		EQU	0fc00h	; Bit 3 - 0: Auto Power
	Down, 1: Off Switch
	unknown02		EQU	0fc01h	; goes to FC04
	
; ====== Serial ======
	RxBuf_wpos		EQU	0ff00h
	RxBuf_rpos		EQU	0ff01h
	RxBuf			EQU	0ff02h	; byte[64]
; ====== END Serial ======

; ====== Registers ======
	r7			EQU	0f200h
	r6			EQU	0f000h
	
	
