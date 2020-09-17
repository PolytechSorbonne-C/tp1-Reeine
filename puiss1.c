#include <stdio.h>
#include <stdlib.h>

int main()
{
	int result, k_expo, x_valeur;

	printf("Entrez un entier positif pour x \n");
	scanf("%d" ,&x_valeur); //stockage de l'entier en x_valeur, notre x

	printf("Entrez un entier positif pour k \n"); //demande de l'entier positif
	scanf("%d" ,&k_expo); //stockage de l'entier dans k_expo, notre exposant

	result = x_valeur; //on affecte à result la valeur de x pour pouvoir faire notre calcul dans la boucle

	for (int i=1;i<=k_expo;i++) //on tinitalise à 1, puis tant que, le i qu'on incremente, n'est pas égal à l'exposant on incrémente
	{
		result = result*x_valeur; //ce calcul permet de faire le résultat fois l'exposant
	}
	printf("%d \n", result); // on affiche le resultat
 
	result = 0; //on remet le résultat à 0 pour le prochain programme
    return 0;
}
