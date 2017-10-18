#include "Boek.h"
#include <iostream>


Boek::Boek()
{
}


Boek::Boek(const std::string type) : _type(type)
{
}


Boek::~Boek()
{
	std::cout << "Boek verwijderd: " << _type << std::endl;
}
