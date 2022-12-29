#include <stdio.h>


// make a program that reads a seller's name, his fixed salary and the sale's total made by  himself in the month (in money). Considering that this seller receives 15% over all products sold, write the final salary of this seller at the end of the month, with two decimal places.

int main(void){
	char nome[30];
	float vendas;
	float salario;
	printf("Digite o seu nome: \n");
	scanf("%s",nome);
	
	printf("Digite o seu salario fixo: \n");
	scanf("%f",&salario);
	
	printf("Digite o total de vendas feitas em dinheiro: \n");
	scanf("%f",&vendas);
	float salarioFinal = (vendas*0.15);
	printf("%s, seu salario final eh %f.",nome, salarioFinal);
	
	
}
