#include "Bibliotheek.h"
#include <iostream>

Bibliotheek::Bibliotheek()
{
}

Bibliotheek::Bibliotheek(const std::string name) : _name(name)
{

}


Bibliotheek::~Bibliotheek()
{
	boeken.clear();
}

Bibliotheek::Bibliotheek(const Bibliotheek& bibliotheek)
{
	boeken = bibliotheek.boeken;
}

Bibliotheek Bibliotheek::operator=(const Bibliotheek& bibliotheek)
{
	if (this != &bibliotheek)
	{
	//	delete(boek);
	//	boek = new Boek();
	//	boek->_type = bibliotheek.boek->_type;
		boeken = bibliotheek.boeken;
	}
	return *this;
}


void Bibliotheek::toon()
{
	std::cout << "Boeken in bibliotheek " << _name << ": " << std::endl;

	for (int i = 0; i < boeken.size(); i++)
	{
		std::cout << boeken[i]->_type << std::endl;
	}
}

void Bibliotheek::voegToe(const std::string type)
{
	boeken.push_back(new Boek(type));
}
