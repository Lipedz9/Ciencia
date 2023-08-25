const int TRIG = 13;
const int ECHO = 10;

float tempo = 0;

const float VelocidadeSom_mPors = 340;
const float VelocidadeSom_mPorus = 0.000340;


void setup(){
  Serial.begin(9600);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  }

  void loop(){
    disparoultra();
    tempo = pulseIn(ECHO, HIGH);
    Serial.print("Metros: ");
    Serial.println(CalculaDistancia(tempo));
    delay(500);
   }
  void disparoultra()
   {
    digitalWrite(TRIG,HIGH);
    delay(500);
    digitalWrite(TRIG,LOW);
   }
   float CalculaDistancia(float tempo_us){
    return ((tempo_us*VelocidadeSom_mPorus)/2);
   }
    