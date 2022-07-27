/*
 * Forbiddenbit.com
 */
 
void setup() {
  Serial.begin(9600);

  pinMode(A0, INPUT); // initialize Right sensor as an inut
  pinMode(A1, INPUT); // initialize Left sensor as as input

}

void loop() {

  int LEFT_SENSOR = analogRead(A0);
  int RIGHT_SENSOR = analogRead(A1);

  Serial.println("right:");
  Serial.println(RIGHT_SENSOR);
  Serial.println("left:");
  Serial.println(LEFT_SENSOR);
  
  delay(300);  
}
