#include <stdio.h>

// Crie 3 vetores com 4 posições, o primeiro de caracter, o segundo inteiro e o terceiro de ponto flutuante. Insira elementos. Imprima o endereço de memoria de cada elemento dos tres vetores.

int main(){
	char v1[4];
	v1[0] = 'a';
	v1[1] = 'b';
	v1[2] = 'c';
	v1[3] = 'd';
	int v2[4];
	v2[0] = 0;
	v2[1] = 1;
	v2[2] = 2;
	v2[3] = 3;
	float v3[4];
	v3[0] = 0.0;
	v3[1] = 0.1;
	v3[2] = 0.2;
	v3[3] = 0.3;
	int i;
	char *pc;
	int *pi;
	float *pf;
	
	
	for(i=0;i<4;i++){
		pc = &v1[i];
		printf("\n\nO endereço do elemento %d, que é %c, do vetor de caracteres é: %p\n", i,v1[i],pc);
	}
	
	for(i=0;i<4;i++){
		pi = &v2[i];
		printf("\n\nO endereço do elemento %d, que é %d, do vetor de inteiros é: %p\n", i,v2[i],pi);
	}
	
	for(i=0;i<4;i++){
		pf = &v3[i];
		printf("\n\nO endereço do elemento %d, que é %f, do vetor de float é: %p\n", i,v3[i],pf );
	}
	
	return 0;
	
}
