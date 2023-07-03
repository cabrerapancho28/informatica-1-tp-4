#include <stdio.h>
int main() {
	int notas[15];
	int frecuencias[11] = {0};
	int i;
	for (i = 0; i < 15; i++) {
		printf("Ingrese nota del alumno %d: ", i+1);
		scanf("%d", &notas[i]);
		while (notas[i] < 0 || notas[i] > 10){ //*establezco un rango//*
			printf("Nota invalida. Ingrese nota del alumno %d (entre 0 y 10): ", i+1);
			scanf("%d", &notas[i]);
		}
		frecuencias[notas[i]]++;
	}
	printf("frecuencia de notas\n");
	for (i = 0; i <= 10; i++) {
		printf("%d: %d\n", i, frecuencias[i]);
	}
	return (0);
}
