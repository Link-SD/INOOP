#pragma once
#include <string>
#include "Boek.h"

class Bibliotheek
{
public:
	Bibliotheek();
	~Bibliotheek();
	void toon() const;

	void voegToe(std::string type);
private: 
	Boek* boek = new Boek();

};

