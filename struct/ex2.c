#include <stdio.h>
typedef struct pessoa{
    char nome[100];
    float altura;
    float peso;
    long int cpf;
    char sexo[20];
}homano;
int main(){
    int n;
    
    printf("Digite a quantidade de pessoas que serão cadastradas: ");
    printf("\n");
    scanf("%d",&n);
    homano humano[n];
    int i;
    float imc;
    for(i=0;i<n;i++){
        printf("Digite o nome da pessoa %d: ", i);
        getc(humano[i].nome);
        printf("Digite a altura da pessoa %d: ",i);
        scanf("%f",&humano[i].altura);
        printf("Digite o peso da pessoa %d: ",i);
        scanf("%f",&humano[i].peso);
        printf("Digite o cpf da pessoa %d: ",i);
        scanf("%ld",&humano[i].cpf);
        printf("Digite o sexo da pessoa %d",i);
        getc(humano[i].sexo);
        imc = (pessoa.peso/pessoa.altura*pessoa.altura);
    }
    printf("QUal cpf vc quer procurar? ");
    scanf("%ld",&cpf);

    for(i=0;i<n;i++){
        if(humano[i].cpf == cpf){
            printf("O imc dessa pessoa é: %f",imc);
        }
        else{
            printf("Pessoa não cadastrada!");
        }
    }
}