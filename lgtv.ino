
/*
 * IRremote: IRsendRawDemo - demonstrates sending IR codes with sendRaw
 * An IR LED must be connected to Arduino PWM pin 3.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 *
 * IRsendRawDemo - added by AnalysIR (via www.AnalysIR.com), 24 August 2015
 *
 * This example shows how to send a RAW signal using the IRremote library.
 * The example signal is actually a 32 bit NEC signal.
 * Remote Control button: LGTV Power On/Off. 
 * Hex Value: 0x20DF10EF, 32 bits
 * 
 * It is more efficient to use the sendNEC function to send NEC signals. 
 * Use of sendRaw here, serves only as an example of using the function.
 * 
 */


#include <IRremote.h>

IRsend irsend;

#define Power 0x20DF10EF

#define ChannelUp 0x20DF00FF

#define ChannelDown 0x20DF807F

#define VolumeUp 0x20DF40BF

#define VolumeDown 0x20DFC03F

#define Mute 0x20DF906F

#define Tuner   0x20DF6B94

#define HDMI1   0x20DF738C
#define HDMI2   0x20DF33CC
#define HDMI3   0x20DF9768
#define HDMI4   0x20DF5BA4

#define AV1     0x20DF5AA5
#define AV2     0x20DF0BF4

#define Compnt1 0x20DFFD02
#define Compnt2 0x20DF2BD4

#define RGBPC 0x20DFAB54

//VCC (PRETO) GROUND (BRANCO)

void setup()
{
  Serial.begin(9600);
}

void loop() {

  //desliga/liga de 3 em 3 segundos
  irsend.sendNEC(Power,32); 

  delay(3000); 
}
