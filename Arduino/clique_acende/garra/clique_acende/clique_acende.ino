// Variável para armazenar o estado atual do LED (ligado/desligado)
bool estadoLed = LOW;

void setup() {
  // Configuração dos pinos
  pinMode(9, INPUT);   // Botão como entrada
  pinMode(12, OUTPUT); // LED como saída
}

void loop() {
  // Verifica se o botão está pressionado
  if (digitalRead(9) == HIGH) { // Botão pressionado (HIGH)
    // Inverte o estado do LED
    estadoLed = !estadoLed;
    // Atualiza o estado do LED de acordo com a variável estadoLed
    digitalWrite(12, estadoLed);
    // Pequeno atraso para evitar múltiplas leituras enquanto o botão está pressionado
    delay(250);
  }
}
