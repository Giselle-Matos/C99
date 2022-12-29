#include <stdio.h>

// le 1 numero e diz se ele eh divisivel por 2 e por 3

int main () {
	int a;
	printf("\nDigite um numero: ");
	scanf("%d",&a);
	if (a%2 == 0 && a%3 == 0){
		printf("\nO numero eh divisivel por 2 e 3 ao mesmo tempo");
	}
	else{
		printf("\nO numero nao eh divisivel por 2 e  3 ao mesmo tempo");
	}
}
