
int proxSensor = 2;
int proxSensor2 = 3;

void setup() {
 Serial.begin(115200);
}

void loop() {
//    val = analogRead(proxSensor);
    Serial.print(analogRead(proxSensor));
    Serial.print(" ");
    Serial.println(analogRead(proxSensor2));
    delay(25);  // we have to make a delay to avoid overloading the serial port
}
