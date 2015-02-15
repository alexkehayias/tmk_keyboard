/* 
Mac qwerty keyboard layout 

Notes:
- LGUI == the Apple key
- FN2 toggles the mouse layer
  - SDFE is used for positioning the cursor
  - Right thumb cluster is for mouse clicking and scrolling

*/

// TODO stil needs a backslash/pipe key, a square bracket key
static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // LGUI is the Apple k
    // layer 0 : default
    KEYMAP(
        // left hand
        GRV, 1,   2,   3,   4,   5,   ESC,
        TAB, Q,   W,   E,   R,   T,   NO,
        LCTL,A,   S,   D,   F,   G,   // change to mouse layer
        LSFT,Z,   X,   C,   V,   B,   FN2,
        // braces and paranthesis
        BSLS,LBRC,RBRC,FN0, FN1,
                                      LGUI,NO,
                                           ESC,
                                BSPC,LCTL,FN3,
        // right hand
             FN3, 6,   7,   8,   9,   0,   MINS,
             LBRC,Y,   U,   I,   O,   P,   EQL,
                  H,   J,   K,   L,   SCLN,QUOT,
             FN1, N,   M,   COMM,DOT, SLSH,RSFT,
                       // vim style arrow keys
                       RALT,LEFT,DOWN,UP,  RGHT,
        RALT,RCTL,
        PGUP,
        PGDN,ENT, SPC
    ),
    // layer 1 : function and symbol keys
    KEYMAP(  
        // left hand
        TRNS,F1,  F2,  F3,  F4,  F5,  F11,
        TRNS,TRNS,TRNS,MS_U,TRNS,TRNS,TRNS,
        TRNS,TRNS,MS_L,MS_D,MS_R,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             F12, F6,  F7,  F8,  F9,  F10, TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        // Mouse buttons and scroll wheel
        WH_L,WH_R,
        WH_D,
        WH_U,BTN1,BTN2
    ),
};

// Fn action definition
static const uint16_t PROGMEM fn_actions[] = {
  // FN0 open parenth 
  ACTION_MODS_KEY(MOD_LSFT, KC_9),
  // FN1 close parenth
  ACTION_MODS_KEY(MOD_LSFT, KC_0),
  // FN2 toggle mouse layer
  ACTION_LAYER_TOGGLE(1),
  // FN3 spotlight/alfred
  ACTION_MODS_KEY(MOD_LGUI, KC_GRV)

};
