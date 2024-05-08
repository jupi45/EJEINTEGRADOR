#define TRIGGER_PIN 2 // Pin del Arduino conectado al pin de trigger del sensor ultrasónico
#define ECHO_PIN 3    // Pin del Arduino conectado al pin de echo del sensor ultrasónico
#define DISTANCE_THRESHOLD 20 // Distancia umbral en centímetros para considerar que un objeto está cerca

void setup() {
  Serial.begin(9600); // Inicializa la comunicación serial
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

void loop() {
  long duration, distance;
  
  // Envía un pulso de 10us al pin de trigger
  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, LOW);
  
  // Mide la duración del pulso de eco
  duration = pulseIn(ECHO_PIN, HIGH);
  
  // Calcula la distancia en centímetros
  distance = duration * 0.034 / 2;
  
  // Imprime la distancia medida en el monitor serial
  Serial.print("Distancia: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  // Comprueba si la distancia medida es menor que el umbral
  if (distance < DISTANCE_THRESHOLD) {
    Serial.println("¡Objeto detectado!");
    // Aquí puedes agregar el código para cualquier acción que desees realizar cuando se detecta un objeto
  }
  
  delay(100); // Espera 100ms antes de tomar otra medición
}