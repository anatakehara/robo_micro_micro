
char  comando;
//vermelho - 5 (frente (placa) lado direito)
//verde - 7 (frente (placa) lado direito)
//vermelho - 6 (trás (placa) lado direito)
//amarelo - 4  (trás (placa) lado direito)

//amarelo - 10 (trás (placa) lado esquerdo)
//laranja - 11 (trás (placa) lado esquerdo)
//roxo - 12 (frente (placa) lado esquerdo)
//verde - 13  (frente (placa) lado esquerdo)

void parado() {
  digitalWrite(5,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(4,LOW);
  
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);

}

void tras() {
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
}

void frente() {
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
}

void direita() {
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
}

void esquerda() {
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
}

void setup()
{
comando = 'P';
  Serial.begin(9600);

pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
}


void loop()
{

    if (Serial.available()) {
      comando = (Serial.read());

    }
    if (comando == 'P') {
      parado();

    }
    if (comando == 'F') {
      frente();

    }
    if (comando == 'T') {
      tras();

    }
    if (comando == 'D') {
      direita();

    }
    if (comando == 'E') {
      esquerda();

    }

}
