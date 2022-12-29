#include <stdio.h>

int main() {
	float pi = 3.1415;
	int raio;
	printf("\nDigite o raio:\n");
	scanf("%d", &raio);
	int area = (pi*raio*raio);
	printf("Area do circulo: %d", area);
	return 0;
}
