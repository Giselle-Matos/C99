#include <stdio.h>

// le n numeros e imprime o maior e o menor dentre eles


int main() {
	int i = 1;
	int num;
	int maior=0;	
	int menor=9999999;
	int aux;
	while (i>0){
		printf("\nEscreva um numero inteiro positivo. Para parar digite -1: ");
		scanf("%d",&num);
		aux = num;
		
		if (aux==-1){
			break;
		}
		if (num>maior){
			maior = num;
		}
		if (num<menor){
			menor = num;
		}
		
	}
	printf("\nO maior valor eh: %d. O menor valor eh: %d\n", maior, menor);
	return 0;
}
