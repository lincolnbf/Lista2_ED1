#include <stdio.h>


void f_strcpy();

int main ()
{
    char String1[100], String2[100];
    gets(String1);
    strlen(String);
    f_strcpy(String1, String2);
    printf("A nova string eh ");
    puts(String2);
}

void f_strcpy (char as[100], char xs[100])
{
    int cont=0;
    while(as[cont] != '\0')
    {
        xs[cont] = as[cont];
        cont++;
    }
    xs[cont] = '\0';
}
