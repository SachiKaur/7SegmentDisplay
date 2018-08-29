void setup()
{
  DDRB = 0b00000011; //B0-B1(Set as output); DDR-Data Direvction Register is used to set the pin as input(0) or output(1)
  DDRD = 0b11111110; //D1-D7(Set as output)

}

const int digit1[] = {0b00000000, 0b11011010, 0b11101110,0b01110010,0b11101100,0b01100000,0b00000000};
const int digit2[] = {0b11011010, 0b11101110,0b01110010,0b11101100,0b01100000,0b00000000,0b00000000};

void loop(){
  for (int i = 0; i < 6; i++){
    for (int del = 0; del < 30; del++)
      {
        PORTB = 0b00000001;
        PORTD = digit1[i];
        delay(10);
        PORTB = 0b00000010;
        PORTD = digit2[i];
        delay(10);
      }
  }
}

