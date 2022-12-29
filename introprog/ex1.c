#include <stdio.h>

// crie um programa que receba duas matrizes A e B ambas nxn com n<100 e calcule A-B, A+B, A*B. O programa deveimprimir as matrizes originais e os resultados de cada operação


int sub(int n,int matrizA[n][n],int matrizB[n][n]){

	int i;
	int j;
	int subt[n][n];
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			subt[i][j] = matrizA[i][j] - matrizB[i][j];
		}
		printf("\n");
	}
	printf("A-B = \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",subt[i][j]);
		}
		printf("\n");
	}
}

int soma(int n,int matrizA[n][n],int matrizB[n][n]){
	int i;
	int j;
	int soma[n][n];
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			soma[i][j] = matrizA[i][j] + matrizB[i][j];
		}
		printf("\n");
	}
	printf("A+B = \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",soma[i][j]);
		}
		printf("\n");
	}
}

int mult(int n,int matrizA[n][n],int matrizB[n][n]){
	
	int i;
	int j;
	int k;
	int multi[n][n];
	int aux;
	
	for(i=0;i<n;i++){
		for(k=0;k<n;k++){
			aux = 0;
			for(j=0;j<n;j++){
				// multi[i][k] = ?
				
				aux += matrizA[i][j]*matrizB[j][k];
			
			}
			multi[i][k] = aux;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",multi[i][j]);
		}
		printf("\n");
	}
	
}

int main(){
	int n;
	int i;
	int j;
	
	// matriz A
	printf("Digite a dimensao da sua matriz A: \n");
	scanf("%d",&n);
	int matrizA[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("DIgite o elemento da linha %d e coluna %d: \n",(i+1),(j+1));
			scanf("%d",&matrizA[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",matrizA[i][j]);
		}
		printf("\n");
	}
	
	//Matriz B
	printf("Digite a dimensao da sua matriz B: \n");
	scanf("%d",&n);
	int matrizB[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("DIgite o elemento da linha %d e coluna %d: \n",(i+1),(j+1));
			scanf("%d",&matrizB[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",matrizB[i][j]);
		}
		printf("\n");
	}
	
	
	int num;
	printf("Digite 1 para subtrair: \nDigite 2 para somar: \nDigite 3 para multiplicar: \n");
	scanf("%d",&num);
	
	
	switch(num){
	
		case 1:
			sub(n,matrizA,matrizB);
			break;
		case 2:
			soma(n,matrizA,matrizB);
		case 3: 
			mult(n,matrizA,matrizB);
		}
	return 0;
}

