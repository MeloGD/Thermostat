// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.2.3
// LVGL version: 8.3.4
// Project name: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
  #if __has_include("lvgl.h")
    #include "lvgl.h"
  #elif __has_include("lvgl/lvgl.h")
    #include "lvgl/lvgl.h"
  #else
    #include "lvgl.h"
  #endif
#else
  #include "lvgl.h"
#endif

#include "ui_comp.h"
#include "ui_comp_hook.h"
#include "ui_events.h"
extern lv_obj_t *ui_loadingscreen;
extern lv_obj_t *ui_loadingscreentext;
extern lv_obj_t *ui_loadingscreenssid;
extern lv_obj_t *ui_screen1;
extern lv_obj_t *ui_topbarscreen1;
extern lv_obj_t *ui_topbartitlescreen1;
extern lv_obj_t *ui_clock;
extern lv_obj_t *ui_wifiswitch;
extern lv_obj_t *ui_wifitext;
//extern lv_obj_t *ui_wifisettingsbutton;
extern lv_obj_t *ui_textmenuscreen1;
extern lv_obj_t *ui_environmenttemp;
extern lv_obj_t *ui_warmtemp;
extern lv_obj_t *ui_moisttemp;
extern lv_obj_t *ui_coldtemp;
extern lv_obj_t *ui_environmentrelativehum;
extern lv_obj_t *ui_moistrelativehum;
extern lv_obj_t *ui_wifilist;
extern lv_obj_t *ui_wifilistoptions;
extern lv_obj_t *ui_reportwifimessagebox;
extern lv_obj_t *ui_wifikeyboard;
extern lv_obj_t *ui_wifipasswordarea;
void ui_event_nextbuttonscreen1( lv_event_t * e);
void ui_event_settingspopupwifiwindow( lv_event_t * e);
extern lv_obj_t *ui_nextbuttonscreen1;
extern lv_obj_t *ui_nextbuttontextscreen1;
extern lv_obj_t *ui_screen2;
extern lv_obj_t *ui_topbarscreen2;
extern lv_obj_t *ui_topbartitlecreen2;
extern lv_obj_t *ui_textmenuscreen2;
void ui_event_backbuttonscreen2( lv_event_t * e);
extern lv_obj_t *ui_backbuttonscreen2;
extern lv_obj_t *ui_backbuttontextscreen2;
extern lv_obj_t *ui_uvaswitch;
extern lv_obj_t *ui_uvbswitch;
extern lv_obj_t *ui_plantsswitch;
void ui_event_gouvabutton( lv_event_t * e);
extern lv_obj_t *ui_gouvabutton;
extern lv_obj_t *ui_gouvatext;
void ui_event_gouvbbutton( lv_event_t * e);
extern lv_obj_t *ui_gouvbbutton;
extern lv_obj_t *ui_gouvbtext;
void ui_event_goplantsbutton( lv_event_t * e);
extern lv_obj_t *ui_goplantsbutton;
extern lv_obj_t *ui_goplantstext;
extern lv_obj_t *ui_screen3;
extern lv_obj_t *ui_textmenuscreen3;
void ui_event_backbuttonscreen3( lv_event_t * e);
extern lv_obj_t *ui_backbuttonscreen3;
void ui_event_backbuttontextscreen3( lv_event_t * e);
extern lv_obj_t *ui_backbuttontextscreen3;
extern lv_obj_t *ui_titlescreen3;
extern lv_obj_t *ui_onrollerscreen3;
extern lv_obj_t *ui_offrollerscreen3;
extern lv_obj_t *ui_tiempoactivad3;
extern lv_obj_t *ui_hours3;
extern lv_obj_t *ui_timetext3;
extern lv_obj_t *ui_minutes3;
extern lv_obj_t *ui_tempslider3;
extern lv_obj_t *ui_targettemp3;
extern lv_obj_t *ui_centgr3;
extern lv_obj_t *ui_screen4;
extern lv_obj_t *ui_textmenuscreen4;
void ui_event_backbuttonscreen4( lv_event_t * e);
extern lv_obj_t *ui_backbuttonscreen4;
void ui_event_backbuttontextscreen4( lv_event_t * e);
extern lv_obj_t *ui_backbuttontextscreen4;
extern lv_obj_t *ui_titlescren4;
extern lv_obj_t *ui_onrollerscreen4;
extern lv_obj_t *ui_offrollerscreen4;
extern lv_obj_t *ui_tiempoactivad4;
extern lv_obj_t *ui_hours4;
extern lv_obj_t *ui_timetext4;
extern lv_obj_t *ui_minutes4;
extern lv_obj_t *ui_screen5;
extern lv_obj_t *ui_textmenuscreen5;
void ui_event_backbuttonscren5( lv_event_t * e);
extern lv_obj_t *ui_backbuttonscren5;
void ui_event_backbuttontextscren5( lv_event_t * e);
extern lv_obj_t *ui_backbuttontextscren5;
extern lv_obj_t *ui_titlescreen5;
extern lv_obj_t *ui_onrollerscreen5;
extern lv_obj_t *ui_offrollerscreen5;
extern lv_obj_t *ui_tiempoactivad5;
extern lv_obj_t *ui_hours5;
extern lv_obj_t *ui_timetext5;
extern lv_obj_t *ui_minutes5;
extern lv_obj_t *ui____initial_actions0;






void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
