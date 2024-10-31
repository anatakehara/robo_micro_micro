char comando;

// Mapeamento dos pinos para os motores:
// Lado direito
#define FRENTE_DIREITO_POSITIVO 6  // Vermelho (frente direito)
#define FRENTE_DIREITO_NEGATIVO 7  // Verde (frente direito)
#define TRAS_DIREITO_POSITIVO 5    // Vermelho (trás direito)
#define TRAS_DIREITO_NEGATIVO 4    // Amarelo (trás direito)

// Lado esquerdo
#define FRENTE_ESQUERDO_POSITIVO 12 // Roxo (frente esquerdo)
#define FRENTE_ESQUERDO_NEGATIVO 13 // Verde (frente esquerdo)
#define TRAS_ESQUERDO_POSITIVO 10   // Amarelo (trás esquerdo)
#define TRAS_ESQUERDO_NEGATIVO 11   // Laranja (trás esquerdo)

// Função para parar todos os motores
void parado() {
  digitalWrite(FRENTE_DIREITO_POSITIVO, LOW);
  digitalWrite(FRENTE_DIREITO_NEGATIVO, LOW);
  digitalWrite(TRAS_DIREITO_POSITIVO, LOW);
  digitalWrite(TRAS_DIREITO_NEGATIVO, LOW);

  digitalWrite(FRENTE_ESQUERDO_POSITIVO, LOW);
  digitalWrite(FRENTE_ESQUERDO_NEGATIVO, LOW);
  digitalWrite(TRAS_ESQUERDO_POSITIVO, LOW);
  digitalWrite(TRAS_ESQUERDO_NEGATIVO, LOW);
}

// Função para mover o robô para trás
void tras() {
  digitalWrite(FRENTE_DIREITO_POSITIVO, LOW);
  digitalWrite(FRENTE_DIREITO_NEGATIVO, HIGH);
  digitalWrite(TRAS_DIREITO_POSITIVO, HIGH);
  digitalWrite(TRAS_DIREITO_NEGATIVO, LOW);

  digitalWrite(FRENTE_ESQUERDO_POSITIVO, HIGH);
  digitalWrite(FRENTE_ESQUERDO_NEGATIVO, LOW);
  digitalWrite(TRAS_ESQUERDO_POSITIVO, HIGH);
  digitalWrite(TRAS_ESQUERDO_NEGATIVO, LOW);
}

// Função para mover o robô para frente
void frente() {
  digitalWrite(FRENTE_DIREITO_POSITIVO, HIGH);
  digitalWrite(FRENTE_DIREITO_NEGATIVO, LOW);
  digitalWrite(TRAS_DIREITO_POSITIVO, LOW);
  digitalWrite(TRAS_DIREITO_NEGATIVO, HIGH);

  digitalWrite(FRENTE_ESQUERDO_POSITIVO, HIGH);
  digitalWrite(FRENTE_ESQUERDO_NEGATIVO, LOW);
  digitalWrite(TRAS_ESQUERDO_POSITIVO, LOW);
  digitalWrite(TRAS_ESQUERDO_NEGATIVO, HIGH);
}

// Função para mover o robô para a direita
void direita() {
  digitalWrite(FRENTE_DIREITO_POSITIVO, LOW);
  digitalWrite(FRENTE_DIREITO_NEGATIVO, HIGH);
  digitalWrite(TRAS_DIREITO_POSITIVO, LOW);
  digitalWrite(TRAS_DIREITO_NEGATIVO, HIGH);

  digitalWrite(FRENTE_ESQUERDO_POSITIVO, HIGH);
  digitalWrite(FRENTE_ESQUERDO_NEGATIVO, LOW);
  digitalWrite(TRAS_ESQUERDO_POSITIVO, HIGH);
  digitalWrite(TRAS_ESQUERDO_NEGATIVO, LOW);
}

// Função para mover o robô para a esquerda
void esquerda() {
  digitalWrite(FRENTE_DIREITO_POSITIVO, HIGH);
  digitalWrite(FRENTE_DIREITO_NEGATIVO, LOW);
  digitalWrite(TRAS_DIREITO_POSITIVO, HIGH);
  digitalWrite(TRAS_DIREITO_NEGATIVO, LOW);

  digitalWrite(FRENTE_ESQUERDO_POSITIVO, LOW);
  digitalWrite(FRENTE_ESQUERDO_NEGATIVO, HIGH);
  digitalWrite(TRAS_ESQUERDO_POSITIVO, LOW);
  digitalWrite(TRAS_ESQUERDO_NEGATIVO, HIGH);
}

// Configuração inicial
void setup() {
  comando = 'P';
  Serial.begin(9600);

  pinMode(FRENTE_DIREITO_POSITIVO, OUTPUT);
  pinMode(FRENTE_DIREITO_NEGATIVO, OUTPUT);
  pinMode(TRAS_DIREITO_POSITIVO, OUTPUT);
  pinMode(TRAS_DIREITO_NEGATIVO, OUTPUT);

  pinMode(FRENTE_ESQUERDO_POSITIVO, OUTPUT);
  pinMode(FRENTE_ESQUERDO_NEGATIVO, OUTPUT);
  pinMode(TRAS_ESQUERDO_POSITIVO, OUTPUT);
  pinMode(TRAS_ESQUERDO_NEGATIVO, OUTPUT);
}

// Loop principal para leitura dos comandos
void loop() {
  tras();
}
