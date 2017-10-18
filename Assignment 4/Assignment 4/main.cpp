#include <iostream>
#include "Bibliotheek.h"

int main()
{

//	delete(bieb);
	
	Bibliotheek library = Bibliotheek("Bol.com");
	library.voegToe("Stephen King");
	library.toon();
	library.voegToe("J.K. Rowling");
	library.toon();
	
	Bibliotheek library2 = library;
	library2.toon();
	
	Bibliotheek library3 = Bibliotheek("Primera");
	library3 = library2;


	std::cout << "l1" << std::endl;
	library.voegToe("Edgar Allen Poe");
	library.voegToe("J.R.R Tolkien");
	library.toon();

	std::cout << "l2" << std::endl;
	library2.toon();

	std::cout << "l3" << std::endl;
	library3.toon();
	
	std::cin.get();
	return 0;
}