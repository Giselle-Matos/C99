#include <stdio.h>

// escreva um programa que le o nome e a nota de 6 alunos e imprime esses dados em linhas numeradas e a npta de 10 caracteres e 2 casas decimais 

int main(){
	int n = 30;
	char alunos[6][n];
	float nota;
	int i;
	
	for(i=0;i<6;i++){
		printf("Insira o nome do aluno %d: \n",i+1);
		gets(alunos[i][n]);
	}
	
}
