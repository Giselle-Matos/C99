#include <stdio.h>

// escreva um programa em c que leia os elementos de uma matriz inteira 4x4 e imprimme os elementos da matriz toda  e depois da diagonal principal;

int main(){
	int n = 4;
	int matriz[n][n];
	int i;
	int j;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Digite o elemento da linha %d e coluna %d: ",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	
	printf("Sua matriz eh: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("Sua diagonal principal eh: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				printf("%d \n",matriz[i][j]);
				
			}
		}
	}
}
