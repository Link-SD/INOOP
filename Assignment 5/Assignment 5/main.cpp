
#include <iostream>
#include "Bus.h"
#include "Train.h"

int main()
{
	Bus* bus = new Bus("Arriva Bus");
	bus->report();
	delete bus;

	Train* train = new Train("NS Sprinter");
	train->report();
	delete train;

	std::cin.get();
	return 0;
}
