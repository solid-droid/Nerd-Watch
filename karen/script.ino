void script_page()
{
if(sd_flag==LOW)
{
  text(60,80,5);
  tft.print("Script");
  text(60,130,3);
  tft.print("Mode");
}  
if(tap_center()==HIGH)
if(sd_flag==LOW)
  {
    script=LOW;
    sd_flag=HIGH;
    tft.fillScreen(BLACK);
  }

  if(tap_right()==HIGH)
{
  homep=HIGH;
  script=LOW;
  tft.fillScreen(BLACK);
  temp_second();
  sd_flag=LOW;
}
}

