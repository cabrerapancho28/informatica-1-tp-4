#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
	char cadena[10];
	int vocales = 0;
	printf("Ingrese una cadena: ");
	fgets(cadena, 10, stdin);
	for(int i = 0; i < 10; i++) {
		switch(tolower(cadena[i])) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			vocales++;
			break;
		default:
			break;
		}
	}
	printf("La cadena ingresada contiene %d vocales.\n", vocales);
	return (0);
}
