#include <iostream>
#include "Bibliotheek.h"

void geefBoekDoor(Bibliotheek* mandje)
{
	std::cout << "Mandje gekregen" << std::endl;
	mandje->toon();

	mandje->voegToe("Stephen King");
	mandje->toon();
}

int main()
{
	Bibliotheek* bieb = new Bibliotheek();
	bieb->toon();
	
	bieb->voegToe("JK Rowling");
	bieb->toon();
	geefBoekDoor(bieb);
	bieb->toon();
	delete bieb;

	std::cin.get();
	return 0;
}
