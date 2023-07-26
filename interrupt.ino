#define led 5
#define signal 3
volatile unsigned long newMillis = 0UL;
volatile unsigned long interval = 2000UL;
volatile unsigned long currentMillis;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led, OUTPUT);
pinMode(signal, INPUT_PULLUP);
digitalWrite(led,0);

attachInterrupt(digitalPinToInterrupt(signal), myISR, RISING);

}

void myISR() //things to do when interrupt occurs
{
  
  digitalWrite(led, HIGH);
  currentMillis = millis();
    
}

void loop() {

  Serial.println("hello");

  newMillis= millis();
  if((newMillis-currentMillis) > interval)
    digitalWrite(led, LOW);
    

}