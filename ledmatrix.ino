#include <FastLED.h>

#define LED_PIN 9
#define NUM_LEDS 25

CRGB leds[NUM_LEDS];
//path
// 1 0 0 0 0   //  0  1  2  3  4
// 0 1 0 0 0   //  5  6  7  8  9
// 0 0 1 0 0   // 10 11 12 13 14
// 0 0 0 1 0   // 15 16 17 18 19
// 0 0 0 0 1   // 20 21 22 23 24


void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}

void loop(){
  leds[0] = CRGB(255, 0, 0);
  FastLED.show();
  delay(500);
  leds[8] = CRGB(255, 0, 0);
  FastLED.show();
  delay(500);
  leds[12] = CRGB(255, 0, 0);
  FastLED.show();
  delay(500);
  leds[16] = CRGB(255, 0, 0);
  FastLED.show();
  delay(500);
  leds[24] = CRGB(255, 0, 0);
  FastLED.show();
  delay(500);
  
}
