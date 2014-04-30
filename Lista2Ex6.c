#include <stdio.h>
#define size 4

int f_removerVetor();

int main ()
{
    int a[size];
    int vl1, i;
    int result=0;

    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    printf("\nOriginal vetor\n");
    for(i=0;i<size;i++)
        printf("%d\n",a[i]);

    scanf("%d",&vl1);
    result = f_removerVetor(a,vl1);
    printf("\nNovo vetor");
    for(i=0;i<size-result;i++)
        printf("\n%d",a[i]);
    (result == 1) ? (printf("\nValor encontrado e retirado!"))
    : (printf("\nValor nao encontrado, vetor se manteve igual"));
}

int f_removerVetor (int *aux[size], int vl)
{
    int i;
    int pos=0;
    for(i=0;i<size-1;i++)
    {
        if (aux[i] == vl)
            pos=i;
    }
    if (pos!=0)//ENCONTROU!
    {
        for(i=pos;i<size;i++)
            aux[i] = aux[i+1];
        return 1;
    }
    return 0;
}
