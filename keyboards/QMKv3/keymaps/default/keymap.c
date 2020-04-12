#include QMK_KEYBOARD_H

#define _MAIN 0

void encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) { /* First encoder*/
    if (clockwise) {
      tap_code(KC_F13);
    } else {
      tap_code(KC_F14);
    }
  } else if (index == 1) { /* Second encoder*/  
    if (clockwise) {
      tap_code(KC_F15);
    } else {
      tap_code(KC_F16);
    }
  } else if (index == 2) { /* Third encoder*/  
    if (clockwise) {
      tap_code(KC_F17);
    } else {
      tap_code(KC_F18);
    }
  } else if (index == 3) { /* Fourth encoder*/  
    if (clockwise) {
      tap_code(KC_F19);
    } else {
      tap_code(KC_F20);
    }
  } else if (index == 4) { /* Fifth encoder*/  
    if (clockwise) {
      tap_code(KC_9);
    } else {
      tap_code(KC_0);
    }
  }
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { //buttion closest to usb is first
  [_MAIN] = LAYOUT(
     KC_F21, KC_F22, KC_F23, KC_F24, KC_MUTE 
  )
};
