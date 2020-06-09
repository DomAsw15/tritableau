#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

/* tri un tableau de 4 entiers en ordre croissant */
/* le 7 juin 2020 DomAsw15 */
/* Auto formation test github 03*/

int main(int argc, char *argv[])
{
	int tableau[4] = {15, 81, 22,13};
	int tailleTableau = 4;
	
	triTableau(tableau, tailleTableau);  
	afficheTableau(tableau, tailleTableau);

	return 0;
}

