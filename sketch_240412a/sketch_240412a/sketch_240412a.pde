PImage img, smallImg;
int y = 0;

void setup() {
  fullScreen();
  img = loadImage("../assets/1.png"); //cambiar el your_image.jpg por el nombre de la imagen
  smallImg = loadImage("../assets/gatico.jpg"); // imágen chiquita
  noCursor();
  frameRate(60);
}

void draw() {
  image(img, 0, 0, width, height);
  //image(smallImg, mouseX, mouseY, smallImg.width/2, smallImg.height/2);  //Mueve con el ratón
  image(smallImg, 30 + y%width/2, 30, smallImg.width/2, smallImg.height/2);
  y= y+10; //Mueve solo (Anima)
}

void mouseMoved() {
  // mueve la imagen conforme la posición del mouse
}
