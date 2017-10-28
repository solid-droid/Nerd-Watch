void text(int x,int y,byte s)
{
   #Sets text data
    tft.setCursor(x,y);
    tft.setTextColor(WHITE);
    tft.setTextSize(s);
    tft.setTextWrap(HIGH);

}

