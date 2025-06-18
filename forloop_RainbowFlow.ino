#include <FastLED.h>

#define LED_PIN     4          // GPIO pin connected to LED strip
#define NUM_LEDS    8          // Total number of LEDs in strip
#define BRIGHTNESS  100        // Brightness level (0–255)
#define LED_TYPE    WS2812
#define COLOR_ORDER GRB

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);
}

void loop() {
  for(int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CHSV(i * 20, 255, 255);
  }
  FastLED.show();
  delay(100);
}

