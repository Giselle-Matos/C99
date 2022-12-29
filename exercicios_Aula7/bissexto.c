#include <stdio.h>

// dado um ano, informe se ele eh ou nao bissexto. dica: um ano eh bissexto se ele eh 
// divisivel por 4 e 400, mas nao por 100

int main (){
	int ano;
	printf("\nDigite o seu ano em dias: ");
	scanf("%d",&ano);
	if (ano%400 == 0 && ano%4 == 0 && ano%100 != 0){
		printf("\nO ano eh bissexto");
	}
	else {
		printf("\nO ano nao eh bissexto");
	}
	return 0;
}
