int ONE_TIME_UNIT = 500;            // 500 milliseconds is one time unit
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
}
void dot() {
  digitalWrite(LED_BUILTIN, LOW);  // Turn the LED on by making the voltage LOW
  delay(ONE_TIME_UNIT);            // Wait for one unit of time
}
void dash() {
  digitalWrite(LED_BUILTIN, LOW);  // Turn the LED on by making the voltage LOW
  delay(3*ONE_TIME_UNIT);          // Wait for three units of time  
}
void space(int ms) {
  digitalWrite(LED_BUILTIN, HIGH); // Turn the LED off by making the voltage HIGH
  delay(ms);                       // Delay for specified duration  
}

void H(){
  dot();
  space(ONE_TIME_UNIT);
  dot();
  space(ONE_TIME_UNIT);
  dot(); 
  space(ONE_TIME_UNIT);
  dot();
}

void A(){
  dot();
  space(ONE_TIME_UNIT);
  dash();
}

void S(){
  dot();
  space(ONE_TIME_UNIT);
  dot();
  space(ONE_TIME_UNIT);
  dot();
}

void B(){
  dash();
  space(ONE_TIME_UNIT);
  dot();
  space(ONE_TIME_UNIT);
  dot();
  space(ONE_TIME_UNIT);
  dot();
}

void R(){
  dot();
  space(ONE_TIME_UNIT);
  dash();
  space(ONE_TIME_UNIT);
  dot();
}

void O(){
  dash();
  space(ONE_TIME_UNIT);
  dash();
  space(ONE_TIME_UNIT);
  dash();
}

void W(){
  dot();
  space(ONE_TIME_UNIT);
  dash();
  space(ONE_TIME_UNIT);
  dash();
}

void E(){
  dot();
}

void N(){
  dash();
  space(ONE_TIME_UNIT);
  dot();
}

void Y(){
  dash();
  space(ONE_TIME_UNIT);
  dot();
  space(ONE_TIME_UNIT);
  dash();
  space(ONE_TIME_UNIT);
  dash();
}

void U(){
  dot();
  space(ONE_TIME_UNIT);
  dot();
  space(ONE_TIME_UNIT);
  dash();
}

void M(){
  dot();
  space(ONE_TIME_UNIT);
  dot();
  space(ONE_TIME_UNIT);
  dash();
}

// the loop function runs over and over again forever
void loop() {
  A();
  space(4*ONE_TIME_UNIT);
  B();
  space(6*ONE_TIME_UNIT);
  C();
  space(8*ONE_TIME_UNIT);
  D();
  space(5*ONE_TIME_UNIT);
  E();
  space(1*ONE_TIME_UNIT);
  F();
  space(6*ONE_TIME_UNIT);
  G();
  space(7*ONE_TIME_UNIT);
  H();
  space(4*ONE_TIME_UNIT);
  I();
  space(2*ONE_TIME_UNIT);
  J();
  space(10*ONE_TIME_UNIT);
  K();
  space(7*ONE_TIME_UNIT);
  L();
  space(6*ONE_TIME_UNIT);
  M();
  space(6*ONE_TIME_UNIT);
  N();
  space(4*ONE_TIME_UNIT);
  O();
  space(9*ONE_TIME_UNIT);
  P();
  space(8*ONE_TIME_UNIT);
  Q();
  space(10*ONE_TIME_UNIT);
  R();
  space(5*ONE_TIME_UNIT);
  S();
  space(3*ONE_TIME_UNIT);
  T();
  space(3*ONE_TIME_UNIT);
  U();
  space(5*ONE_TIME_UNIT);
  V();
  space(6*ONE_TIME_UNIT);
  W();
  space(7*ONE_TIME_UNIT);
  X();
  space(8*ONE_TIME_UNIT);
  Y();
  space(10*ONE_TIME_UNIT);
  Z();
  space(8*ONE_TIME_UNIT);
}
