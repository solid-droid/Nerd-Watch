void text(int x,int y,byte s)
{
    tft.setCursor(x,y);
    tft.setTextColor(WHITE);
    tft.setTextSize(s);
    tft.setTextWrap(HIGH);

}

