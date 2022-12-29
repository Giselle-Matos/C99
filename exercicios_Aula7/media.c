#include <stdio.h>

// numa faculdade, os alunos com media pelo menos 7.0 sao aprovados. Aqueles com media inferior a 3.0 sao reprovados e os demais ficam de exame final. Dada a nota de um aluno informe a sua condiçao

int main() {
	float nota1;
	float nota2;
	printf("\nInforme a sua primeira nota: ");
	scanf("%f",&nota1);
	printf("\nInforme a segunda nota: ");
	scanf("%f",&nota2);
	float media = ((nota1+nota2)/2);
	if (media >= 7.0){
		printf("\nVoce foi aprovado\n");
	}
	else if (media < 3.0){
		printf("\nVoce foi reprovado\n");
	}
	else {
		printf("\nVoce esta de prova final\n");
	}
}
