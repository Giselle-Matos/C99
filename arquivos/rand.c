#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// le um numero N e sorteia n numeros inteiros entre 0 e 100 gravand0 todos em um arquivo de texto. A primeira linha o arquivo devera conter a quantidade de numeros

FILE * arquivo;

int main(){
	int N;
	printf("Digite um numero entre 0 e 100: ");
	scanf("%d", &N);
	
	arquivo = fopen("arquivo.txt", "a");
	srand(time(NULL));
	
	fprintf(arquivo, "\nQtd: %d \n", N);
	
	for(int i = 0; i<N;i++){
		
		fprintf(arquivo, "%d ",rand()%100); 
		
	}
	return 0;
}
