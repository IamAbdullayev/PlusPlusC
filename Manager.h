#include "Vehicle.h"


class Manager {
	private:
		vector<Vehicle*> vehicleFleet;

	public:
		void addVehicle(Vehicle* vehicle) {
			vehicleFleet.push_back(vehicle);
		}

		void displayFleet() {
			for (const auto& vehicle : vehicleFleet) {
				vehicle->display();
			} 
		}

};

