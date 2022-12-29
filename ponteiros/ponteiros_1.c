#include <stdio.h>

// crie 3 variaveis de tipos diferentes, atribua valores, imprima o valor e o endereço de memoria de cada uma;

int main(){
	int x;
	float y;
	char z;
	int *px;
	float *py;
	char *pz;
		
	x = 1;
	y = 2.3;
	z = 'g';
	px = &x;
	py = &y;
	pz = &z;
	
	printf("\n %d, %f, %c \n %p %p %p \n", x, y, z, px, py, pz);
	return 0;
}
