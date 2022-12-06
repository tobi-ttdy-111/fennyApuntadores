#include <stdio.h>
#include <stdlib.h>
int dim1;
int dim2;
int punt0 = 0;
int punt1 = 1;
void getDimensiones() {
    do
    {
        system("cls");
        if (dim1 != dim2) {
            printf("Las dimensiones deben ser iguales\n");
        };
        printf("tamaño dimension 1: ");
        scanf("%i", &dim1);
        printf("tamaño dimension 2: ");
        scanf("%i", &dim2);
    } while (dim1 != dim2);
};
int main() {
    getDimensiones();
    int * pArray[ dim1 ][ dim2 ];
    for (int i = 0; i < dim1; i++)
    {
        for (int j = 0; j < dim2; j++) {
            pArray[ i ][ j ] = &punt0;
        };
    };
    int diagonal2 = dim1 - 1;
    for (int i = 0; i < dim1; i++)
    {
        pArray[ i ][ i ] = &punt1;
        pArray[ i ][ diagonal2 - i ] = &punt1;
    };
    system("cls");
    printf("arreglo de %i x %i", dim1, dim2);
    for (int i = 0; i < dim1; i++)
    {
        printf("\n");
        for (int j = 0; j < dim2; j++) {
            printf("%i   ", * pArray[ i ][ j ]);
        };
    };
    return 0;
};