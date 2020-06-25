const int pin_in1 = 2;
const int pin_in2 = 3;
const int pin_in3 = 4;
const int pin_in4 = 5;
const int output_table[8] = {0b01000, 0b01100, 0b00100, 0b00110,
                             0b00010, 0b00011, 0b00001, 0b01001};
int delaytime_ms = 30;

void initOutputPin(){
  pinMode(pin_in1, OUTPUT);
  pinMode(pin_in2 , OUTPUT);
  pinMode(pin_in3, OUTPUT);
  pinMode(pin_in4, OUTPUT);
}
void setOutputPin(int num) {
  digitalWrite(pin_in1, bitRead(output_table[num], 0));
  digitalWrite(pin_in2, bitRead(output_table[num], 1));
  digitalWrite(pin_in3, bitRead(output_table[num], 2));
  digitalWrite(pin_in4, bitRead(output_table[num], 3));
}

void setup(){
  initOutputPin();
}

void loop(){
  for (int i = 0; i < 8; i++){
//  for (int i = 7; i >= 0; i--){       //to change direction
    setOutputPin(i);
    delay(delaytime_ms);
  }
}