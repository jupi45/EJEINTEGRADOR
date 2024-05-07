//proyecto final
//fotos  (dibujos e imagenes) y  texto  (explicativo). Tal vez le meteriamos animacion pero aun no hay un acuerdo fijo
PImage fondo; 

void setup() {
  size(750, 750); 
  
  fondo = loadImage("fondo2.png"); 
  fondo.resize(750, 750); 
}

void draw() {
 
  image(fondo, 0, 0); 
}
