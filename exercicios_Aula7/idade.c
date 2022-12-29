#include <stdio.h>

// faça um programa que, para um numero indeterminado de pessoas: leia a idade de cada uma, sendo que a idade zero indica o fim da leitura e nao deve ser considerada. a seguir, calcule:

//o numero de pessoas
// a idade media do  grupo
// a menor idade e a maior idade

int main(){
	int idade1;
	int i = 1;
	int soma = 0;
	float media = 0;
	int maior = 0;
	int menor = 99999;
	while(i>0){
		printf("\nDigite a idade: ");
		scanf("%d",&idade1);
		if (idade1==0){
			break;
		}
		if (idade1>maior){
			maior = idade1;
		}
		if (idade1<menor){
			menor = idade1;
		}
		i++;
		soma = (soma + idade1);
		
	}
	media = soma/(i-1);
	int quantidade = i-1;
	printf("\nO numero de pessoas eh: %d",quantidade);
	printf("\nA idade media do grupo eh: %f",media);
	printf("\nA menor idade eh: %d. A maior idade eh: %d",menor, maior);
	return 0;
}
