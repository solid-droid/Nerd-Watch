

void sleep_page()
{
int x=90,y=100;
DateTime now = rtc.now();
text(x,y,3);
if(now.hour()!=temp_hr)
{
  tft.fillRect(x,y,100,100,BLACK);
  text(x,y,3);
}
tft.print(now.hour());
tft.print(":");
if(now.minute()!=temp_min)
{
  tft.fillRect(x+50,y,100,100,BLACK);
  text(x+54,y,3);
}
tft.print(now.minute());
tft.print(":");
if(now.second()!=temp_sec)
{
  tft.fillRect(x+100,y,100,100,BLACK);
  text(x+108,y,3);
}
tft.print(now.second());
temp_sec=now.second();
home_sec=temp_sec;
temp_min=now.minute();
temp_hr=now.hour();
}

