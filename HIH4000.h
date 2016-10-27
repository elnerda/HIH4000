/*
  HIH4000.cpp - Library for HIH4000 analog humidity sensor.
  Created by Gaetano, October 27, 2016.
  Released into the public domain.
*/


#ifndef TMP36_h
#define TMP36_h

#include "Arduino.h"

class HIH4000
{
	public:
		HIH4000(int pin, float tempC);
		float getHumidity();
		float getTrueHumidity();
	private:
		int _pin;
		float _tempC;
		float voltage;
};
#endif