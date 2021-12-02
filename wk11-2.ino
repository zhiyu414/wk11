#include <BluetoothSerial.h>
BluetoothSerial BT;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  BT.begin("rita");//請改名
  pinMode(12,OUTPUT);
  pinMode(14,OUTPUT);
  pinMode(27,OUTPUT);
  pinMode(26,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (BT.available()) {
    //讀取藍芽資料
     char BTdata=BT.read();
    //顯示在序列視窗
    Serial.println(BTdata);
    
    if(BTdata=='a'){
      
      
      digitalWrite(27,HIGH);
      }
    if(BTdata=='b'){
      
      digitalWrite(26,HIGH);
      }

      if(BTdata=='c'){
      
      
      digitalWrite(12,HIGH);
      }
      if(BTdata=='d'){
      
      
      digitalWrite(14,HIGH);
      }
    
      if(BTdata=='e'){
       digitalWrite(12,LOW);
        digitalWrite(14,LOW);
         digitalWrite(27,LOW);
          digitalWrite(26,LOW);
     }
//    switch(BTdata){
//    case 'a':
//    digitalWrite(27,HIGH);
//    break;
//    case 'a':
//    digitalWrite(12,LOW);
//    break;
//    }
 }
   
  delay(1);
}
