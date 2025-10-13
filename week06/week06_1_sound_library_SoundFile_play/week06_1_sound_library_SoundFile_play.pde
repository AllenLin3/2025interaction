//week06_1_sound_library_SoundFile_play
//File-Preference 字型改大
//Sketch=Library-MangeLibraries, 找sound 安裝他
// File-Examples-Libraries核心函式庫- sound-soundfile- SimplePlayback
//這個範例有聲音、有相關函式可以學習參考
import processing.sound.*;// 使用聲音外掛模組
SoundFile sound;// 宣告SoundFile 物件變數
void setup(){
   size(500,400);//視窗大小
   sound = new SoundFile(this, "music.mp3");// 將音樂檔設定好
   //老師提供music.mp3, 要拉到程式裡
   sound.play();//播放聲音
}
void draw(){
  
}
