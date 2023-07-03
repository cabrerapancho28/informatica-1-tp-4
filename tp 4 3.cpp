#include <stdio.h>

int main(){
	int notas[10];
	float promedio = 0;
	int i, encima = 0, debajo = 0;
	for (i = 0; i < 10; i++) {
		printf("Ingrese valor %d: ", i+1);
		scanf("%d", &notas[i]);
		promedio += notas[i];
	}
	promedio /= 10;
	for (i = 0; i < 10; i++){
		if (notas[i] > promedio){
			encima++;
		}
		else{
			if (notas[i] < promedio){
				debajo++;
			}
		}
	}
	printf("El promedio es: %.2f\n", promedio);
	printf("la cantidad de alumnos que tuvieron notas por encima del promedio: %d\n", encima);
	printf("la cantidad de alumnos que tuvieron notas por debajo del promedio: %d\n", debajo);
	return (0);
}
