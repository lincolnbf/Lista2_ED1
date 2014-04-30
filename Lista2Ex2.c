
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void sprvcts(int xs[], int ys[], int zs[], int *qys, int *qzs);

int main()
{
	int as[10], bs[10], cs[10];
	int qbs=0, qcs=0;
	int i;
	for (i = 0; i < 10; i++)
		cin >> as[i];
	sprvcts(as, bs, cs, &qbs, &qcs);
	cout << "Valores positivos: ";
	for (i = 0; i < 10; i++)
	{
		cout << " ", bs[i];
	}
	cout << "Valores negativos: ";
	for (i = 0; i < 10; i++)
	{
		cout << " ", cs[i];
	}
	system("pause");
}

void sprvcts(int xs[], int ys[], int zs[], int *qys, int *qzs)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (xs[i] > 0)
		{
			*qys=*qys+1;
			ys[*qys] = xs[i];
		}
		else
		{
			*qzs++;
			zs[*qzs] = xs[i];
		}
	}
}

