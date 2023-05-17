/* ========================================
FileName: bongocat.h
Date: 15:40 05.September.2022
Author: Marcos Ivan Chow Castro @mctechnology17
Email: mctechnology170318@gmail.com
GitHub: https://github.com/mctechnology17
Brief: QMK oled animations crab
===========================================
Inspired by nwii for the bongocat animation
and ardakilic for the implementation of the animation with the corne keyboard
                           ╔═╦═╦═╗
                    ╔════╗ ║║║║║╔╝
                    ║╔╗╔╗║ ║║║║║╚╗
                    ╚╝║║╚╝ ║╠═╩╩═╝
                      ║╠═╦═╣╚╦═╦╦═╦╗╔═╦═╦╦╗
                      ║║╩╣═╣║║║║║╬║╚╣╬║╬║║║
                      ╚╩═╩═╩╩╩╩═╩═╩═╩═╬╗╠╗║
                                      ╚═╩═╝

Copyright 2022 Marcos Ivan Chow Castro @mctechnology17
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#pragma once

extern uint32_t anim_timer;
extern uint32_t anim_cat_sleep;
extern uint8_t  current_idle_frame;
// uint8_t current_prep_frame = 0; // uncomment if PREP_FRAMES >1
extern uint8_t current_tap_frame;


// RTC
// extern RTCDateTime last_timespec;
// extern uint16_t last_minute;

// // RTC Configuration
// extern bool clock_set_mode;
// extern uint8_t time_config_idx;
// extern int8_t hour_config;
// extern int16_t minute_config;
// extern int8_t year_config;
// extern int8_t month_config;
// extern int8_t day_config;
// extern uint8_t previous_encoder_mode;


void           render_anim_bongocat(void);
// void process_record_JJ(uint16_t, keyrecord_t);
// vim: set fdm=marker: