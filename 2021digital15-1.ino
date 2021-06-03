/*
  Melody
 */
#define NOTE_C3  131
#define NOTE_D3  147
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_G3  196
#define NOTE_A3  220
#define NOTE_B3  247
#define NOTE_C4  262

// notes in the melody:
int melody[] = {
  NOTE_A3, NOTE_E3, NOTE_C3, NOTE_B3, NOTE_A3, NOTE_E3, NOTE_C3, NOTE_B3, 0,
  NOTE_C3, NOTE_C3, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_B3, NOTE_C4, NOTE_A3,
  NOTE_G3, 0, NOTE_F3, NOTE_F3, NOTE_E3, NOTE_E3, NOTE_D3, NOTE_D3, NOTE_C3, 0,
  NOTE_C3, NOTE_C3, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_B3, NOTE_C4, NOTE_A3,
  NOTE_G3, 0, NOTE_D3, NOTE_D3, NOTE_C3, NOTE_E3, NOTE_D3, NOTE_D3, NOTE_C3,
  NOTE_A3, 0
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 4, 4, 4, 4, 4, 4, 4, 8,
  4, 4, 4, 4, 8, 8, 8, 8, 4, 8,
  4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 8, 8, 8, 8, 4, 8,
  4, 4, 4, 4, 4, 4, 4, 2, 8
};

void setup() {
  // iterate over the notes of the melody:
}

void loop() {
  for (int thisNote = 0; thisNote < 45; thisNote++) {

    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

      int pauseBetweenNotes = noteDuration * 1.3;
    delay(pauseBetweenNotes);
   
    noTone(8);
  }
  delay(200);
}