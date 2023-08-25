const int FVERMELHO = 11;
const int FAMARELO = 10;
const int FVERDE = 9;
const int PVERMELHO = 5;
const int PVERDE = 4; 
const int BOTAO = 2;
int vbotao = 0;


void setup() {
  pinMode(FVERDE, OUTPUT);
  pinMode(FAMARELO, OUTPUT);
  pinMode(FVERMELHO, OUTPUT);
  
  pinMode(PVERMELHO, OUTPUT);
  pinMode(PVERDE, OUTPUT);
  
  pinMode(BOTAO, INPUT);
  Serial.begin (9600);
 
  }
  void loop (){
   vbotao = digitalRead(BOTAO);
   
  digitalWrite (FVERDE, HIGH);
  digitalWrite (FVERMELHO, LOW);
  digitalWrite (PVERMELHO, HIGH);
  digitalWrite (PVERDE, LOW);
   
  if (vbotao == 1)
  {
    FP ();
    }
  }  
    void FP ()
 {
  delay(5000);
  digitalWrite(FVERDE, LOW);

  digitalWrite(FAMARELO, HIGH);
  delay(2000);
  digitalWrite(FAMARELO, LOW);

  digitalWrite(FVERMELHO, HIGH);
  digitalWrite(PVERMELHO, LOW);
  digitalWrite(PVERDE, HIGH);
  delay(5000);
  digitalWrite(PVERDE, LOW);
  piscar ();
  digitalWrite(PVERMELHO,HIGH);
  digitalWrite(FVERMELHO, LOW);
  }

  void FP (int L, int D)
  {
    delay(5000);
  }

  void piscar ()
  {
    for (int i = 500; i > 1; i = i - 30)
   {
   digitalWrite(PVERMELHO, HIGH);
   delay(i);
   digitalWrite(PVERDE, LOW);
   delay(i);
   }
  }