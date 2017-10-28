void set_time()
{
  rtc.adjust(DateTime(2017, 10, 17, 21, 17, 57));
}

void temp_second()
{
  DateTime now = rtc.now(); 
  temp_sec=now.second();
}

