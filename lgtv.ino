//Pin 3 of Arduino PWM must be used as output

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

#define powerButton 4
#define volumeUpButton 5
#define volumeDownButton 6
#define channelUpButton 7
#define channelDownButton 8
#define muteButton 9
#define HDMI1Button 10
#define HDMI2Button 11
#define HDMI3Button 12
#define HDMI4Button 13

//VCC (PRETO) GROUND (BRANCO)

void setup()
{
  Serial.begin(9600);
  pinMode(powerButton, INPUT);
  pinMode(volumeUpButton, INPUT);
  pinMode(volumeDownButton, INPUT);
  pinMode(channelUpButton, INPUT);
  pinMode(channelDownButton, INPUT);
  pinMode(muteButton, INPUT);
  pinMode(HDMI1Button, INPUT);
  pinMode(HDMI2Button, INPUT);
  pinMode(HDMI3Button, INPUT);
  pinMode(HDMI4Button, INPUT);
}

void loop() {
  // Manda o comando do botão pressionado
  if (digitalRead(powerButton)) {
    irsend.sendNEC(Power, 32);
  }
  if (digitalRead(volumeUpButton)) {
    irsend.sendNEC(VolumeUp, 32);
  }
  if (digitalRead(volumeDownButton)) {
    irsend.sendNEC(VolumeDown, 32);
  }
  if (digitalRead(channelUpButton)) {
    irsend.sendNEC(ChannelUp, 32);
  }
  if (digitalRead(channelDownButton)) {
    irsend.sendNEC(ChannelDown, 32);
  }
  if (digitalRead(muteButton)) {
    irsend.sendNEC(Mute, 32);
  }
  if (digitalRead(HDMI1Button)) {
    irsend.sendNEC(HDMI1, 32);
  }
  if (digitalRead(HDMI2Button)) {
    irsend.sendNEC(HDMI2, 32);
  }
  if (digitalRead(HDMI3Button)) {
    irsend.sendNEC(HDMI3, 32);
  }
  if (digitalRead(HDMI4Button)) {
    irsend.sendNEC(HDMI4, 32);
  }
  // Espera 1000 milissegundos pro próximo comando
  delay(1000);
}
