import controlP5.*;
ControlP5 cp5;

int State;

void setup() {
  size(640, 480);

  cp5 = new ControlP5(this);

  ControlFont cf1 = new ControlFont(createFont("BIZ UDゴシック", 16));

  cp5.addButton("FigChange")
     .setLabel("図形切替")
     .setFont(cf1)
     .setPosition(50, 400)
     .setSize(120, 40)
     .setColorActive(color(0, 40))
     .setColorBackground(color(#9609B9))
     .setColorForeground(color(#BD0CEA))
     .setColorCaptionLabel(color(#FBF5FC));

  State = 0;
  println("初期値　　　　：状態 = " + State);

  PFont font = createFont("BIZ UDゴシック", 16, true);
  textFont(font);
}

void draw() {
  background(#750B8E);

  switch(State) {
    case 0:
      text("なし", 85, 350);
      break;
    case 1:
      ellipse(120, 100, 180, 120);
      text("楕円", 85, 350);
      break;
    case 2:
      triangle(50, 150, 100, 20, 240, 200);
      text("三角形", 85, 350);
      break;
    case 3:
      quad(38, 31, 180, 20, 150, 200, 30, 120);
      text("四角形", 85, 350);
      break;
    default:
  }
}

void FigChange() {
  State++;
  if (State > 3) {
    State = 0;
  }
  println("図形切替の押下：状態 = " + State);
}

