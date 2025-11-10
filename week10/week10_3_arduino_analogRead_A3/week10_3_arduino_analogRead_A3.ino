//week10_3_arduino_analogRead_A3
//把Joystick 的 Y的線,經由麵包版幫忙,接到MAKERUNO 另一邊的A3
void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT_PULLUP);
  //pinMode(3,INPUT);//有小蟲符號
  pinMode(8,OUTPUT);//發出聲音
}

void loop() {
  // put your main code here, to run repeatedly:
  int now = analogRead(A3);
  if(now > 800){//變高
    tone(8, 523, 100);// 發出523 的 do
    delay(200);
    tone(8, 784, 100);// 發出784 的 so
    delay(200);//等久一點
  }else if(now < 200){//變低
    tone(8, 784, 100);// 發出784 的 so
    delay(200);
    tone(8, 523, 100);// 發出523 的 do
    delay(200);
  }
}
