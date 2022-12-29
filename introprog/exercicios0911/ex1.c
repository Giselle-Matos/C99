#include <stdio.h>

// crie u programa que preencha um vetor com numeros inteiros(n unidades); solicitar valor para o usuario e pesquisar se esse valor existe no vetor. Se existir, imprimir em qula posição esta, se nao existir, imprimir que ele nao existe.

int main(){
	int n;
	printf("Digite o tamanho do vetor: \n");
	scanf("%d",&n);
	int vet[n];
	int i;
	for(i=0;i<n;i++){
		printf("Digite o valor da posição %d do vetor: \n",i);
		scanf("%d",&vet[i]);
	}
	int valor;
	
	printf("Digite o valor que deseja pesquisar: \n");
	scanf("%d",&valor);
	
	int achou = 0;
	
	for(i=0;i<n;i++){
		
		if (vet[i]==valor){
			achou = 1;
		}
	}
	if (achou == 1){
		printf("O valor %d existe no vetor\n", valor);
	}
	else{
		printf("O valor %d NAO existe no vetor\n", valor);
	}
}
