#include QMK_KEYBOARD_H

enum layer_number {
  _QWERTY = 0,
  _NAV,
  _NUM,
  _SYM,
  _FCN,
  _MEDIA
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   '  |      |
 * |      |LCtrl | Alt  | LGUI | LSft |      |       |    |       |      | Rsft | RGUI | Alt  |RCtrl |      | 
 * |      |      |      | Num  |      |      |       |    |       |      |      |      |      |      |      |  
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      | Esc  |Space | /  Tab  /       \Enter \  |BackSp| Del  |      |
 *                   |      | FCN  | NUM  |/  SYM  /         \      \ | NAV  |MEDIA |      |
 *                   `----------------------------'           '------''--------------------'
 */
 [_QWERTY] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    XXXXXXX,
  XXXXXXX, CTL_T(KC_A), ALT_T(KC_S), LGUI_T(KC_D), LSFT_T(KC_F), KC_G,   KC_H,    RSFT_T(KC_J), RGUI_T(KC_K), RALT_T(KC_L), RCTL_T(KC_QUOT), XXXXXXX,
  XXXXXXX, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   XXXXXXX, XXXXXXX, KC_N,    KC_M,    KC_COMM, KC_DOT,  XXXXXXX, XXXXXXX,
                             XXXXXXX, LT(_FCN, KC_ESC), LT(_NUM, KC_SPC), LT(_SYM, KC_TAB), KC_ENT, LT(_NAV, KC_BSPC), LT(_MEDIA, KC_DEL),  XXXXXXX
),

/* NAV
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      | Home |  ↑   | End  | PgUp |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |CapsLk|  ←   |  ↓   |  →   | PgDn |-------.    ,-------|      | Rsft | RGUI | Alt  |RCtrl |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      | Esc  |Space | /  Tab  /       \      \  |      |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_NAV] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, KC_HOME, KC_UP,   KC_END,  KC_PGUP,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,                   XXXXXXX, KC_RSFT, KC_RGUI, KC_RALT, KC_RCTL, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             XXXXXXX, KC_ESC,  KC_SPC,  KC_TAB,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),

/* NUM 
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |  [   |  1   |  2   |  3   |  ]   |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |LCtrl | Alt  | LGUI | Lsft |      |-------.    ,-------|  =   |  4   |  5   |  6   |  ;   |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|  \   |  7   |  8   |  9   |  `   |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      |      |      | /       /       \  -   \  |  0   |  .   |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_NUM] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_LBRC, KC_1,    KC_2,    KC_3,    KC_RBRC, XXXXXXX, 
  XXXXXXX, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, XXXXXXX,                   KC_PEQL, KC_4,    KC_5,    KC_6,    KC_SCLN, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSLS, KC_7,    KC_8,    KC_9,    KC_GRV,  XXXXXXX,
                             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MINS, KC_0,    KC_DOT,  XXXXXXX
),

/* SYM
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |  {   |  !   |  @   |  #   |  }   |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |LCtrl | Alt  | LGUI | LSft |      |-------.    ,-------|  +   |  $   |  %   |  ^   |  :   |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|  |   |  &   |  *   |  (   |  ~   |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      |      |      | /       /       \   _  \  |   )  |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
  [_SYM] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, XXXXXXX,                   KC_PPLS, KC_4,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
),

/* FCN
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |PrtScn|  F1  |  F2  |  F3  | F10  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |LCtrl | Alt  | LGUI | LSft |      |-------.    ,-------|ScrlLk|  F4  |  F5  |  F6  | F11  |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|Pause |  F7  |  F8  |  F9  | F12  |      |
 * |      |      |      |      |      |      |       |    |       |Break |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      |      |      | /       /       \Enter \  |BackSp| Del  |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
  [_FCN] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_PSCR, KC_F1,   KC_F2,   KC_F3,   KC_F10,  XXXXXXX,
  XXXXXXX, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, XXXXXXX,                   KC_SCRL, KC_F4,   KC_F5,   KC_F6,   KC_F11,  XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PAUS, KC_F7,   KC_F8,   KC_F9,   KC_F12,  XXXXXXX,
                             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),

/* MEDIA
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |BrtUp |BrtDn |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      | Prev |VolDn |VolUp | Next |      |-------.    ,-------|      | RSft | RGUI | Alt  |RCtrl |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * |      |      |      |      |      |      |       |    |       |      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | Stop |Pause | Mute | /       /       \      \  |      |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
  [_MEDIA] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
),
};

//layer_state_t layer_state_set_user(layer_state_t state) {
//  return update_tri_layer_state(state, _NAV, _NUM, _SYM, _FCN, _MEDIA);
//}

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
