#pragma once
class pile_entier
{
private:
	int * pile;
	int taille; 
	int hauteur;

public:
	pile_entier(int size);
	~pile_entier();

	void empile(int x);
	int depile();
	
	bool pleine();
	bool vide();

};

