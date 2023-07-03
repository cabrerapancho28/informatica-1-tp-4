#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	char cadena[10];
	int longitud,i;
	printf("Introduzca una cadena: ");
	scanf("%s", cadena);
	printf("%c", cadena[10]);
	longitud = strlen(cadena);
	for( i = 0; i < longitud; i++)
	{
		cadena[i] = cadena[i]+ 3;
	}
	printf("La nueva cadena es:%s ",cadena);
	printf("\n\n");
	return (0);
}
