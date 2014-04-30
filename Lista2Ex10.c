#include <stdio.h>
#include <string.h>

f_strlen();

int main ()
{
    char String[100];
    gets(String);
    printf("\nA palavra contem %d palavras",f_strlen(String));
}

int f_strlen (char as[100])
{
    int s=1, cont=0;
    while(as[cont]!='\0')
    {
        cont++;
        if (as[cont]==' ')
        {
            s++;
        }
    }
    return s;
}
