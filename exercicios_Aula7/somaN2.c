#include <stdio.h>

// leia n numeros e informe a soma

int main(){
	int soma = 0;
	int n;
	printf("\nDigite a quantidade de numeros que serao somados: ");
	scanf("%d",&n);
	int i;
	for (i=0;i<n;i++){
		int num;
		printf("\nDigite um numero: ");
		scanf("%d",&num);
		soma += num;
	}
	printf("\nSoma = %d", soma);
}
