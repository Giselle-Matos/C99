#include <stdio.h>

// faça um programa que inicialize um vetor com 20 elementos inteiros com o valor do respectivo indice, e depois mostre o conteudo do mesmo na tela. No lugar da operação de indexação, utilize apenas ponteiros e aritmetica de ponteiros


int main(){
	int n = 20;
	int v[n];
	int i;
	int *p;
	
	p = v; // p =&v[0];
	for(i = 0; i < n; i++){
		p++;
		*p = i;
		printf("Posição %d = %d, endereço = %p\n", i, *p, p);
	}
	
	
	return 0;	
}

// printf(*p) = valor do vetor 
// printf(p) = endereço para o qual o vetor esta apontando
