#include <stdio.h>
#include <stdlib.h>
void main() {
    int tamaño;
    printf("Medida del vector: ");
    scanf("%i", &tamaño);
    int *numeros = malloc(sizeof(int) *tamaño);
    printf("\nArreglo\n");
    for (int i = 0;i < tamaño; i++)
    {
        *(numeros+i) = rand() % 11;
        printf("numero rand de *(numeros + %i) = %i\n", i, *(numeros+i));
    };
    free(numeros);
};