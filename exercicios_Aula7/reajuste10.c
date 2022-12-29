#include <stdio.h>

// recebe um valor qualquer e imprime esse valor com reajuste de 10%

int main() {
	float a;
	printf("\nDigite um valor:");
	scanf("%f",&a);
	a = (a + a*0.1);
	printf("\nO valor com reajuste eh: %f \n", a);
	return 0;
}

