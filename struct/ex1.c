#include <stdio.h>
typedef struct _frac{
        int numerador, denominador;
    } FRACAO;

float f();

int main(){

    FRACAO f1, f2;

    printf("DIgite o numerador da fracao 1: ");
    scanf("%d",&f1.numerador);
    printf("DIgite o denominador da fracao 1: ");
    scanf("%d",&f1.denominador);
    printf("DIgite o numerador da fracao 2: ");
    scanf("%d",&f2.numerador);
    printf("DIgite o denominador da fracao 2: ");
    scanf("%d",&f2.denominador);

    
    float soma = (f(f1)+f(f2));
    printf("A soma das frações é: %f\n",soma);
    float subtracao = (f(f1)-f(f2));
    printf("A subtração das frações é: %f\n", subtracao );
    float div = (f(f1)/f(f2));
    printf("A divisão das frações é: %f\n", div);
    float mult = (f(f1)*f(f2));
    printf("A multiplicação das frações é: %f\n", mult);
}
float f (FRACAO frc){
    return ((float)frc.numerador/(float)frc.denominador);
}

