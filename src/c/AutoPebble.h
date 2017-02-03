
	#include <stdio.h>
	#include <stdint.h>
	#include <stdlib.h>     /* strtol */
	#include <string.h>     /* strtol */
	#include <pebble.h>
	
	#define PEBBLE_COMMAND_FIRST_ACTION  1000 
	#define PEBBLE_COMMAND_FIRST_LONG_CLICK_ACTION  2000 
	#define PEBBLE_COMMAND_FIRST_CELL_SIZE_ACTION  3000 
	#define PEBBLE_COMMAND_SIZE  9999 
	#define PEBBLE_PHONE_COMMAND  10000 
	#define PEBBLE_COMMAND_HEADER  10001 
	#define PEBBLE_GET_LAST_LIST_COMMAND  10002	
	#define PEBBLE_START_LONG_COMMAND  10003	
	#define PEBBLE_COMMAND_PREFIX  10004
	#define PEBBLE_SIGNAL_APP_START_COMMAND  10005	
	#define PEBBLE_LONG_COMMAND_PREFIX  10006	
	#define PEBBLE_TURN_ON_LIGHT  10007	
	#define PEBBLE_TURN_OFF_LIGHT  10008
	#define PEBBLE_TURN_ON_LIGHT_SHORT  10009
	#define PEBBLE_WATCH_APP_VERSION  10010	
	#define PEBBLE_SCREEN_TYPE  10011	
	#define PEBBLE_VIBRATION_PATTERN  10012	
	#define PEBBLE_COMMAND_TAP  10013	
	#define PEBBLE_COMMAND_END  10014
	#define PEBBLE_COMMAND_CLEAR_HISTORY  10015
	#define PEBBLE_LIGHT_MODE  10016	
	#define PEBBLE_LAST_LINE_DEFAULT 10017
	#define PEBBLE_SCREEN_ID 10018
	#define PEBBLE_SCREEN_DO_NOT_DISTURB 10019
	#define PEBBLE_SCREEN_TITLE_FONT 10020
	#define PEBBLE_SCREEN_TEXT_FONT 10021
	#define PEBBLE_NO_PREFIX_IF_COMMAND 10022
	#define PEBBLE_SET_VIBRATION_ON_CLICK 10023
	#define BACK_ACTION  10024	
	#define MULTI_BACK_ACTION  10025	
	#define GO_BACK_ON_BACK_ACTION  10026	
	#define GO_BACK_ON_LONG_BACK_ACTION  10027	
	#define PEBBLE_WINDOW_FULLSCREEN  10029
	#define PEBBLE_COMMAND_BATTERY_PREFIX  10030
	#define PEBBLE_COMMAND_MOTION_X  10031
	#define PEBBLE_COMMAND_MOTION_Y  10032
	#define PEBBLE_COMMAND_MOTION_Z  10033
	#define PEBBLE_KEEP_LIST_POSITION  10034
	
	
	
	#define HISTORY_REPLACE  1	
	#define HISTORY_CLEAR  2