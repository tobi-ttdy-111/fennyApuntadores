#include <stdio.h>
#include <stdlib.h>
int main() {
    int numeroDeDatos;
    printf("Numero de datos: ");
    scanf("%i", &numeroDeDatos);
    float *arrayNumeros;
    arrayNumeros = malloc(sizeof(float) *numeroDeDatos);
    float valor = 0;
    for (int i = 0; i < numeroDeDatos; i++)
    {
        printf("valor numero %i : ", i);
        scanf("%f", &valor);
        *(arrayNumeros + i) = valor;
    };
    float sumatoria;
    float mediaNumeros;
    float vMayor = *(arrayNumeros);
    float vMenor = *(arrayNumeros);
    for (int i = 0; i < numeroDeDatos; i++)
    {
        sumatoria += *(arrayNumeros + i);
        if (*(arrayNumeros + i) < vMayor)
        {
            vMayor = *(arrayNumeros + i);
        };
        if (*(arrayNumeros + i) > vMenor)
        {
            vMenor = *(arrayNumeros + i);
        };
    };
    mediaNumeros = sumatoria / numeroDeDatos;
    printf("media: %.2f\n", mediaNumeros);
    printf("numero menor: %.2f\n", vMayor);
    printf("numero mayor: %.2f\n", vMenor);
    return 0;
};