void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

int bright = 0;
int incr = +5;

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(LED_BUILTIN, bright);
  Serial.print("Brightness : ");
  Serial.println(bright);
  delay(1000);
  bright += incr;
  if(bright >= 255){

    incr = -5;
  }else if(bright <= 0){

    incr =+5;
  }
}
