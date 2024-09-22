
#include "pitches.h"

#define SPEAKER_PIN 2

void setup() {
  Serial.begin(115200);
  Serial.println("Iniciando...");
  pinMode(SPEAKER_PIN, OUTPUT);

}

void loop() {

    Serial.println("Executando tom...");
  
    tone(SPEAKER_PIN, NOTE_A4, 600);
    tone(SPEAKER_PIN, NOTE_A4, 600);
    tone(SPEAKER_PIN, NOTE_A4, 600);
    tone(SPEAKER_PIN, NOTE_F4, 450);
    tone(SPEAKER_PIN, NOTE_C5, 250);

    tone(SPEAKER_PIN, NOTE_A4, 600);
    tone(SPEAKER_PIN, NOTE_F4, 450);
    tone(SPEAKER_PIN, NOTE_C5, 250);
    tone(SPEAKER_PIN, NOTE_A4, 1200);

    tone(SPEAKER_PIN, NOTE_E5, 600);
    tone(SPEAKER_PIN, NOTE_E5, 600);
    tone(SPEAKER_PIN, NOTE_E5, 600);
    tone(SPEAKER_PIN, NOTE_F5, 450);
    tone(SPEAKER_PIN, NOTE_C5, 250);

    tone(SPEAKER_PIN, NOTE_GS4, 600);
    tone(SPEAKER_PIN, NOTE_F4, 450);
    tone(SPEAKER_PIN, NOTE_C5, 250);
    tone(SPEAKER_PIN, NOTE_A4, 1200);

    delay(300);

    Serial.println("Concluido!");

}
