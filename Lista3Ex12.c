#include <stdio.h>
#include <string.h>
int f_strcmp2();

int main ()
{
    int rs;
    char String1[100], String2[100];
    gets(String1);
    gets(String2);
    rs=f_strcmp2(String1,String2);
    (rs==1) ? (printf("\nIGUAIS")) : (printf("\nNAO IGUAIS"));
}

int f_strcmp2(char as[100], char bs[100])
{
    int cont=0;
    for (cont=0; as[cont]!='\0'; cont++)
    {
        if (as[cont] != bs[cont])
            return 0;
    }
    return 1;
}
