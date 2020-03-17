
RtcDS3231<TwoWire> Rtc(Wire);
int hh=0,mm=0;
int Epoch;
void DateTime(){
    
   RtcDateTime compiled = RtcDateTime(__DATE__, __TIME__);
    if (!Rtc.IsDateTimeValid()) 
    {
        Serial.println("RTC lost confidence in the DateTime!");
        Rtc.SetDateTime(compiled);
    }

    RtcDateTime now = Rtc.GetDateTime();
    
    Rtc.Enable32kHzPin(false);
    Rtc.SetSquareWavePin(DS3231SquareWavePin_ModeNone);
    }

void TempsDetail(){
    RtcDateTime now = Rtc.GetDateTime();
    //Print RTC time to Serial Monitor
    delay(500);
    Serial.println("Date:");
    Serial.print(now.Year(), DEC);
    Serial.print('/');
    Serial.print(now.Month(), DEC);
    Serial.print('/');
    Serial.print(now.Day(), DEC);
    Serial.print(" ");
    Serial.print(now.Hour(), DEC);
    Serial.print(':');
    Serial.println(now.Minute(), DEC);

    Epoch = Rtc.GetDateTime();
    Serial.println(Epoch);

    
    
   

    

}
