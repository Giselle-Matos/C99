#include <stdio.h>

// dados a  altura e o sexo de uma pessoa, determine o seu peso ideal de acordo com as formulas:

// homens -> peso ideal = 72,7*altura-58
// mulheres -> peso ideal = 62,1*altura-44,7

int main(){
	float altura;
	int sexo;
	printf("\nDigite a sua altura: ");
	scanf("%f",&altura);
	printf("\nDigite 1 se seu sexo eh feminino. Digite 2 se seu sexo eh masculino: ");
	scanf("%d",&sexo);
	if (sexo == 1){
		float pesoIdeal =((62.1*altura)-44.7);
		printf("\nO peso ideal para voce eh: %f", pesoIdeal);
	}
	else if (sexo == 2){
		float pesoIdeal =((62.1*altura)-44.7);
		printf("\nO peso ideal para voce eh: %f", pesoIdeal);
	}
	return 0;
}
