const int LEDVERMELHO = 11;
const int LEDVERDE = 10;

#include <Keypad.h>

const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {9, 8, 7, 6}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {5, 4, 3, 2}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

#include <Servo.h>
Servo srvmotor;
char* password = "666";
 int position = 0;

void setup(){
  Serial.begin(9600);
  pinMode (LEDVERMELHO, OUTPUT);
  pinMode (LEDVERDE, OUTPUT);
  srvmotor.attach(13);
  setLocked(true);
  
  
}
  
void loop(){
  char customKey = customKeypad.getKey();
  
  if (customKey == '*' || customKey == '#' )
  {
    position = 0;
    setLocked(true);
  }
  if (customKey == password[position])
  {
    position++;
  }
  if (position == 3)
  {
    setLocked(false);
  }
  
}
void setLocked(int locked)
{
  if (locked)
  {
    digitalWrite(LEDVERMELHO, HIGH);
    digitalWrite(LEDVERDE, LOW);
    srvmotor.write(0);
  }
  else
  {
    digitalWrite(LEDVERMELHO, LOW);
     digitalWrite(LEDVERDE,HIGH);
    srvmotor.write(82);
  }
}