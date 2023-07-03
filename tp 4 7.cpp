#include <stdio.h>
#include <math.h>
#define PI 3.14159265359
int main() {
	double S[36], A[36],P[33];
	int i;
	for (i = 0; i < 36; i++) {
		A[i] = i * 10;
		S[i] = sin(A[i] * PI / 180);
	}
	printf("%10s %10s\n" , "x","y");
	for (i = 0; i < 36; i++){
		printf("%10.1f %10.6f\n", A[i], S[i]);
	}
	printf("\n\n\n");
	for ( i = 0; i < 33; i++){
		P[i] = (S[i] + S[i+1] + S[i+2]) / 3;
	}
	printf("%10s%10s%15s\n", "x", "y", "z");
	for(i = 0; i < 36; i++) {
		printf("%10.1f%10.4f", A[i], S[i]);
		if(i < 33) {
			printf("%15.4f", P[i]);
		}
		else {
			printf("%15s", "");
		}
		printf("\n");
	}
	return (0);
}
