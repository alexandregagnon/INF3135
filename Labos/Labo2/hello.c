
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void boucleAvant(int x)
{
	printf("Boucle avant: \n");
        for(int i =0; i<x; i++)
                printf("%d \n",i);
}

void boucleApres(int x)
{
	printf("Boucle avant: \n");
        for(int j =0; j<x; ++j)
                printf("%d \n",j);

}

void racineCarreEntiere(double x)
{
	printf("La racine carre de %f est : ",x);
	double squareRoot = sqrt(x);
	printf("%f \n", squareRoot);
}

void lignecommande(int argc, char* argv[])
{
	printf("Les arguments passer en ligne de commande sont: \n");
	for(int i = 1; i < argc; i++)
	{
		printf("%s \n",argv[i]);
	}
}

void somme (int tabSize,int tab[])
{
	int somme = 0;


	for(int i = 0;  i < tabSize; i++)
	{
		somme += tab[i];
	}

	printf("La somme du tableau est : %d \n", somme);
}

bool estTrie(int tabSize,int tab[])
{
	int precedent = 0;
	for(int i = 0 ; i < tabSize; i++)
	{
		if(tab[i] < precedent)
			return false;
		else
			precedent = tab[i];
	}

	return true;
}

int main(int argc,char *argv[]) {
	boucleAvant(4);
	boucleApres(4);
	racineCarreEntiere(9);
	lignecommande(argc,argv);
	int  num[] = {1,2,3,4};
	int sizeOfArray =  sizeof(num)/sizeof(num[0]);
	somme(sizeOfArray, num);
	bool trier = estTrie(sizeOfArray, num);
	if(trier)
		printf("Le tableau est trier ! \n");
	else
		printf("Le tableau n'est pas trier !\n");
	return 0;

}

