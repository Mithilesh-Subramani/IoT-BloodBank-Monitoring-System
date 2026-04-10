#define TEMP_PIN A0
#define RED_LED 8
#define GREEN_LED 9
#define BUZZER 10

void setup() {
  Serial.begin(9600);

  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(TEMP_PIN);

  float voltage = sensorValue * (5.0 / 1023.0);
  float temperature = (voltage - 0.5) * 100; // TMP36

  Serial.print("Temperature: ");
  Serial.println(temperature);

  if (temperature > 6) {
    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(BUZZER, HIGH);
  } else {
    digitalWrite(RED_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(BUZZER, LOW);
  }

  delay(1000);
}