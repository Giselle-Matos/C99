#include <stdio.h>

// dada a idade de um nadador, classifica-o em uma das seguintes categorias ...

int main(){
	int idade;
	printf("\nDigite a idade do nadador: ");
	scanf("%d",&idade);
	if (idade >=5 && idade <=7){
		printf("\nCategoria: infantil A\n");
	}
	else if (idade >=8 && idade <=10){
		printf("\nCategoria: infantil B\n");
	}
	else if (idade >=11 && idade <=13){
		printf("\nCategoria: Juvenil A\n");
	}
	else if (idade >=14 && idade <=17){
		printf("\nCategoria: Juvenil B\n");
	}
	else if (idade >= 18){
		printf("\nCategoria: Adulto\n");
	}
	return 0;
}
