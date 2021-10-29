void setup() {
  size(400, 200);
  PFont font = createFont("Noto Sans JP", 18, true);
  textFont(font);
}

void draw() {
  background(#FAFAFA);
  
  fill(#707070);
  text("Hello World こんにちは", 15, 20);
}
