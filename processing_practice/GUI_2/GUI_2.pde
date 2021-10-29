import controlP5.*;
ControlP5 cp5;

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
}

void draw() {
  background(#750B8E);
}

