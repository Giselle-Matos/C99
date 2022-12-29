#include <stdio.h>

// usando apenas operadores relacionais, escreva um programa que le umm numero e verifica se este eh 
// par e menor do que 100
// par e maior ou igual a 100
// impar e menor do que 100
// impar  e maior ou igual a 100

int main(){
	int a;
	printf("\nDigite um numero: ");
	scanf("%d",&a);
	if ((a%2 == 0) && (a<100)){
		printf("\nO numero eh par e menor do que 100");
	}
	else if ((a%2 == 0) && (a>=100)){
		printf("\nO numero eh par e maior ou igual a 100");
	}
	if((a%2 != 0) && (a<100)){
		printf("\nO numero eh impar e menor do que 100");
	}
	else if((a%2 != 0) && (a>=100)){
		printf("\nO numero eh impar e maior ou igual a 100");
	}
}
