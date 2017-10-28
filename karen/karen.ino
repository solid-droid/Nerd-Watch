
#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_TFTLCD.h> // Hardware-specific library
#include <TouchScreen.h>
#include "RTClib.h"
RTC_Millis rtc;
#define LCD_CS A3 // Chip Select goes to Analog 3
#define LCD_CD A2 // Command/Data goes to Analog 2
#define LCD_WR A1 // LCD Write goes to Analog 1
#define LCD_RD A0 // LCD Read goes to Analog 0
#define LCD_RESET A4 // Can alternately just connect to Arduino's reset pin
#define YP A3  // must be an analog pin, use "An" notation!
#define XM A2  // must be an analog pin, use "An" notation!
#define YM 9   // can be a digital pin
#define XP 8   // can be a digital pin
#define TS_MINX 150
#define TS_MINY 120
#define TS_MAXX 920
#define TS_MAXY 940
// We have a status line for like, is FONA working
#define STATUS_X 10
#define STATUS_Y 65
// Assign human-readable names to some common 16-bit color values:
#define  BLACK   0x0000
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF
#define MINPRESSURE 10
#define MAXPRESSURE 1000
int px[20],py[20], diffx[20],diffy[20];
byte up=0,down=0,left=0,right=0;
boolean RL=LOW;
boolean LR=LOW;
boolean sleep=HIGH,homep=LOW,dev=LOW,script=LOW;
byte count=0;
byte time_1=0,time_karen=0;
int xpos=0,ypos=0;
int temp_sec=0,temp_min=0,temp_hr=0;
byte home_sec=0;
byte scr=5;
boolean sd_flag=LOW;
boolean dev_flag=LOW;
Adafruit_TFTLCD tft(LCD_CS, LCD_CD, LCD_WR, LCD_RD, LCD_RESET);
TouchScreen ts = TouchScreen(XP, YP, XM, YM, 300);
// If using the shield, all control and data lines are fixed, and
// a simpler declaration can optionally be used:
// Adafruit_TFTLCD tft;


void setup( ) 
{
Serial.begin(9600);
screen_setup();
boot();
rtc.begin(DateTime(F(__DATE__), F(__TIME__)));
set_time();
}


void loop() 
{
touch();
delay(1);
if(sleep==HIGH)
sleep_page();
else if(homep==HIGH)
  home_page();
else if(dev==HIGH)
dev_page();
else if(script==HIGH)
script_page();
else if(dev_flag==HIGH)
dev_IDE();
else if(sd_flag==HIGH)
sd_access();

if(tap()==HIGH&&sleep==HIGH)
{
  sleep=LOW;
  homep=HIGH;
  tft.fillScreen(BLACK);
}
 delay(100); 
}

