#include <stdio.h>

//crie um programa qu einforme ao usuario o tamanho de um unsigned int, long douuble, void e um char

int main(){
	int i = 3;
	long double j = (1.5*(10000));
	
	char vet[30];
	
	int tamanho1 = sizeof(i);
	int tamanho2 = sizeof(j);

	int tamanho4 = sizeof(vet[30]);
	
	printf("O tamanho de i = %d",tamanho1);
	printf("O tamanho de j = %d",tamanho2);

	printf("O tamanho de vet = %d",tamanho4);
}
