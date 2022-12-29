#include <stdio.h>

// make a program that read three floating point values: a,b and c. Then, calculate and show:
//the  area of the rectangled triangle that has base a and height c
//the area of the radius circle c.(pi=3.14159)
// the area of the trapezium which has A and B by base, and C by height
// the area of the square that has size B
// the area of the rectangle that has sides A and B

// bee 1012

int main(){
	float a;
	float b;
	float c;
	float pi = 3.14159;
	printf("Digite o valor a: \n");
	scanf("%f",&a);
	printf("DIgite o valor b: \n");
	scanf("%f",&b);
	printf("Digite o valor c: \n");
	scanf("%f",&c);
	float areaTriangRetang = ((a*c)/2);
	float areaCirculo = (pi*c*c);
	float areaTrapezio = (((a+b)*c)/2);
	float areaQuadrado = b*b;
	float areaRetangulo = a*b;
	
	printf("A area do triangulo retangulo de base %f e altura %f eh: \n",a,c);
	printf("A area do Circulo de raio %f eh: \n", c);
	printf("A area do trapezio de lados %f e %f e altura %f eh: \n", a,b,c);
	printf("A area do quadrado de lado % eh: \n",b);
	printf("A area do retangulo de lados %f e %f eh:  \n", a, b);
}
