void screen_setup()
{
    
   tft.reset();
   uint16_t identifier = tft.readID();
  if(identifier==0x0101)
      identifier=0x9341;
   tft.begin(identifier);
   tft.fillScreen(BLACK);
   tft.setRotation(1);

}
void boot()
{
  text(20,70,3);
  tft.print("Nerd Watch v1.0");
  text(50,120,3);
  tft.print("Loading");
  delay(200);
  tft.print(".");
  delay(200);
  tft.print(".");
  delay(200);
  tft.print(".");
  delay(200);
  tft.print(".");
  delay(200);
  tft.print(".");
  tft.fillScreen(BLACK);
}

