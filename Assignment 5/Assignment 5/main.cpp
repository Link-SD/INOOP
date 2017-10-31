
#include <iostream>
#include "Bus.h"

int main()
{
	Bus bus = Bus("Arriva Bus");
	bus.report();
	std::cin.get();
	return 0;
}
