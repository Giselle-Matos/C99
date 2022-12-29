#include <stdio.h>

// escreva um programa em c que imprima na saida padrao as suas informaçoes pessoais. 

int main(){
	char nome[50];
	char nascimento[8];
	char naturalidade[30];
	char nacionalidade[30];
	char matricula[15];
	
	printf("Digite o seu nome completo: ");
	gets(nome);
	
	printf("DIgite a sua data de nascimento: ");
	gets(nascimento);
	
	printf("Digite a sua naturalidade: ");
	gets(naturalidade);
	
	printf("Digite a sua nacionalidade: ");
	gets(nacionalidade);
	
	printf("DIgite o numero de sua matricula: ");
	gets(matricula);
	
	
	printf("Esses sao os seus dados de inscriçao: \n\n");
	printf("Nome: %s\nData de nascimento: %s\nNaturalidade: %s\nNacionalidade: %s\nMatricula: %s\n",nome,nascimento,naturalidade,nacionalidade,matricula);
}
