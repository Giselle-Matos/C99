#include <stdio.h>

// dados dois vetores x e y, ambos com n elementos, n<50, determinar o produto escalar desses vetores

int main(){
	int n;
	printf("DIgite a quantidade de elementos dos vetores: ");
	scanf("%d",&n);
	
	if(n>=50){
		printf("O numero inserido eh muito grande!\n");
		main();
	}
	
	int x[n];
	int y[n];
	int i;
	int prodEscalar[n];
	
	for(i=0;i<n;i++){
		printf("DIgite o elemento da posiçao %d do vetor x: ",i);
		scanf("%d",&x[i]);
		
	}
	for(i=0;i<n;i++){
		printf("DIgite o elemento da posiçao %d do vetor y: ",i);
		scanf("%d",&y[i]);
	}
	
	for(i=0;i<n;i++){
		prodEscalar[i] = x[i]*y[i];
	}
	
	printf("O produto escalar dos dois vetores eh: ");
	
	for(i=0;i<n;i++){
		printf("%d ",prodEscalar[i]);
	}
	
	return 0;
}
