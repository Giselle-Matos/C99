#include <stdio.h>

// faça um programa que receba dois numeros X e Y e, sendo X<Y, calcule e mostre:

// a soma dos numeros pares desse intervalo de numeros, incluindo os numeros digitados
// a multiplicacao dos numeros impares desse intervalo, incluindo os digitados.

int main(){
	int x;
	int y;
	printf("\nDigite o menor numero: ");
	scanf("%d",&x);
	printf("\nDigite o maior numero: ");
	scanf("%d",&y);
	int i;
	int soma=0;
	int multiplicacao=1;
	int aux;
	if (x>y){
		aux = y;
		y = x;
		x = aux;
	}
	i = x;
	while(x<=y){
		if (x%2==0){
			soma = soma + x;
		}
		else {
			multiplicacao = multiplicacao*x;
		}
		x++;
	}
	printf("\nSoma = %d. Multiplicaçao = %d\n", soma, multiplicacao);
	return 0;
}
