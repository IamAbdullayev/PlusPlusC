#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>
#include <sstream>
#include <string>
#include <string_view>
#include <vector>
using namespace std;


class Vehicle {
	protected:
		int ID;
		int maxSpeed;

	public:
		Vehicle(int ID, int maxSpeed) {
			this->ID = ID;
			this->maxSpeed = maxSpeed;
		}

		void display() {
			cout << "Vehicle ID: " << ID << ", " << "Max Speed: " << maxSpeed << "km/h" << endl;
		}

};


class	Car : public Vehicle {
	private:
		int numDoors;

	public:
		Car (int ID, int maxSpeed, int numDoors) : Vehicle(ID, maxSpeed), numDoors(numDoors) {}

		void calculateFuelEfficiency() {
			cout << "12.5%" << endl;
		}
};


class	Bus : public Vehicle {
	private:
		int maxPassengers;

	public:
		Bus (int ID, int maxSpeed, int maxPassengers) : Vehicle(ID, maxSpeed), maxPassengers(maxPassengers) {}

		void announceNextStop() {
			cout << "NEXT STOP" << endl;
		}
};



#endif