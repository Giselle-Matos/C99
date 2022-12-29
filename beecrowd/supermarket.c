#include <stdio.h>

// read a code of a product 1, the number of units of product 1, the price for one unit of product 1, the code of a product 2, the number of units of product 2 and the price for one unit of product 2. After this, calculate and show the amount to be paid.

int main(){
	int cod1;
	int cod2;
	float price1;
	float price2;
	int unid2;
	int unid1;
	
	printf("Bem vindo ao supermercado XL.\nPara realizar a sua compra, siga os passos a seguir.\n");
	
	printf("Digite o codigo do produto 1: \n");
	scanf("%d", &cod1);
	
	printf("Digite o valor de uma unidade do produto 1: \n");
	scanf("%f",&price2);
	
	printf("Digite o numero de unidades do produto 1: \n");
	scanf("%d", &unid1);
		
	printf("Digite o codigo do produto 2: \n");
	scanf("%d", &cod2);
	
	printf("Digite o valor de uma unidade do produto 2: \n");
	scanf("%f",&price2);
	
	printf("Digite o numero de unidades do produto 2: \n");
	scanf("%d", &unid2);
	
	float total = ((price1*unid1)+(price2*unid2));
	printf("O total gasto foi: %f\n", total);
}
