#include <stdio.h>
#include <stdlib.h>

int main(){
    char *apuntadorString;
    apuntadorString = malloc(sizeof(char )*150);
    printf("\nCadena: ");
    gets(apuntadorString);
    printf("\nLetras: ");
    int i = 0;
    do
    {
        printf("%c\n", *(apuntadorString + i));
        i ++;
    } while (*(apuntadorString + i));
    printf("\nTotal de caracteres: %i", i);
    free(apuntadorString);
    return 0;
};