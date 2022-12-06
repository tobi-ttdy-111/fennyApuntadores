#include <stdio.h>
#include <stdlib.h>
int notas[3][10];
int promedioMateria(int materia)
{
    int suma = 0;
    for (int i = 0; i < 10; i++)
    {
        suma += notas[ materia - 1 ][ i ];
    };
    return suma;
};
int main() {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            int nAleatorio = rand() % 11;
            notas[ i ][ j ] = nAleatorio;
        };
    };
    int materia;
    printf("\n1 - Materia 1");
    printf("\n2 - Materia 2");
    printf("\n3 - Materia 3");
    printf("\nIngresa el numero respectivo a la materia: ");
    scanf("%i", &materia);
    int sumatoria = promedioMateria(materia);
    float promedio = sumatoria / 10.0;
    printf("Promedio de la materia %i es: %.1f", materia, promedio );
    return 0;
};