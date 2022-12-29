#include <stdio.h>

//write aprogram that reads an employee's number, his/her worked hours number in an month and the amount he received per hour. Print the employee's number and salary that he/she received at the end of the month, with two decimal places. 

int main(){
	int hours;
	float money;
	printf("Digite a quantidade de horas trabalhadas: ");
	scanf("%d",&hours);
	printf("Digite o quanto vc ganha por horas trabalhadas: ");
	scanf("%f",&money);
	float salary = (money*hours);
	printf("A o salario foi: %0.2f\n", salary);  
	return 0;
}
