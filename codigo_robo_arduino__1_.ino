char comando;

void parado() {
  digitalWrite(5, LOW);  // frente direito
  digitalWrite(7, LOW);  // frente direito
  digitalWrite(6, LOW);  // trás direito
  digitalWrite(4, LOW);  // trás direito
  digitalWrite(12, LOW); // frente esquerdo
  digitalWrite(13, LOW); // frente esquerdo
  digitalWrite(10, LOW); // trás esquerdo
  digitalWrite(11, LOW); // trás esquerdo
}

void tras() {
  digitalWrite(5, LOW);  // frente direito
  digitalWrite(7, HIGH); // frente direito
  digitalWrite(6, HIGH); // trás direito
  digitalWrite(4, LOW);  // trás direito
  digitalWrite(12, LOW); // frente esquerdo
  digitalWrite(13, HIGH);// frente esquerdo
  digitalWrite(10, HIGH);// trás esquerdo
  digitalWrite(11, LOW); // trás esquerdo
}

void frente() {
  digitalWrite(5, HIGH); // frente direito
  digitalWrite(7, LOW);  // frente direito
  digitalWrite(6, LOW);  // trás direito
  digitalWrite(4, HIGH); // trás direito
  digitalWrite(12, HIGH);// frente esquerdo
  digitalWrite(13, LOW); // frente esquerdo
  digitalWrite(10, LOW); // trás esquerdo
  digitalWrite(11, HIGH);// trás esquerdo
}

void direita() {
  digitalWrite(5, LOW);  // frente direito
  digitalWrite(7, HIGH); // frente direito
  digitalWrite(6, LOW);  // trás direito
  digitalWrite(4, HIGH); // trás direito
  digitalWrite(12, HIGH);// frente esquerdo
  digitalWrite(13, LOW); // frente esquerdo
  digitalWrite(10, HIGH);// trás esquerdo
  digitalWrite(11, LOW); // trás esquerdo
}

void esquerda() {
  digitalWrite(5, HIGH); // frente direito
  digitalWrite(7, LOW);  // frente direito
  digitalWrite(6, HIGH); // trás direito
  digitalWrite(4, LOW);  // trás direito
  digitalWrite(12, LOW); // frente esquerdo
  digitalWrite(13, HIGH);// frente esquerdo
  digitalWrite(10, LOW); // trás esquerdo
  digitalWrite(11, HIGH);// trás esquerdo
}

void setup() {
  comando = 'P';
  Serial.begin(9600);

  pinMode(5, OUTPUT); // frente direito
  pinMode(7, OUTPUT); // frente direito
  pinMode(6, OUTPUT); // trás direito
  pinMode(4, OUTPUT); // trás direito
  pinMode(12, OUTPUT);// frente esquerdo
  pinMode(13, OUTPUT);// frente esquerdo
  pinMode(10, OUTPUT);// trás esquerdo
  pinMode(11, OUTPUT);// trás esquerdo
}

void loop() {
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
