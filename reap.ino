const int LED_PIN = 9;
const int LED_PIN = 2 ;
const int POT_PIN=A0 ;

bool modeOn=True ;
unsigned long lastDebounceTime=0 ;
const unsigned long debaunceDelay=40 ;
int lastBtnReading=HIGH ;
int lastBtnState=HIGH ;
unsigned long lastPrint=0 ;
int lastBtnReading=HIGH;
int stableBtnState=HIGH ;
unsigned long lastprint = 0;
// today this will recap after a long time 
