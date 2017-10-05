#pragma once
#include <string>

class Boek
{
public:
	Boek();
	Boek(std::string type);
	~Boek();
	std::string _type = "onbekend";
	
};

