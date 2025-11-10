//week10_4_arduino_serial_monitor_joystick_Serial_println
//修改自week10_3_arduino_analogRead_A3
//把Joystick 的 Y的線,經由麵包版幫忙,接到MAKERUNO 另一邊的A3
void setup() {
  Serial.begin(9600);//開啟 USB 傳輸
  pinMode(2, INPUT_PULLUP);
  pinMode(8,OUTPUT);//發出聲音
}

void loop() {//一秒鐘,會跑 1000HZ, 太快了, 要慢一點才行
  delay(100);// 慢一點, 避免processing 來不及處理
  int now = analogRead(A3);
  Serial.println(now);
  //想利用 Serial Monitor 來看看會送出什麼訊號

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
