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
}

void draw() {
  background(#302F31);

  if (img != null) {
    image(img, 10, 10, width / 2, height / 2);
  }
}

void ImageDisp() {
  img = loadImage("sample1.jpg");
}

