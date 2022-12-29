#include <stdio.h>

// dada uma sequencia de 0<n<100 numeros inteiros (n fornecido pelo usuario, mas deve respeitar o limite), imprimi-la na ordem inversa à da leitura;

int main(){
	int tam;
	printf("DIgite a quantidade de numeros da sequencia: \n");
	scanf("%d",&tam);
	int vet[tam];
	int i;
	int verificador = 0;
	for (i=0;i<tam;i++){
		printf("Digite o elemento %d da sequencia: \n",(i+1));
		scanf("%d",&vet[i]);
		if((vet[i]<0) || (vet[i]>100)){
			printf("Numero invalido\n");
			verificador = 1;
			break;
		}
	}
	if (verificador == 0){
		for(i=(tam-1);i>=0;i--){
		printf("%d ",vet[i]);
		}
	}
}

