#include <iostream>
#include "pile_entier.h"


int main()
{
	pile_entier Pile(20);

	if (Pile.vide()) {
		std::cout << "La pile est vide\n";
	}

	if (Pile.pleine()) {
		std::cout << "La pile est pleine";
	}

	if (!Pile.pleine()) {
		Pile.empile(4);
		std::cout << "Ajout de 4\n";
	}
	else {
		std::cout << "La pile est pleine";
	}

	if (!Pile.vide()) {
		Pile.depile();

	}

	//Pile.~pile_entier();

}
