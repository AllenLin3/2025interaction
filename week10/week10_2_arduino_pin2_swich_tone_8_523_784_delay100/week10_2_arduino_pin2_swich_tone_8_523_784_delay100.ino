//week10_2_arduino_pin2_swich_tone_8_523_784_delay100
void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT_PULLUP);//拉高,變成5V。真的按下去,變成0V(GND接地)
  pinMode(8,OUTPUT);//要記得這行才有聲音
}//pin2 變成按鈕, 可以HIGH高(沒按) 可以LOW低(按)

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2)==LOW){//如果 pin 2 有按下去
    tone(8, 523, 100);// 發出523 的 do
    delay(100);
    tone(8, 784, 100);// 發出784 的 so
    delay(100);
  }
}
