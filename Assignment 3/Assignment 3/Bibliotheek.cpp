#include "Bibliotheek.h"
#include <iostream>

Bibliotheek::Bibliotheek()
{
}

Bibliotheek::~Bibliotheek()
{
	
}


void Bibliotheek::toon() const
{
	std::cout << "Bibliotheek " << boek->_type << std::endl;
}

void Bibliotheek::voegToe(std::string type)
{
	boek = new Boek(type);
}
