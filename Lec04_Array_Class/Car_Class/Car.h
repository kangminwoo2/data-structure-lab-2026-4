#pragma once
#include <stdio.h>
#include <cstring>

class Car {
protected:
	int speed;
	char name[40];
public:
	void setName(const char* n) { strcpy_s(name, n); }
	int gear;
	Car() {
		speed = 0;
		gear = 0;
		name[0] = '\0';
	}
	void changeGear(int g = 4) {
		gear = g;
	}
	void speedUp() {
		speed += 5;
	}
	void display() {
		printf("[%s] : Gear = %d  Speed = %d km/h \n", name, gear, speed);
	}
};
class SportsCar : public Car
{
public:
	bool bTurbo;
	void setTurbo(bool bTur) { bTurbo = bTur; }
	void speedUp() {
		if (bTurbo) speed += 20;
		else Car::speedUp();
	}
};