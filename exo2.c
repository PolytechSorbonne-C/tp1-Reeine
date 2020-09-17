#include <stdio.h>
#include <stdlib.h>

int main()
{
	float x, y, pi; //on utilise une variable pour chaque paramètre en float pour prévoir les virgules
	int p, n=0; //

	for(int i=0;i<=1000;i++) //on incremente 50 valeurs aléatoire
	{
		x =(rand()/(32767+1.0)); //choisi des x aléatoirement
		y =(rand()/(32767+1.0)); //choisi des y aléatoirement

		printf("valeur de x : %f / valeur de y : %f \n", x,y); // on affiche toutes les valeurs reçues
		n++;

		if((x*x)+(y*y)<=1); //on calcul grace au th de pythagore de vérifier si les points sont à l'interieur du cercle de rayon 1
		{
			p = p+1; // on obtient le nombre de points
		}
	}
	pi = ((4*p)/n); //on fait le calcul écrit sur l'énoncé pour avoir pi, calcul obtenu par un produit en crois (cf.cahier)
	printf("la valeur de pi : %f \n",pi); //on affiche le résultat
	
    return 0;
}
