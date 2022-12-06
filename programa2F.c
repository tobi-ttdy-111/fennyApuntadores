#include <stdio.h>
#include <stdlib.h>
int main() {
    char *apuntadorString;
    char caracterBuscado;
    int numRepetidas = 0;
    apuntadorString = malloc(sizeof(char) *150);
    printf("\nTexto: ");
    gets(apuntadorString);
    printf("\nCaracter buscado: ");
    scanf("%c", &caracterBuscado);
    int i = 0;
    do
    {
        if (*(apuntadorString + i) == caracterBuscado)
        {
            numRepetidas ++;
        };
        i ++;
    } while (*(apuntadorString + i));
    printf("\nCaracter %c se repitio: %i veces", caracterBuscado, numRepetidas);
    return 0;
};