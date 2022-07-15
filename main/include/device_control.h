/* ***************************************************************************
 *
 * Copyright 2019 Samsung Electronics All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the License.
 *
 ****************************************************************************/

//#define CONFIG_TARGET_WITTY_CLOUD
//#define CONFIG_TARGET_ESP8266_DEVKITC_V1
#if defined(CONFIG_TARGET_WITTY_CLOUD)

// #define GPIO_INPUT_BUTTON 4

// #define GPIO_OUTPUT_MAINLED 15
// #define GPIO_OUTPUT_MAINLED_0 16 /* use as ground */

// #define GPIO_OUTPUT_NOUSE1 12
// #define GPIO_OUTPUT_NOUSE2 13

#elif defined(CONFIG_TARGET_ESP8266_DEVKITC_V1)

// #define GPIO_INPUT_BUTTON 0

// #define GPIO_OUTPUT_MAINLED 14
// #define GPIO_OUTPUT_MAINLED_0 15 /* use as ground */

// #define GPIO_OUTPUT_NOUSE1 12
// #define GPIO_OUTPUT_NOUSE2 13

#else //default

// #define GPIO_OUTPUT_NOTIFICATION_LED 2
#define GPIO_INPUT_BUTTON 15 //tengah
// #define GPIO_INPUT_BUTTON3 5 //kanan
// #define GPIO_INPUT_BUTTON 15, 5 //kanan

#define GPIO_OUTPUT_MAINLED 2
#define GPIO_OUTPUT_MAINLED_0 0 /* use as ground */

#define GPIO_OUTPUT_RELAY 12 //tengah
// #define GPIO_OUTPUT_RELAY3 4 //kanan
// #define GPIO_OUTPUT_RELAY 12, 4 //kanan
#define GPIO_OUTPUT_NOUSE2 4 //terakhir_aktif_relay_3 samping dkt esp
// #define GPIO_OUTPUT_RELAY 3
// #define GPIO_OUTPUT_NOUSE2 3 

#endif

enum switch_onoff_state {
    SWITCH_OFF = 0,
    SWITCH_ON = 1,
};

enum led_onoff_state {
    LED_OFF = 0,
    LED_ON = 1,
};

enum relay_gpio_state {
    RELAY_GPIO_ON = 1,
    RELAY_GPIO_OFF = 0,
};

enum main_led_gpio_state {
    MAINLED_GPIO_ON = 0,
    MAINLED_GPIO_OFF = 1,
};

enum led_animation_mode_list {
    LED_ANIMATION_MODE_IDLE = 0,
    LED_ANIMATION_MODE_FAST,
    LED_ANIMATION_MODE_SLOW,
};

enum button_gpio_state {
    BUTTON_GPIO_RELEASED = 0,
    BUTTON_GPIO_PRESSED = 1,
};

#define BUTTON_DEBOUNCE_TIME_MS 20
#define BUTTON_LONG_THRESHOLD_MS 5000
#define BUTTON_DELAY_MS 300

enum button_event_type {
    BUTTON_LONG_PRESS = 0,
    BUTTON_SHORT_PRESS = 1,
};

void change_switch_state(int switch_state);
void change_led_state(int led_state);
void button_isr_handler(void *arg);
int get_button_event(int* button_event_type, int* button_event_count);
void led_blink(int switch_state, int delay, int count);
void change_led_mode(int noti_led_mode);
void iot_gpio_init(void);

