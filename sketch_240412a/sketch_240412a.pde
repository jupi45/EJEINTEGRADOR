PImage img;

void setup() {
  fullScreen();
  img = loadImage("1.png"); //cambiar el your_image.jpg por el nombre de la imagen
}

void draw() {
  image(img, 0, 0, width, height);
}
