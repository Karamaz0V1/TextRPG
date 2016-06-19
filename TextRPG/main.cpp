#include <iostream>
#include <string>
#include "Personnage.h"
#include "Magicien.h"

using namespace std;

int main ()
{
	Arme	poings("Petits poings", 1, 0),
			couteau("Couteau rouill�", 5, 2),
			epee("Epee aiguis�e",10,5),
			masse("Masse en pierre", 10, 3);

	Personnage	heros("Heros"),
				orc("Orc");

	
	heros.afficherStats ();
	orc.afficherStats();
	
	system ("PAUSE");
	return 0;
}

