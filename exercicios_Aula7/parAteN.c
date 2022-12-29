#include <stdio.h>

// ler um numero n do teclado e imprimir todos os numeros pares de 1 ate n

int main () {
	int n;
	int i = 1;
	printf("\nEscreva um numero de um a 1000: ");
	scanf("%d",&n);
	if (n%2 == 0){
		for (i=1;i<=n*10000;i++){
			n = n-2;
			printf("%d\n", n);
			if (n == 0){
				break;
			}
		}
	}
	if (n%2 != 0){
		n = n-1;
		for (i=1;i<=n*10000;i++){
			n = n-2;
			printf("%d\n", n);
			if (n == 0){
				break;
			}
		}
	}

}
