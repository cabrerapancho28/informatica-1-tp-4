#include <stdio.h>
int main() {
	int arr[10];
	int pares[10/2], impares[10/2];
	int i, j = 0, k = 0;
	float h = 0;
	float l = 0;
	for (i=0;i<10;i++){
		printf("Ingrese el valor %d\n",i);
		scanf("%d",&arr[i]);
	}
	for (i = 0; i < 10; i++) {
		if (i % 2 == 0) { // si el �ndice es par, lo agrego al arreglo de pares//
			pares[j] = arr[i];
			j++;
		} else { // si el �ndice es impar, lo agrego al arreglo de impares//
			impares[k] = arr[i];
			k++;
		}
	}
	printf("Arreglo original: ");
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("Arreglo de �ndices pares: ");
	for (i = 0; i < 10/2; i++) {
		printf("%d ", pares[i]);
		h += pares[i];
	}
	h /= 5;
	printf("El promedio de los pares es: %f\n", h);
	printf("\n");
	printf("Arreglo de �ndices impares: ");
	for (i = 0; i < 10/2; i++) {
		printf("%d ", impares[i]);
		l += pares[i];
	}
	l /= 5;
	printf("El promedio de los impares es: %f\n", l);
	printf("\n");
	return (0);
}
