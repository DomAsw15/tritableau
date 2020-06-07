#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

int main(int argc, char *argv[])
{
	int tableau[4] = {15, 81, 22,13};
	int tailleTableau = 4;
	
	triTableau(tableau, tailleTableau);  
	afficheTableau(tableau, tailleTableau);

	return 0;
}

