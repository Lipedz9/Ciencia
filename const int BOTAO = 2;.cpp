const int BOTAO = 2;
const int LED = 12;
int x = 0;

void setup() {
  pinMode (BOTAO, INPUT);
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop () {
  x = digitalRead(BOTAO);
  Serial.println(x);

 digitalWrite(LED, x);
}