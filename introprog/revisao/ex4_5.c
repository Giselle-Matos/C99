#include <stdio.h>

//escreva um programa que leia a data de aniversario de uma pessoa

int main(){
	char aniv[11];
	
	printf("Digite a sua data de aniversario: ");
	gets(aniv);
	
	printf("Voce nasceu em: %s",aniv);
}
