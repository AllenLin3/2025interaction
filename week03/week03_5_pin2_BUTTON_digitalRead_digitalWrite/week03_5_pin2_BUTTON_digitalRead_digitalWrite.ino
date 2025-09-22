//week03_5_pin2_BUTTON_digitalRead_digitalWrite
//手動按按鈕，看到燈 慢慢改變 now 之後 把now還原
void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT_PULLUP); //按鈕button是 2 號， 沒接下去, 就會 拉高
  for(int i=3; i<=13; i++){// 把 pin 3, 4, 5,...,13設成OUTPUT
    pinMode(i, OUTPUT);// 都是可以發光 發亮
  }
}
int now= 3;// 現在發光的是 pin3
void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2)==LOW){// 按下去囉
    now= now +1;
    if(now>13) now=3;
    for(int i=3; i<=13; i++){
      digitalWrite(i, LOW);// 全部先清空，變成 LOW 不亮
    }
    digitalWrite(now, HIGH);// now負責亮
    delay(500);//休息一下,0.5秒,才不會狂亂運作
  }
}
