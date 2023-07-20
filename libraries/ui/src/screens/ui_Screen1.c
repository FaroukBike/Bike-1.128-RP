// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Screen1_screen_init(void)
{
ui_Screen1 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen1, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_add_event_cb(ui_Screen1, scr_unloaded_delete_cb, LV_EVENT_SCREEN_UNLOADED, &ui_Screen1);

ui_Slider3 = lv_slider_create(ui_Screen1);
lv_obj_set_width( ui_Slider3, lv_pct(40));
lv_obj_set_height( ui_Slider3, lv_pct(15));
lv_obj_set_x( ui_Slider3, 7 );
lv_obj_set_y( ui_Slider3, 48 );
lv_obj_set_align( ui_Slider3, LV_ALIGN_CENTER );

ui_Roller1 = lv_roller_create(ui_Screen1);
lv_roller_set_options( ui_Roller1, "Option 1\nOption 2\nOption 3\nOption 4\nOption 5\nOption 6\nOption 7\nOption 8\nOption 9", LV_ROLLER_MODE_NORMAL );
lv_obj_set_height( ui_Roller1, 100);
lv_obj_set_width( ui_Roller1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_x( ui_Roller1, -22 );
lv_obj_set_y( ui_Roller1, lv_pct(-20) );
lv_obj_set_align( ui_Roller1, LV_ALIGN_CENTER );

ui_Switch2 = lv_switch_create(ui_Screen1);
lv_obj_set_width( ui_Switch2, 80);
lv_obj_set_height( ui_Switch2, 40);
lv_obj_set_x( ui_Switch2, 71 );
lv_obj_set_y( ui_Switch2, -11 );
lv_obj_set_align( ui_Switch2, LV_ALIGN_CENTER );

}
