#include <stdio.h>
#define TAMANIO 10
int main(){
	int a[ TAMANIO ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45,100};
	int j; /* contador de pasadas */
	int i; /* contador de comparaciones */
	int k; /* ubicación temporal utilizada para el intercambio de
	elementos */
	printf("Elementos de datos en el orden original\n");
	for ( i = 0; i < TAMANIO; i++ ){
		printf( "%4d", a[ i ] );
	}
	/* compara los elementos y los intercambia si el primer
	elemento es menor que el segundo */
	for ( j = 1; j < TAMANIO; j++ ){
		for ( i = 0; i < TAMANIO + 1; i++){ /* ciclo para controlar el número de
			comparaciones por pasada */
			if ( a[ i ] > a[ i - 1 ] ){
				k = a[ i ];
				a[ i ] = a[ i - 1 ];
				a[ i - 1 ] = k;
			}
		}
	}
	printf( "\nElementos de datos en orden descendente\n" );
	for ( i = 0; i < TAMANIO; i++ ){
		printf( "%4d", a[ i ] );
	}
	printf( "\n" );
	return (0);
}
