#include <stdio.h>
#define size 3

void f_F (int y[],int x[],int *aux,int z[],int *aux2);

int main ()
{
    int i, qPos=-1, qNeg=-1;
    int a[size], b[size], c[size];

    for (i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    f_F(a,b,&qPos,c,&qNeg);
    printf("\n%d",b[0]);
    printf("\n%d",b[1]);
    printf("\n%d",c[2]);
    printf("teste");
    getch();
    printf("\nVetor 1");
    for (i=0;i<=qPos;i++)
    {
        printf("\n %d", b[i]);
    }
    printf("\nVetor 2");
    for (i=0;i<=qNeg;i++)
    {
        printf("\n %d", c[i]);
    }
}

void f_F (int y[],int x[],int *aux,int z[],int *aux2)
{
    int i;
    printf("\n%d valor de aux",y[0]);
           getch();

    for (i=0;i<size;i++)
    {
        if (y[i] > 0)
        {
           printf("\n%d valor de aux",*aux);
           getch();
            *aux=*aux+1;
            x[*aux] = y[i];
        }
        else
        {
             printf("\n%d valor de aux2",*aux2);
           getch();
            *aux2=*aux2+1;
            z[*aux2] = y[i];
        }
    }
    printf("\n%d valor de x",x[0]);
         printf("\n%d valor de x",x[1]);
          printf("\n%d valor de Z",z[0]);
           getch();
}
