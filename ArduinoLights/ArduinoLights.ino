/**************************************
  Author: DH
  Created: 2018-01-05
 **************************************/

// This program will generate various light patterns
// using an Arduino and a strip of WS2812B LED lights.
// It is to be determined if an Arduino Uno will be sufficient or not
// The eventual vision for this project will be lights patterns appropriate
// for various holidays, starting with Christmas, Halloween, Thanksgiving
// Valentine's Day, St. Patricks Day, Memorial Day & 4th of July


// Example: 4th of July might have patterns such as the following...
// - Marching Red, White and Blue lights
// - Red, White and Blue sequential flashing lights
// - Lights fading in and out (same colors)
// - Lights "exploding" from the center like fireworks
// It is possible that the eventual use will include Panel light patterns

// Criteria:
// - Arbitrary number of lights defined in code
// - Multiple patterns based on a desired 
// - Patterns should adapts based on the number of lights present
// - Variable timing: such as a min and max amount of time a pattern might appear
// - Rotating Patterns Randomly

// Short-Short Term Goal: Create the framework to select and implement patterns
// Short Term Goal: Create various Christmas patterns

// Medium Term Goal: Create Halloween and Thanksgiving patterns

// Long Term Goal: Create patterns for various other holidays

// Long-Long term vision would be to create mobile app interface
// to choose patterns available and set times, etc.

#include <bitswap.h>
#include <chipsets.h>
#include <color.h>
#include <colorpalettes.h>
#include <colorutils.h>
#include <controller.h>
#include <cpp_compat.h>
#include <dmx.h>
#include <FastLED.h>
#include <fastled_config.h>
#include <fastled_delay.h>
#include <fastled_progmem.h>
#include <fastpin.h>
#include <fastspi.h>
#include <fastspi_bitbang.h>
#include <fastspi_dma.h>
#include <fastspi_nop.h>
#include <fastspi_ref.h>
#include <fastspi_types.h>
#include <hsv2rgb.h>
#include <led_sysdefs.h>
#include <lib8tion.h>
#include <noise.h>
#include <pixelset.h>
#include <pixeltypes.h>
#include <platforms.h>
#include <power_mgt.h>

#define NUM_LEDS 150
#define DATA_PIN 3

CRGB aLights[NUM_LEDS];

void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(aLights, NUM_LEDS);
}

void loop() {
  // put your main code here, to run repeatedly:
  aLights[0] = CRGB::Red;
  FastLED.show();
  delay(500);
  // Now turn the LED off, then pause
  aLights[0] = CRGB::Black;
  FastLED.show();
  delay(500);

}
