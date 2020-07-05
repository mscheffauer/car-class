#include "Car.h"
#include "Engine.h"
#include "Wheel.h"


const int MAX_WHEELS = 4;

//constructor
Car::Car(string type,
	string color,
	long serialnumber,
	string productiondate,
	string productionplace,
	string gearboxtype,
	string motortype,
	float maxspeed,
	float weight,
	Engine engine,
Wheel wheels[4])
{
	type = "";
	color = "";
	serialnumber = 0;
	productiondate = "";
	productionplace = "";
	gearboxtype = "";
	motortype = "";
	maxspeed = 0;
	weight = 0;
	engine =0;

	memset(&wheels,0, sizeof(wheels));
	

}
//deconstructor
Car::~Car()
{
	//do nothing on deconstruct
}
//copy constructor
Car::Car(const Car& c)
{
	type = c.type;
	color = c.color;
	serialnumber = c.serialnumber;
	productiondate = c.productiondate;
	productionplace = c.productionplace;
	gearboxtype = c.gearboxtype;
	motortype = c.motortype;
	maxspeed = c.maxspeed;
	weight = c.weight;
	engine = c.engine;

	for (auto i = 0; i < MAX_WHEELS; i++)
	{
		wheels[i] = c.wheels[i];
	}
}




//////////////////////////////////////////////////operatoroverloading
//assignment
Car& Car::operator=(const Car& c)
{
	
	// TODO: hier return-Anweisung eingeben
	if (this == &c)
	{
		return *this;
	}

	
	type = c.type;
	color = c.color;
	serialnumber = c.serialnumber;
	productiondate = c.productiondate;
	productionplace = c.productionplace;
	gearboxtype = c.gearboxtype;
	motortype = c.motortype ;
	maxspeed = c.maxspeed;
	weight = c.weight; 
	engine = c.engine;


	for (auto i = 0; i < MAX_WHEELS; i++)
	{
	  wheels[i] = c.wheels[i];
	}



	return *this;
}

//output string
std::ostream& operator<<(std::ostream& os, const Car& c)
{
	 os << "Car: "<< endl << "Type: " << c.type << endl << "Color: " << c.color << endl << 
		"Serialnumber: " << c.serialnumber << endl
		<< "Production date: " << c.productiondate << endl << "Production place: " << c.productionplace << endl <<
		"Gearbox: " << c.gearboxtype << endl<<
		"Motortype: " << c.motortype << endl << "Maximum speed: " << c.maxspeed << endl << 
		"Weight: " << c.weight << endl << endl << c.engine;

	 
	 for (auto i = 0; i < MAX_WHEELS; i++)
	 {
		 os << c.wheels[i];
	 }
	return os;

}


//input string
std::istream& operator>>(std::istream& in,  Car& c)
{
	in >> c.serialnumber;
	in >> c.maxspeed;
	in >> c.engine;
	in >> c.weight;

	for (auto i = 0; i < MAX_WHEELS; i++)
	{
		in >> c.wheels[i];
	}
	return in;

}
