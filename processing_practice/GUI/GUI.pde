import controlP5.*;

ControlP5 cp5;

PImage img;

void setup() {
  size(640, 480);

  cp5 = new ControlP5(this);
  ControlFont cf1 = new ControlFont(createFont("BIZ UDゴシック", 16));

  cp5.addButton("ImageDisp")
     .setLabel("画像表示")
     .setFont(cf1)
     .setPosition(50, 400)
     .setSize(120, 40);

  cp5.addTextfield("ImageFileInput")
     .setLabel("画像ファイル名")
     .setFont(cf1)
     .setAutoClear(false)
     .setPosition(50, 300)
     .setSize(120, 40);
}

void draw() {
  background(#302F31);

  if (img != null) {
    image(img, 10, 10, width / 2, height / 2);
  }
}

String FileName;

void ImageDisp() {
  if (FileName != null) {
    img = loadImage(FileName);
  }
}

void ImageFileInput(String Text) {
  println("入力文字列" + Text);
  FileName = Text;
}

