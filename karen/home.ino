void home_page()
{
DateTime now = rtc.now();  
if(tap_center()==LOW)
blink_eyes();
else
{
  tri_eyes();
tft.fillRect(100,150,200,200,BLACK);
text(10,150,3);
tft.print("Hey cut that out");
delay(1000);
tft.fillRect(10,150,350,300,BLACK);
}
text(100,150,3);
tft.print("Hello!!");
if(tap_left()==HIGH)
{
  homep=LOW;
  script=HIGH;
  tft.fillScreen(BLACK);
  temp_second();
}
else if(tap_right()==HIGH)
{
  homep=LOW;
  dev=HIGH;
  tft.fillScreen(BLACK);
  temp_second();
}

}
