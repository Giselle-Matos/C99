#include <stdio.h>

// calculate and show the volume of a sphere being provided the value of its radius. THe formula to calculate the volume is: (4/3)*pi*r^3. Consider pi = 3.14159
// bee 1011

int main(){
	float pi = 3.14159;
	float r;
	printf("DIgite o raio da esfera: \n");
	scanf("%f",&r);
	float raioCubo = r*r*r;
	float volume = ((4/3)*pi*raioCubo);
	printf("O volume da esfera eh: %f",volume);
}
