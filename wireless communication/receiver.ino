# include<VirtualWire.h>
void setup(){
  vw_set_ptt_inverted(true);
  vw_set_rx_px(12);
  vw_setup(4000);
  pinMode(5,OUTPUT);
  vx_rx_start();// start the receiver PLL running 
  
}
void loop(){
  unit8_t buf[VW_MAX_MESSAGE_LEN);
  unit8_t buflen=VW_MAX_MESSAGE_LEN;
  if(vw_get_message(buf,&buflen)){
    if(buf[0]=='1'){
      digitalWrite(5,1);
    }
    if(buf[0]=='0'){

      digitalWrite(5,0)
      
      
      
      
      }






    
  }





  
}
