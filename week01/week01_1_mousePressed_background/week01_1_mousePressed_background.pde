//week01_1_mousePressed_background
// 桌面processing 資料夾，啟動
// file-Preference 字形放大
void setup(){//設定視窗大小
  size(500,500);
}
void draw(){
  //用mouse來互動
  if(mousePressed) background(#FF0000);
  else background(#00FF00);
}//按三角形執行run
//File-Save As 存到桌面week01_1_mousePressed_background
