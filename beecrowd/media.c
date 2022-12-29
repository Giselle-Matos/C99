#include <stdio.h>

int main() {
	float A;
	float B;
	printf("\nDigite a primeira nota:\n");
	scanf("%f",&A);
	if (A<0 || A>10){
		printf("\nPrimeiro valor inserido invalido. Por favor, digite outro:\n");
		scanf("%f",&A);
	};
	printf("\nDigite a segunda nota:\n");
	scanf("%f",&B);
	
	if (B<0 || B>10){
		printf("\nSegundo valor inserido invalido. Por favor, digite outro:\n");
		scanf("%f",&B);
	};
	float media = ((A*3.5+B*7.5)/2);
	printf("\nMedia:%f\n", media);
	return 0;
} 

/*consertar o if com um loop. ele reclama uma vez mas se inserir outro valor invalido nao fala nada*/
