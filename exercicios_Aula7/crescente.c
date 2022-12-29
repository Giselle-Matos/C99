#include <stdio.h>

// le 4 numeros e os apresenta em ordem crescente

int main(){
	int a;
	int b;
	int c;
	int d;
	
	printf("\nDigite o primeiro numero: ");
	scanf("%d",&a);
	printf("\nDigite o segundo numero: ");
	scanf("%d",&b);
	if (b>a){
		int aux = a;
		a = b;
		b = aux;
	}
	printf("\nDifite o terceiro numero: ");
	scanf("%d",&c);
	if (c>b){
		int aux = b;
		b = c;
		c = aux;
	}
	printf("\nDIgite o quarto numero: ");
	scanf("%d",&d);
	if (d>c){
		int aux = c;
		c = d;
		d = aux;
	}
	
	printf("%d, %d, %d, %d", d,c,b,a);
	return 0;
}
