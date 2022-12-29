#include <stdio.h>

int main(){
	int a;
	printf("\nDigite um numero: ");
	scanf("%d",&a);
	int aux = a;
	int sucessor = ++a;
	int antecessor = --aux;
	printf("\nO sucessor eh: %d. O antecessor eh: %d", sucessor, antecessor);
	return 0;
}
