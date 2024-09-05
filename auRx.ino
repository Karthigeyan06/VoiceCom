#include <RF24.h>
#include <SPI.h>
#include <RF24Audio.h>
#include "printf.h"

RF24 radio(7,8);    // Set radio up using pins 7 (CE) 8 (CS)
RF24Audio rfAudio(radio,0); 

void setup() {      
  Serial.begin(115200);
  
  printf_begin();
  radio.begin();
  radio.printDetails();
  rfAudio.begin();

  // Start in receive-only mode
  rfAudio.receive();
}

void loop()
{
  // No need to do anything in loop since we're only receiving
}
