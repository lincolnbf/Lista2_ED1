#include <stdio.h>

int main ()
{
	int a[10], b[10], c[10];
	int i;

	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		scanf("%d",&b[i]);
	}
	somaVet(&a,&b,&c);
	for(i=0;i<10;i++)
        printf(" %d",c[i]);
}

void somaVet (int x[10], int y[10], int *z[10])
{
    int i;
    for (i=0;i<10;i++)
        z[i] = x[i] + y[i];
}
