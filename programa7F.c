#include <stdio.h>
#include <stdlib.h>
void main() {
    int longitudArray;
    printf("\nLongitud matriz: ");
    scanf("%i", &longitudArray);
    int numeroRelleno;
    printf("Numero principal: ");
    scanf("%i", &numeroRelleno);
    int arreglo[longitudArray][longitudArray];
    for (int i = 0; i < longitudArray; i++)
    {
        for (int j = 0; j < longitudArray; j++) {
            arreglo[i][j] = numeroRelleno;
        };
        arreglo[i][i] = i;
    };
    for (int i = 0; i < longitudArray; i++)
    {
        printf("\n");
        for (int j = 0; j < longitudArray; j++) {
            printf("%i   ", arreglo[i][j]);
        };
    };
};