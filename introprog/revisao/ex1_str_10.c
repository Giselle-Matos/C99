#include <stdio.h>

//Escrever um programa que leia 3 strings (tamanho maximo = 100) e imprimir quantas vogais cada uma tem

int main(){
	char str1[100];
	char str2[100];
	char str3[100];
	
	printf("DIgite o valor da primeira string: ");
	gets(str1);
	
	printf("DIgite o valor da segunda string: ");
	gets(str2);
	
	printf("DIgite o valor da terceira string: ");
	gets(str3);
	
	int i;
	int contador1 = 0;
	int contador2 = 0;
	int contador3 = 0;
	
	for(i=0;i<100;i++){
		if((str1[i] == "a") || (str1[i] == "e") || (str1[i] == "i") || (str1[i] == "o") || (str1[i] == "u")){
			contador1 = contador1 + 1;
		}
	}
	for(i=0;i<100;i++){
		if((str2[i] == "a") || (str2[i] == "e") || (str2[i] == "i") || (str2[i] == "o") || (str2[i] == "u")){
			contador2 = contador2 + 1;
		}
	}
	for(i=0;i<100;i++){
		if(str3[i] == "a" || str3[i] == "e" || str3[i] == "i" || str3[i] == "o" || str3[i] == "u"){
			contador3 = contador3 + 1;
		}
	}
	
	printf("A string 1 tem %d vogais",contador1);
	printf("A string 2 tem %d vogais", contador2);
	printf("A string 3 tem %d vogais", contador3);
}

// CONSERTAR CODIGO D=VERIFICAR POR QUE O CONTADOR NAO ESTA CONTANDO
