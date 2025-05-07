// 18 Maret 2019  | by : raqhamedia

int redPin = 7; // Deklarasi pin 7 untuk warna Merah
int greenPin = 6; // Deklarasi pin 6 untuk warna Hijau
int bluePin = 5; // Deklarasi pin 5 untuk warna Biru

void setup() {
  pinMode (redPin, OUTPUT);
  pinMode (greenPin, OUTPUT);
  pinMode (bluePin, OUTPUT);
}

void loop() {
  setColor(255, 0, 0); // set menjadi warna Merah
  delay(500);
  setColor(0, 255, 0); // set menjadi warna Hijau
  delay(500);
  setColor(0, 0, 255); // set menjadi warna Biru
  delay(500);
  setColor(255, 255, 255); // set menjadi warna Putih
  delay(500);
}

void setColor (int redValue, int greenValue, int blueValue) {
  analogWrite (redPin, redValue);
  analogWrite (greenPin, greenValue);
  analogWrite (bluePin, blueValue);
}
