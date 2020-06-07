#include <stdio.h>
#include <stdlib.h>

/* Fonctions */

/* Vérifie si tout le tableau est bien ordonné */
/* flagValeurOrdonnee = 0 tableau ordonné */
/* flagValeurOrdonnee > 0 tableau non ordonné */

int verifieTableau(int tableau[], int tailleTableau)
{
	int i = 0;
	int flagValeurOrdonnee = 0;

		for (i = 0; i < tailleTableau - 1; i++) /* vérifie si tout le tableau est ordonné */
		{
			if (tableau [i] > tableau [i+1]) 
			{
				flagValeurOrdonnee++;
			}
		}

return flagValeurOrdonnee;
}

/* Tri le tableau  par ordre croissant
   par permutation des valeurs */

void triTableau(int tableau[], int tailleTableau)
{
	int i = 0;
	int valeurTableau = 0;
	int flagValeurOrdonnee = 0;

	do  /* Scrute une fois le tableau et inverse 2 valeurs si valeur1 > Valeur2 */
	{
		for (i = 0; i < tailleTableau - 1; i++) 
		{
			if (tableau [i] > tableau [i+1]) 
			{
				valeurTableau = tableau[i];
				tableau[i] = tableau [i+1];
				tableau[i+1] = valeurTableau;
			}
		}

		flagValeurOrdonnee = 0;

		flagValeurOrdonnee = verifieTableau(tableau, tailleTableau);

	} while (flagValeurOrdonnee > 0);

return;
}

/* Affiche les valeurs du tableau */

void afficheTableau(int tableau[], int tailleTableau)
{
	int i = 0;

	for (i = 0; i < tailleTableau; i++) 
	{
		printf ("\t%d\n\n", tableau[i] );
	}

	return;
}

