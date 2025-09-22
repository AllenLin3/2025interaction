//week03_7_processiong_mouse_serial_write
import processing.serial.*;
Serial myPort; 
void setup(){
  size(400, 400);
  myPort = new Serial(this, "COM6", 9600);
}//剛剛在Arduino裡 COM是多少就多少
void mousePressed(){
  myPort.write('b');//mouse按下時，就送'b' 出去
}
void draw(){
  if(mousePressed) background(#FF0000);
  else background(#00FF00);
}
