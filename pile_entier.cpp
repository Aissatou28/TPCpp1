#include "pile_entier.h"
#include <iostream>

pile_entier::pile_entier(int size=20)
{
	taille = size;
	pile = new int[taille];
	hauteur = 0;
}

pile_entier::~pile_entier()
{
	delete[] pile;
}

void pile_entier::empile(int x)
{ 
	pile[hauteur] = x;
	hauteur++;
}

int pile_entier::depile()
{
	hauteur--;
	return hauteur;
}

bool pile_entier::pleine()
{
	if(hauteur == taille) {
		return 1;
	}
	else {
		return 0;
	}
}

bool pile_entier::vide()
{
	if (hauteur == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
