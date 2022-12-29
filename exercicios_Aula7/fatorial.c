#include <stdio.h>

// escreva um programa que calcula o fatorial de um numero (faça com 3 comandos condicionais)

int main(){
	int a;
	printf("\nEscreva um numero: ");
	scanf("%d",&a);
	int i = 1;
	int fatorial = a;
	if (a!=0){
		if (a == 1){
			printf("\nresultado: 1");
		}
		else{
			while (a>1){
			
				fatorial = fatorial*(a-1);
				a = --a;
				if (a==1){
					break;
				}
			}
		}
	}
	printf("\nresultado: %d", fatorial);
	return 0;
	
}
