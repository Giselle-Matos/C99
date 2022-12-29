#include <stdio.h>

// read four integer values named A, B, C and D. Calculate and print the difference of product A and B by the product of C and D (A*B-C*D).

int main(){
	int a, b, c, d;
	printf("Digite o primeiro numero: \n");
	scanf("%d",&a);
	printf("Digite o segundo numero: \n");
	scanf("%d",&b);
	printf("Digite o terceiro numero: \n");
	scanf("%d",&c);
	printf("Digite o quarto numero: \n");
	scanf("%d",&d);
	
	int prodAB = (a*b);
	int prodCD = (c*d);
	
	printf("\nO produto entre o primeiro e o segundo eh: %d. O produto entre o terceiro e o quarto eh: %d\n", prodAB, prodCD);
}
