#include <LiquidCrystal.h>

#define LED 8
#define BUTTON 7
#define EXIT_BUTTON 6

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

unsigned long startTime;
unsigned long reactionTime;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
  pinMode(EXIT_BUTTON, INPUT_PULLUP);
  randomSeed(analogRead(A1));

  lcd.begin(16, 2);
  lcd.print("Get Ready...");
}

void loop() {

  //exit game
  if (digitalRead(EXIT_BUTTON) == LOW) {
    lcd.clear();
    lcd.print("Game Over");

    digitalWrite(LED, LOW);

    while (true) {
      //stops game
    }
  }

  //random delay
  int waitTime = random (2000, 5000);
  delay(waitTime);

  //turn LED on
  digitalWrite(LED, HIGH);
  lcd.clear();
  lcd.print("GO!");

  //start timing
  startTime = millis();

  //wait for button press
  while (digitalRead(BUTTON) == HIGH) {
    //wait

    if (digitalRead(EXIT_BUTTON) == LOW) {
      lcd.clear();
      lcd.print("Game Over");
      digitalWrite(LED, LOW);
      while (true) {}
    }
  }

  //calculate reaction time
  reactionTime = millis() - startTime;

  digitalWrite(LED, LOW);

  //display result
  lcd.clear();
  lcd.print("Time: ");
  lcd.print(reactionTime);
  lcd.print(" ms");

  delay (3000);

  lcd.clear();
  lcd.print("Next Round...");
  delay(2000);
}
