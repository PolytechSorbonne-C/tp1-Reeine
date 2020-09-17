#include <stdio.h>

int main()
{
	int nomb;
	//printf("Les nombres sont : \n");
	
	for (nomb=1;nomb<=100;nomb++) //on incrémente le nomb jusqu'à 100

	{
		//printf("%d \n", nomb);// affiche les 100 premiers nombres
		
		if ((nomb%3 == 0)||(nomb%10 == 3)) //vérifie si c'est un multiple de 3 ou si le nombre se termine par 3, nomb%10 permet d'avoir le dernier chiffre du nombre et nomb%3 le multiple de 3

		{
			printf("Fizz \n"); //on affiche Fizz
		}

		else if ((nomb%7 == 0)||(nomb%10 == 7)) //vérifie si c'est un multiple de 7 ou si le nombre se termine par 7, nomb%10 permet d'avoir le dernier chiffre du nombre et nomb%3 le multiple de 7

		{
			printf("Buzz\n"); //on affiche Buzz
		}

		else if (((nomb%3 == 0)||(nomb%10 == 3)) && ((nomb%7 == 0)||(nomb%10 == 7))) //on compare la partie multiple de 3 et multiple de 7
		{
			printf("FizzBuzz\n");
		}

		else
		{
		     printf("%d \n", nomb); //on affiche les autres nombres
		}
	}
    return 0;
}
