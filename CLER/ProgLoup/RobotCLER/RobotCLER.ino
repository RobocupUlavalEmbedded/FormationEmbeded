//The setup function is called once at startup of the sketch
const int btnStart = 1;
const int pinCapt1 = 2;
const int pinCapt2 = 3;

#include "LectureLignes.h"

void setup()
{
	attachInterrupt(btnStart, start, LOW);

}

void loop()
{
	lectureLigne(&pinCapt1, &pinCapt2);
}