void touch()
{
   RL=LOW;
  LR=LOW;
  TSPoint p;
  p = ts.getPoint(); 
  p = ts.getPoint();


  // if sharing pins, you'll need to fix the directions of the touchscreen pins
  //pinMode(XP, OUTPUT);
  pinMode(XM, OUTPUT);
  pinMode(YP, OUTPUT);
  //pinMode(YM, OUTPUT);

 
   if (p.z > MINPRESSURE && p.z < MAXPRESSURE) {
    // scale from 0->1023 to tft.width
    p.x = map(p.x, TS_MINX, TS_MAXX, tft.width(), 0);
    p.y = map(p.y, TS_MINY, TS_MAXY, tft.height(), 0);
     }
   if(p.x==0)
   p.y=0;
// Serial.println(p.y);
//  Serial.print("  ");
//  Serial.println(p.y/10);
xpos=p.x;
ypos=p.y;
}
boolean tap()
{
  if(xpos>0)
  return(HIGH);
  else
  return(LOW);
}
boolean tap_right()
{
  if(ypos>100&&ypos<300)
  return(HIGH);
  else
  return(LOW);
}
boolean tap_left()
{
  if(ypos>800)
  return(HIGH);
  else
  return(LOW);
}
boolean tap_center()
{
  if(ypos<750&&ypos>300)
  return(HIGH);
  else
  return(LOW);
}

