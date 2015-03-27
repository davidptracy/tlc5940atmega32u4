#ifndef TLC_Teensy_xxU4_h
#define TLC_Teensy_xxU4_h

#if DATA_TRANSFER_MODE == TLC_BITBANG
#error "If you want bitbang mode, insert pin defs here"
#endif

// MOSI (Leo outter center ICSP pin) -> SIN (TLC pin 26)
#define TLC_MOSI_PIN   2
#define TLC_MOSI_PORT   PORTB
#define TLC_MOSI_DDR   DDRB

// SCK (Leo inner center ICSP pin) -> SCLK (TLC pin 25)
#define TLC_SCK_PIN   1
#define TLC_SCK_PORT   PORTB
#define TLC_SCK_DDR   DDRB

// SS (Leo RX LED)
#define TLC_SS_PIN   0
#define TLC_SS_DDR   DDRB

// OC1A (Leo pin 9) -> XLAT (TLC pin 24)
#define XLAT_PIN   5
#define XLAT_PORT   PORTB
#define XLAT_DDR   DDRB

// OC1B (Leo pin 10) -> BLANK (TLC pin 23)
#define BLANK_PIN   6
#define BLANK_PORT   PORTB
#define BLANK_DDR   DDRB

// OC3A (Leo pin 5) -> GSCLK (TLC pin 18)
#define GSCLK_PIN   6
#define GSCLK_PORT   PORTC
#define GSCLK_DDR   DDRC
#define TLC_TIMER3_GSCLK 1

#endif

