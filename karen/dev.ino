void dev_page()
{
if(dev_flag==LOW)
{
text(25,80,5);
tft.print("Developer");
text(25,130,3);
tft.print("Mode");
}

if(tap_center()==HIGH)
if(dev_flag==LOW)
{
  dev=LOW;
  dev_flag=HIGH;
  tft.fillScreen(BLACK);
}
if(tap_left()==HIGH)
{
  homep=HIGH;
  dev=LOW;
  tft.fillScreen(BLACK);
  temp_second();
  dev_flag=LOW;
}

}


void ico()
{
int rx=260,ry=180;  
tft.drawRect(rx,ry,50,50,WHITE);
text(rx+18,ry+15,3);
tft.print("H");
}

