void close_eyes()
{
tft.fillRoundRect(60,35,70,70,10,BLACK);
tft.fillRoundRect(180,35,70,70,10,BLACK);
}
void open_eyes()
{
tft.fillRoundRect(60,40,70,70,10,WHITE);
tft.fillRoundRect(180,40,70,70,10,WHITE);
}

void blink_eyes()
{
  DateTime now = rtc.now();
  if(temp_sec>50)
  temp_sec=0;
  if(now.second()<temp_sec+5)
 {
 open_eyes();
 }
else if(now.second()<temp_sec+6)
{
 close_eyes();
}
else
temp_sec=now.second();
}

void tri_eyes()
{
  tft.fillTriangle(60,40,130, 100, 130,40,BLACK);
  tft.fillTriangle(250,40, 180, 100, 180,40,BLACK);
}

