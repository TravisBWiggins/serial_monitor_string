int bluePin = 10;
int greenPin = 11;
int redPin = 12;
String ledColor;


void setup() {
  // put your setup code here, to run once:
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("What colour would you like?: ");
  while(Serial.available() == 0)
  ;

  ledColor  = Serial.readString();
  ledColor.toUpperCase();

  if(ledColor == "RED")
  {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  }
  if(ledColor == "BLUE")
  {
    digitalWrite(bluePin, HIGH);
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
  }
  if(ledColor =="GREEN")
  {
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);
    digitalWrite(redPin, LOW);
  }

  if(ledColor == "OFF")
  {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  }


}
