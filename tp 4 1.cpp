#include <stdio.h>
#include <math.h>

int main() {
	int i;
	float valores[5];
	float promedio = 0;
	float error_cuadratico_medio = 0;
	for (i = 0; i < 5; i++) {
		printf("Ingrese valor %d: ", i+1);
		scanf("%f", &valores[i]);
		promedio += valores[i];
	}
	promedio /= 5;
	for (i = 0; i < 5; i++) {
		error_cuadratico_medio += pow(valores[i] - promedio, 2);
	}
	error_cuadratico_medio /= 5;
	error_cuadratico_medio = sqrt(error_cuadratico_medio);
	printf("El error cuadratico medio respecto al promedio es: %f\n", error_cuadratico_medio);
	return (0);
}
