int DC = 9; 

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(DC, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // speed up
  for (int i = 0; i <= 255; i+=5){
    Serial.print(String(i) + ", ");
    analogWrite(DC, i);
    delay(50);
  }

  delay(5000);
  //slow down
  for (int i = 255; i+= 0; i-=5)
  {
    Serial.print(String(i) + ", ");
    analogWrite(DC, i);
    delay(50);

  }
  Serial.println("");
  delay(5000);
}
