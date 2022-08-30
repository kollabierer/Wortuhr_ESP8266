//******************************************************************************
// LedDriver.cpp
//******************************************************************************

#include "LedDriver.h"

#ifdef LED_LIBRARY_NEOPIXEL

#ifdef LED_LAYOUT_HORIZONTAL_1
    uint8_t ledMap[] = {
          0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,
         21,  20,  19,  18,  17,  16,  15,  14,  13,  12,  11,
         22,  23,  24,  25,  26,  27,  28,  29,  30,  31,  32,
         43,  42,  41,  40,  39,  38,  37,  36,  35,  34,  33,
         44,  45,  46,  47,  48,  49,  50,  51,  52,  53,  54,
         65,  64,  63,  62,  61,  60,  59,  58,  57,  56,  55,
         66,  67,  68,  69,  70,  71,  72,  73,  74,  75,  76,
         87,  86,  85,  84,  83,  82,  81,  80,  79,  78,  77,
         88,  89,  90,  91,  92,  93,  94,  95,  96,  97,  98,
        109, 108, 107, 106, 105, 104, 103, 102, 101, 100,  99,
        111, 112, 113, 110, 114
    };
#endif

#ifdef LED_LAYOUT_HORIZONTAL_2
    uint8_t ledMap[] = {
      109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99,
      88,  89,  90,  91,  92,  93,  94,  95,  96,  97,  98,
      87,  86,  85,  84,  83,  82,  81,  80,  79,  78,  77,
      66,  67,  68,  69,  70,  71,  72,  73,  74,  75,  76,
      65,  64,  63,  62,  61,  60,  59,  58,  57,  56,  55,
      44,  45,  46,  47,  48,  49,  50,  51,  52,  53,  54,
      43,  42,  41,  40,  39,  38,  37,  36,  35,  34,  33,
      22,  23,  24,  25,  26,  27,  28,  29,  30,  31,  32,
      21,  20,  19,  18,  17,  16,  15,  14,  13,  12,  11,
       0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,
     110, 111, 112, 114, 113
    };
#endif

#ifdef LED_LAYOUT_HORIZONTAL_3
    uint8_t ledMap[] = {
     112, 111, 110, 109, 108, 107, 106, 105, 104, 103, 102,
      90,  91,  92,  93,  94,  95,  96,  97,  98,  99, 100,
      89,  88,  87,  86,  85,  84,  83,  82,  81,  80,  79,
      68,  69,  70,  71,  72,  73,  74,  75,  76,  77,  78,
      67,  66,  65,  64,  63,  62,  61,  60,  59,  58,  57,
      46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,
      45,  44,  43,  42,  41,  40,  39,  38,  37,  36,  35,
      24,  25,  26,  27,  28,  29,  30,  31,  32,  33,  34,
      23,  22,  21,  20,  19,  18,  17,  16,  15,  14,  13,
       1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,
     113, 101, 12, 0, 114
    };
#endif

#ifdef LED_LAYOUT_VERTICAL_1
    uint8_t ledMap[] = {
          1,  21,  22,  41,  42,  61,  62,  81,  82, 101, 103,
          2,  20,  23,  40,  43,  60,  63,  80,  83, 100, 104,
          3,  19,  24,  39,  44,  59,  64,  79,  84,  99, 105,
          4,  18,  25,  38,  45,  58,  65,  78,  85,  98, 106,
          5,  17,  26,  37,  46,  57,  66,  77,  86,  97, 107,
          6,  16,  27,  36,  47,  56,  67,  76,  87,  96, 108,
          7,  15,  28,  35,  48,  55,  68,  75,  88,  95, 109,
          8,  14,  29,  34,  49,  54,  69,  74,  89,  94, 110,
          9,  13,  30,  33,  50,  53,  70,  73,  90,  93, 111,
         10,  12,  31,  32,  51,  52,  71,  72,  91,  92, 112,
          0, 102, 113,  11, 114
    };
#endif

#ifdef LED_LAYOUT_VERTICAL_2
    uint8_t ledMap[] = {
          9,  10,  29,  30,  49,  50,  69,  70,  89,  90, 109,
          8,  11,  28,  31,  48,  51,  68,  71,  88,  91, 108,
          7,  12,  27,  32,  47,  52,  67,  72,  87,  92, 107,
          6,  13,  26,  33,  46,  53,  66,  73,  86,  93, 106,
          5,  14,  25,  34,  45,  54,  65,  74,  85,  94, 105,
          4,  15,  24,  35,  44,  55,  64,  75,  84,  95, 104,
          3,  16,  23,  36,  43,  56,  63,  76,  83,  96, 103,
          2,  17,  22,  37,  42,  57,  62,  77,  82,  97, 102,
          1,  18,  21,  38,  41,  58,  61,  78,  81,  98, 101,
          0,  19,  20,  39,  40,  59,  60,  79,  80,  99, 100,
        112, 110, 114, 113, 111
    };
#endif

#ifdef LED_LAYOUT_VERTICAL_3
    uint8_t ledMap[] = {
          10, 12,  31,  32,  51,  52,  71,  72,  91,  92, 112,
          9,  13,  30,  33,  50,  53,  70,  73,  90,  93, 111,
          8,  14,  29,  34,  49,  54,  69,  74,  89,  94, 110,
          7,  15,  28,  35,  48,  55,  68,  75,  88,  95, 109,
          6,  16,  27,  36,  47,  56,  67,  76,  87,  96, 108,
          5,  17,  26,  37,  46,  57,  66,  77,  86,  97, 107,
          4,  18,  25,  38,  45,  58,  65,  78,  85,  98, 106,
          3,  19,  24,  39,  44,  59,  64,  79,  84,  99, 105,
          2,  20,  23,  40,  43,  60,  63,  80,  83, 100, 104,
          1,  21,  22,  41,  42,  61,  62,  81,  82, 101, 103,
         11, 113, 102,   0, 114
    };
#endif

LedDriver::LedDriver()
{
    strip = new Adafruit_NeoPixel(NUMPIXELS, PIN_LEDS_DATA, NEOPIXEL_TYPE);
    strip->begin();
}

LedDriver::~LedDriver()
{
}

void LedDriver::clear()
{
    strip->clear();
}

void LedDriver::show()
{
  if ( mode != MODE_BLANK && (( mode == MODE_TIME && settings.mySettings.enable_bg_color == 1) || settings.mySettings.enable_bg_color == 2 ))
  {
    uint8_t red   = brightness * 0.0039 * (settings.mySettings.bg_color>> 16 & 0xFF);
    uint8_t green = brightness * 0.0039 * (settings.mySettings.bg_color>> 8 & 0xFF);
    uint8_t blue  = brightness * 0.0039 * (settings.mySettings.bg_color & 0xFF);
    for ( uint8_t num = 0 ; num < 110; num++)
    {
      if ( strip->getPixelColor(ledMap[num]) == 0)
      {
        strip->setPixelColor(ledMap[num], red, green, blue);
      }
    }
  }
  strip->show();
}

void LedDriver::setPixel(uint8_t x, uint8_t y, uint8_t color, uint8_t brightness)
{
    uint8_t red   = brightness * 0.0039 * defaultColors[color].red;
    uint8_t green = brightness * 0.0039 * defaultColors[color].green;
    uint8_t blue  = brightness * 0.0039 * defaultColors[color].blue;
    setPixelRGB(x, y, red, green, blue);
}

void LedDriver::setPixel(uint8_t num, uint8_t color, uint8_t brightness)
{
    uint8_t red   = brightness * 0.0039 * defaultColors[color].red;
    uint8_t green = brightness * 0.0039 * defaultColors[color].green;
    uint8_t blue  = brightness * 0.0039 * defaultColors[color].blue;
    setPixelRGB(num, red, green, blue);
}

void LedDriver::setPixelRGB(uint8_t x, uint8_t y, uint8_t red, uint8_t green, uint8_t blue)
{
    setPixelRGB(x + y * 11, red, green, blue);
}

void LedDriver::setPixelRGB(uint8_t num, uint8_t red, uint8_t green, uint8_t blue )
{

  if ( NEOPIXEL_TYPE == NEO_WRGB + NEO_KHZ800 || NEOPIXEL_TYPE == NEO_GRBW + NEO_KHZ800 )
  {

#ifdef NEOPIXEL_FARBTEMPERATUR:
/* Mit Einstellen der Farbtemperatur: */
  // Reference, currently set to 4500k white light:
  // https://andi-siess.de/rgb-to-color-temperature/
    const uint8_t kWhiteRedChannel = temp_red;
    const uint8_t kWhiteGreenChannel = temp_green;
    const uint8_t kWhiteBlueChannel = temp_blue;
    
    static_assert(kWhiteRedChannel >= 255 || kWhiteGreenChannel >= 255 || kWhiteBlueChannel >= 255, "RGB Channel > 255 nicht erlaubt!");
    
    double whiteValueForRed = red * 255.0 / kWhiteRedChannel;
    double whiteValueForGreen = green * 255.0 / kWhiteGreenChannel;
    double whiteValueForBlue = blue * 255.0 / kWhiteBlueChannel;
  
    double minWhiteValue = min(whiteValueForRed, min(whiteValueForGreen, whiteValueForBlue));
    uint8_t white = (minWhiteValue <= 255 ? (uint8_t) minWhiteValue : 255);
  
    red   = (uint8_t)(red - minWhiteValue * kWhiteRedChannel / 255);
    green = (uint8_t)(green - minWhiteValue * kWhiteGreenChannel / 255);
    blue  = (uint8_t)(blue - minWhiteValue * kWhiteBlueChannel / 255);
    strip->setPixelColor(ledMap[num], red, green, blue, white / whiteboost);
#else
/* Ohne Einstellen der Farbtemperatur: */
    uint8_t white = 0xFF;
    if ( red < white ) white = red;
    if ( green < white ) white = green;
    if ( blue < white ) white = blue;
    strip->setPixelColor(ledMap[num], red-white, green-white, blue-white, white);
#endif
   
  }
  else
  {
    strip->setPixelColor(ledMap[num], red, green, blue);
  }
    
}
#endif
