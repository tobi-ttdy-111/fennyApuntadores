# include <stdio.h>
# include <stdlib.h>


void main (){

    int longitudFilas  = 0, longitudColumnas = 0;
    char ** puntero;
    char caracterLlenado = '*';
    char dimension;

    printf( "\nNumero longitudFilas y columnas: ");
    scanf( "%i", &longitudFilas );
    longitudColumnas = longitudFilas ;
    printf("\nCaracter de llenado: ");
    scanf( "%s", &caracterLlenado );

    puntero = malloc( longitudFilas * ( sizeof( char* ) ) );
    for ( int i = 0; i < longitudFilas ; i++ ) {
        dimension = i+'0';
        * ( puntero + i ) = malloc( longitudColumnas * ( sizeof( char ) ) );
        for ( int j = 0; j < longitudColumnas; j++ ) {
            if ( i == j ) *(*(puntero+i)+j) = dimension; else *( *(puntero+i)+j ) = caracterLlenado;
        };
    };

    for ( int i = 0; i < longitudFilas ; i++ ) {
        printf("[");
        for (int j = 0; j < longitudColumnas; j++) { printf(" %c ", *(*(puntero+i)+j)); };
        printf("]\n");
    };

    for (int i = 0; i < longitudFilas ; i++) {  free(*(puntero+i)); };

};
