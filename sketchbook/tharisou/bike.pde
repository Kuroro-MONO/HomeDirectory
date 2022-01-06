class bike {
  PImage img;
  int x,y;
  int speedX,speedY;
  boolean alive;
  
  import fisica.*;//ライブラリのインポート

FWorld world;//物理演算を司るオブジェクト

void setup() {
 size(500, 500);

 Fisica.init(this);//ライブラリを初期化

 world = new FWorld();//世界を司るオブジェクトを生成
 world.setEdges();//ウィンドウの端に壁を作る
}

void draw() {
 background(255);

 world.step();//物理演算を進める
 world.draw();//オブジェクトを描画
}
 bike(int x, int ey) {
   img = loadImage("bikeman.png");
   alive = true;
   y = ey;

  
