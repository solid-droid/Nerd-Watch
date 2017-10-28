void dev_IDE()
{
text(10,10,2);
tft.print("IDE");
draw_io(0,10);
draw_io(100,-10);
draw_io(200,10);
draw_io(100,100);
draw_dev_home();  
dev_men();  
touch();
dev_button();

}
void draw_io(int x,int y)
{
  tft.drawCircle(60+x, 90+y, 40, CYAN);
  tft.drawCircle(60+x, 90+y, 42, GREEN);
  tft.drawCircle(59+x, 90+y, 41, MAGENTA);
  tft.drawCircle(59+x, 90+y, 40, YELLOW);
  tft.drawCircle(60+x, 91+y, 41, RED);
}

void draw_dev_home()
{
text(30,95,2);
tft.print("INPUT");
text(137,70,2);
tft.print("HACK");
text(225,95,2);
tft.print("OUTPUT");
text(137,185,2);
tft.print("LOOP");
}
void dev_men()
{
  text(250,210,2);
tft.print("SAVE");
  text(20,210,2);
tft.print("BACK");
}
void dev_button()
{
  if(ypos>630&&xpos<550&&xpos>300)
  dev_input();
  else if(ypos>400&&ypos<550&&xpos>280&&xpos<510)
  dev_hack();
  else if(ypos>130&&ypos<320&&xpos>300&&xpos<550)
  dev_output();
  else if(ypos>400&&ypos<550&&xpos>610&&xpos<850)
  dev_loop();
  else if(ypos>630&&xpos>750)
  dev_back();
  else if(ypos<300&&ypos>10&&xpos>750)
  dev_save();
}

void dev_input()
{
  Serial.println("INPUT");
  dev_IDE();
}


void dev_hack()
{
  Serial.println("HACK");
  dev_IDE();
}


void dev_output()
{
  Serial.println("OUTPUT");
  dev_IDE();
}


void dev_loop()
{
  Serial.println("LOOP");
  dev_IDE();
}


void dev_back()
{
  Serial.println("BACK");
  dev=HIGH;
  dev_flag=LOW;
  tft.fillScreen(BLACK);
}


void dev_save()
{
  Serial.println("SAVE");
  dev_IDE();
}


