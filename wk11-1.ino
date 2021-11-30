#include <BluetoothSerial.h>
BluetoothSerial BT;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  BT.begin("rita");//請改名
  pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (BT.available()) {
    //讀取藍芽資料
     char BTdata=BT.read();
    //顯示在序列視窗
    Serial.println(BTdata);
//    if(BTdata='b'){
//      digitalWrite(12,HIGH);
////      fflush(stdin);
//     }
//    else {
//      digitalWrite(12,LOW);
//      }
    switch(BTdata){
    case 'b':
    digitalWrite(12,HIGH);
    break;
    case 'a':
    digitalWrite(12,LOW);
    break;
    }
 }
   
  delay(1);
}
