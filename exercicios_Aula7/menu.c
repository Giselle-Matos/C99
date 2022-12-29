#include <stdio.h>

// criar um programa que realize os seguintes calculos:

// quadrado de um numero
// media entre n numeros
// soma
// subtracao
// divisao
// multiplicacao
// encerrar 

// o programa deve apresentar menu de opçoes para o usuario, ele deve escolher que calculo deseja realizar(use switch). O programa so deve parar de executar quando o usuaro escolher encerrar (use o comando if - break).

int main (){
	int a;
	MENU:
		printf("\nDigite 1 para calcular o quadrado de um numero");
		printf("\nDigite 2 para calcular a media entre 2 numeros");
		printf("\nDigite 3 para calcular a soma entre n numeros");
		printf("\nDigite 4 para calcular a subtraçao entre n numeros");
		printf("\nDigite 5 para calcular a multiplicaçao entre n numeros");
		printf("\nDigite 6 para encerrar.\n\n");
		scanf("%d",&a);
	switch(a){
		case 1:
			int x;
			printf("\nDigite um numero:  ");
			scanf("%d",&x);
			int sqrt = x*x;
			printf("\nA raiz quadrada desse numero eh: %d\n",sqrt);
			
			// uso do goto para voltar ao menu
			
			printf("\nDeseja realizar mais alguma operaçao? Se sim, digite 10. Se nao, digite 6.\n");
			scanf("%d",&a);
			if (a==6){
				break;
			}
			else if (a==10){
				goto MENU;
			}
			
			
		case 2:
			int w;
			int y;
			int media;
			printf("\nDigite o primeiro numero: ");
			scanf("%d",&w);
			printf("\nDigite o segundo numero: ");
			scanf("%d",&y);
			media = (w+y)/2;
			printf("\nA media entre esses numeros eh: %d\n",media);
			
			// uso do goto para voltar ao menu
			
			printf("\nDeseja realizar mais alguma operaçao? Se sim, digite 10. Se nao, digite 6.\n");
			scanf("%d",&a);
			if (a==6){
				break;
			}
			else if (a==10){
				goto MENU;
			}
			
			
		case 3:
			int z;
			int soma = 0;
			int i;
			int n;
			printf("\nDigite a quantidade de numeros que serao somados: \n");
			scanf("%d",&n);
			for (i=1;i<=n;i++){
				printf("\nDigite um numero: \n");
				scanf("%d",&z);
				soma = soma + z;
			}
			printf("\nA soma desses numeros eh: %d", soma);
			
			// uso do goto para voltar ao menu
			
			printf("\nDeseja realizar mais alguma operaçao? Se sim, digite 10. Se nao, digite 6.\n");
			scanf("%d",&a);
			if (a==6){
				break;
			}
			else if (a==10){
				goto MENU;
			}
			
			
		case 4:
			int b;
			int sbt = b;
			int aux;
			printf("\nDigite a quantidade de numeros que serao subtraidos: \n");
			scanf("%d",&n);
			printf("\nDigite o primeiro numero: ");
			scanf("%d",&b);
			for (i=1;i<=n;i++){
				printf("\nDigite outro numero: \n");
				scanf("%d",&aux);
				sbt = sbt - aux;
			}
			int subtracao = b + sbt;
			printf("\nA subtraçao desses numeros eh: %d", subtracao);
			
			// uso do goto para voltar ao menu
			
			printf("\nDeseja realizar mais alguma operaçao? Se sim, digite 10. Se nao, digite 6.\n");
			scanf("%d",&a);
			if (a==6){
				break;
			}
			else if (a==10){
				goto MENU;
			}
			
			
		case 5:
			int m;
			printf("\nDIgite a quantidade de numeros que serao multiplicados: \n");
			scanf("%d",&n);
			int mult = 1;
			for (i=1;i<=n;i++){
				printf("\nDigite um numero: ");
				scanf("%d",&m);
				mult = mult*m;
			}
			printf("\nA multiplicaçao dos numeros eh: %d",mult);
			
			// uso do goto para voltar ao menu
			
			printf("\nDeseja realizar mais alguma operaçao? Se sim, digite 10. Se nao, digite 6.\n");
			scanf("%d",&a);
			if (a==6){
				break;
			}
			else if (a==10){
				goto MENU;
			}
			
			
			
		case 6:
			break;
		default:
			printf("\nOpcao invalida");
			
			// uso do goto para voltar ao menu
			
			printf("\nDeseja realizar alguma operaçao? Se sim, digite 10. Se nao, digite 6.\n");
			scanf("%d",&a);
			if (a==6){
				break;
			}
			else if (a==10){
				goto MENU;
			}
	}
}



//RECADO: Ola, professor. Mesmo contra as suas orientaçoes, resolvi utilizar o comando goto para voltar ao menu e escolher outras opçoes. Sinto muito por isso, mas foi a unica forma que consegui pensar para permitir que o usuario fizesse esse retorno. Alem disso, durante esse e outros exercicios, escrevi "eh", mesmo sabendo que a ortografia esta errada, pois o linux nao permite escrever acento. Espero que entenda. 
// Att. Giselle Matos   :)







