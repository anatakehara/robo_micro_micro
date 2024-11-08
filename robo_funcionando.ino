#define esquerdoFrente 10
#define esquerdoTras 11
#define direitoFrente 9
#define direitoTras 8

char  comando;

void parado() {
  digitalWrite(esquerdoFrente,LOW);
  digitalWrite(esquerdoTras,LOW);
  digitalWrite(direitoTras,LOW);
  digitalWrite(direitoFrente,LOW);
}

void tras() {
  digitalWrite(esquerdoFrente,LOW);
  digitalWrite(esquerdoTras,HIGH);
  digitalWrite(direitoTras,HIGH);
  digitalWrite(direitoFrente,LOW);
}

void frente() {
  digitalWrite(esquerdoFrente,HIGH);
  digitalWrite(esquerdoTras,LOW);
  digitalWrite(direitoTras,LOW);
  digitalWrite(direitoFrente,HIGH);
}

void esquerda() {
  digitalWrite(esquerdoFrente,LOW);
  digitalWrite(esquerdoTras,HIGH);
  digitalWrite(direitoTras,LOW);
  digitalWrite(direitoFrente,HIGH);
}

void direita() {
  digitalWrite(esquerdoFrente,HIGH);
  digitalWrite(esquerdoTras,LOW);
  digitalWrite(direitoTras,HIGH);
  digitalWrite(direitoFrente,LOW);
}

void setup()
{
comando = 'P';
  Serial.begin(9600);

pinMode(esquerdoFrente, OUTPUT);
pinMode(esquerdoTras, OUTPUT);
pinMode(direitoFrente, OUTPUT);
pinMode(direitoTras, OUTPUT);
}


void loop()
{
  tras();
}