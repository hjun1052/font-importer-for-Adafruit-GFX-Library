# font-importer-for-Adafruit-GFX-Library
  Imports 52 fonts for Arduino Adafruit GFX Library with just one line of code

# How to use
  1. [Download](/hjun1052/font-importer-for-Adafruit-GFX-Library/archive/refs/heads/main.zip) & Move this file to [Arduino gfx library](https://github.com/adafruit/Adafruit-GFX-Library) folder
  2. Open your arduino code
  3. Place this code on top of your script:
  ```cpp
    #include "Adafruit_GFX.h" //Arduino GFX Library
    #include "allFonts.h" //Font importer
  ```

# example
  this is an example of a TFT LCD 2.4" using font-importer-for-Adafruit-GFX-Library:
  ```cpp
    #include "Adafruit_GFX.h"
    #include "MCUFRIEND_kbv.h"  // Hardware-specific library

    #include "allFonts.h"
    MCUFRIEND_kbv tft;

    void setup() {
      uint16_t ID = tft.readID();
      tft.reset();
      tft.begin(ID);
      tft.fillScreen(TFT_BLACK);
      tft.setCursor(245, 120);
      tft.setFont(&FreeSansBold12pt7b);
      tft.println("example");
    }

    void loop() {
      //your code here
    }
  ```
