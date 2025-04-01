//Test led blink for esp8266 as testlab for GitHUB

#define LED_PIN D2  // Пін, до якого підключено світлодіод (GPIO4)

void setup() {
  pinMode(LED_PIN, OUTPUT); // Налаштування піна як вихід
}

void loop() {
  digitalWrite(LED_PIN, HIGH); // Вмикаємо світлодіод
  delay(500);                  // Чекаємо 500 мс
  digitalWrite(LED_PIN, LOW);  // Вимикаємо світлодіод
  delay(500);                  // Чекаємо 500 мс
}


