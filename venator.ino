#include "SoftwareSerial.h"
//Sensors & Equipment
int BT_in;  //var to storage data from bluetooth
const unsigned short int INFRARED = 20;
const unsigned short int LIGHT_SENSE = 21;
const unsigned short int DF_in = 18;  //Maybe we should use Serial2?
const unsigned short int DF_out = 19; //
const unsigned short int SERVO_1 = 22;
const unsigned short int SERVO_2 = 23;
const unsigned short int SERVO_3 = 24;
//PWM & engines
const unsigned short int R_1 = 2;
const unsigned short int G_1 = 3;
const unsigned short int B_1 = 4;
const unsigned short int R_2 = 5;
const unsigned short int G_2 = 6;
const unsigned short int B_2 = 7;
const unsigned short int R_3 = 8;
const unsigned short int G_3 = 9;
const unsigned short int B_3 = 10;
const unsigned short int R_4 = 11;
const unsigned short int G_4 = 12;
const unsigned short int B_4 = 13;
const unsigned short int CORE1 = 44;
const unsigned short int CORE2 = 46;
const unsigned short int TERT = 45;
//Shell lights
const unsigned short int BRIDGE = 62;
const unsigned short int HIGH_BULK = 63;
const unsigned short int LOW_BULK = 64;
const unsigned short int HIGH_PART = 65;
const unsigned short int PERIMETER = 66;
const unsigned short int HANGAR = 67;
const unsigned short int INSIDE_1 = 68;
const unsigned short int INSIDE_1 = 69;
//Effects
const unsigned short int TURBOLASERS[8] = {54, 55, 56, 57, 58, 59, 60, 61};
const unsigned short int BANG = 30;
const unsigned short int SUPERLASER = 31;

void setup(){
  
}

void loop(){
//if(Serial.available()){
//  BT_in = Serial.read();
//}

}
