#pragma once
#include <string>
#include "Boek.h"

class Bibliotheek
{
public:
	Bibliotheek();
	Bibliotheek(std::string name);
	Bibliotheek(const Bibliotheek& bibliotheek);

	virtual ~Bibliotheek();

	Bibliotheek operator=(const Bibliotheek& bibliotheek);

	void toon();
	void voegToe(std::string type);


	std::string _name = "onbekend filiaal";

private: 
	std::vector<Boek*> boeken;
};

