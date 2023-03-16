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
