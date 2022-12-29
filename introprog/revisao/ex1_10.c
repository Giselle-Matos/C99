#include <stdio.h>

//crie um programa que preencha um vetor com numeros inteiros (n unidades); solicitar valor apra o usuario e pesquisar se esse valor existe no vetor. Se existir, immprimir em qual posiçao do vetor est'a. Se nao existir, imprimir que ele nao existe

int main(){
	int i;
	int n;
	printf("Digite a quantidade de elementos do vetor: ");
	scanf("%d",&n);
	int valor;
	int vetor[n];
	int verificador=0;
	
	
	printf("Agora, vamos preencher o vetor.\n");
	
	for(i=0;i<n;i++){
		printf("Digite a posiçao %d do vetor: ",i);
		scanf("%d",&vetor[i]);
	}
	
	printf("Digite o valor que deseja pesquisar no vetor: ");
	scanf("%d",&valor);
	
	for(i=0;i<n;i++){
		if(vetor[i] == valor){
			printf("Esse valor existe no vetor e esta na posiçao %d \n",i);
			verificador = 1;
		}
	}
	if (verificador == 0){
		printf("Esse valor nao existe no vetor.");
	}
}
