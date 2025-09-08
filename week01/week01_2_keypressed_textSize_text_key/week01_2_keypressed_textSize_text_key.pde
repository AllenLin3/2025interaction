//File-New(Ctrl-N)開新的專案
//week01_2_keypressed_textSize_text_key
void setup(){
  size(500,500);
}
void draw(){//用鍵盤來互動
  if(keyPressed){ //記得關掉注音輸入法
    background(#FF0000);//紅色背景
    textSize(80);//很大的字形
    text(""+key, 100, 100);
  }
}
