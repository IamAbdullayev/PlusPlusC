#include "Manager.h"

/*

Why would you choose public inheritance for certain classes?
-- Я использовал public, потому что мне нужен был доступ из вне. 
-- То есть, чтобы я смог создаь объекты (Car, Bus, Vehicle) извне (в моем случае - в классе Manager).

When is protected inheritance useful and in what scenarios should it be avoided?
-- Оно полезно, если вы не хотети чтобы к элементам вашего класса имели доступ извне.
-- Оно позволят хранить данные таким образом, чтобы к нему не имели досуп извне, но при этом передавались при наследовании.

How does private inheritance restrict access compared to public and protected inheritance?
-- Оно полности инкапсулирует элемент в пределах класса, в котором он создан, добален и т.д.
-- Не передается по наследству и не предоставляет доступ изве.

*/

int main() {
	Manager manager;

	Car car1(1, 150, 4);
	Bus bus1(2, 80, 40);


	manager.addVehicle(&car1);
	manager.addVehicle(&bus1);

	manager.displayFleet();

	return 0;
}