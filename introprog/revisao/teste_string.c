#include <stdio.h>

//crie um vetor de strings onde cada string eh o nome de um amigo

int main(){
	char amigos[5][30];
	
	for(int i=0;i<5;i++){
		printf("Escreva o nome de um amigo: ");
		gets(amigos[i]);
	}
	
	
	for(int i=0;i<5;i++){
		printf("%s, ",amigos[i]);
	}
}
