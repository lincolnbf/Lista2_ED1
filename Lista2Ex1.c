#include <stdio.h>
#define MAX 50

int retornaPositivos();

int main ()
{
	int i, vet[MAX];
	for (i=0;i<MAX;i++)
	{
		scanf("%d",&vet[i]);
	}
	printf("\nExistem %d numeros positivos!\n",retornaPositivos(vet));
}

int retornaPositivos(int vet[MAX])
{
	int i, positivos;
	for(i=0;i<MAX;i++)
	{
		if (vet[i] > 0)
			positivos++;
	}
	return positivos;
}
