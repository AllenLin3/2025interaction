//week03_8_processiong_mouse_serial_write_space
import processing.serial.*;
Serial myPort; 
void setup(){
  size(400, 400);
  myPort = new Serial(this, "COM6", 9600);
}//剛剛在Arduino裡 COM是多少就多少
void mousePressed(){
  if(mouseButton==LEFT)myPort.write('b');//mouse按下時，就送'b' 出去
  if(mouseButton==RIGHT)myPort.write(' ');//mouse按下時，就送' ' 出去
}
void draw(){
  if(mousePressed) background(#FF0000);
  else background(#00FF00);
}
