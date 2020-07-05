#pragma once

#include <ostream>
#include <istream>
#include <string>
#include "Wheel.h"
#include "Engine.h"

using namespace std;

class Car {
private:

public:
	string type;
	string color;
	long serialnumber=0;
	string productiondate;
	string productionplace;
	string gearboxtype;
	string motortype;
	float maxspeed=0;
	float weight=0;
	Engine engine;
	Wheel wheels[4];

	Car(string type="",
		string color="",
		long serialnumber=0,
		string productiondate="",
		string productionplace="",
		string gearboxtype="",
		string motortype ="",
		float maxspeed =0,
		float weight = 0, Engine engine = 0,
	Wheel wheels[4] = 0
		);
	~Car();		

	Car(const Car& c); 

	Car& operator=(const Car& c); //r1 = r2
										
	//Ausgabe
	friend std::ostream& operator <<(std::ostream& os, const Car& c); //von auﬂen ansprechbar..aber er kann auf private Member zugreifen

	//Eingabe
	friend std::istream& operator >>(std::istream& os, Car& c); //von auﬂen ansprechbar..aber er kann auf private Member zugreifen

};

