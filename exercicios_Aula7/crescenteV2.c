#include <stdio.h>


//Leia n numeros inteiros e diga se a sequencia lida esta em ordem crescente. 
//SEGUNDA TENTATIVA AGORA SEM VETORES

int main(){
	int a;
	int b;
	int n;
	int verificacao;
	printf("\nDIgite a quantidade de numeros que serao inseridos: ");
	scanf("%d",&n);
	for (int i=0;i<(n/2);i++){
		printf("\nDigite um numero: ");
		scanf("%d",&a);
		printf("\nDigite outro numero: ");
		scanf("%d",&b);
		if (a<=b){
			verificacao = 1;
		}
		else{
			printf("\nOs numeros NAO estao em ordem crescente");
			verificacao = 0;
			break;
		}
	}
	if (verificacao==1 && n%2!=0){
			printf("\nDigite um numero: ");
			scanf("%d",&a);
			if (b<=a){
				printf("\nEh crescente.");
			}
			else {
				printf("\nOs numeros NAO estao em ordem crescente");
			}
	}
	return 0;
}
