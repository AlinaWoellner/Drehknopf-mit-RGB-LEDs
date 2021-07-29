#include <Arduino.h>
#include <FastLED.h>

#define NUM_LEDS 12 // So viele LEDs hat der Streifen
#define DATA_PIN 3 // Pin, an dem die LEDs angeschlossen sind

#define DREHREGLER_PIN A0 // Pin, an dem das Potentiometer angeschlossen ist

CRGB leds[NUM_LEDS]; // Array von FastLED Pixel RGB Werten
/**
 * Um die LEDs pro Led auf eine andere Farbe, über den ganzen Streifen einmal durch den Hue - Raum durch, zu setzen,
 * wird später für jede LED ein Wert von 0 bis NUM_LEDS errechnet. Für die Einstellung des Hue brauchen wir aber Werte von 0 bis 255.
 * Indem wir 255 durch unsere Anzahl von LEDs teilen bekommen wir einen Skalar, der mit Werten von 0..NUM_LEDS multipliziert
 * Werte von 0..255 ergibt:
 */
const int huescalar = (255 / NUM_LEDS);  

float offset = 0; // Variable, in der der Offset des Farbmusters gespeichert wird

float offsetIncrement = 0.001; // Statische Schriftgröße für das vergrößern von offset // ungenutzt

void setup() { // Diese Funktion wird bei Programmstart einmal aufgerufen
  Serial.begin(115200); // Datenrate in Bits pro Sekunde
  pinMode(DREHREGLER_PIN, INPUT); // konfiguriert den angegebenen Pin als In- oder Output
  FastLED.addLeds<WS2812, DATA_PIN, GRB>(leds, NUM_LEDS); // Library um LEDs zu kontrollieren; WS2812 Leds besitzt einen integrierten Controller, die über einen Arduino angesteuert werden können
}

void loop() {   // Ausführung des Programms
  int speed = analogRead(DREHREGLER_PIN);
  float offsetSpeed = float(speed) / 102300;  // float: Datentyp für Nummern mit Dezimalpunkt
  Serial.println(speed);  //Ausgabe in menschenlesbarem Text

  if(offset >= 1){
    offset = 0;
  }else{
   offset += offsetSpeed;
  }
  int offsetColor = offset * 255;
  Serial.println(offsetColor);


  for (int i = 0; i < NUM_LEDS; i++)  // int = ganze Zahl
  {
    int color = i * huescalar;
    leds[i] = CHSV(color + offsetColor,255,255);
    
  }
    FastLED.show(); // Funktion anwenden
}
