#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	int num1,num2,num3;
	
	printf("Qual o valor do primeiro numero?\n");
	scanf("%d", &num1);
	printf("Qual o valor do segundo numero?\n");
	scanf("%d", &num2);
	printf("Qual o valor do terceiro numero? \n");
	scanf("%d", &num3);
	
	printf("A multiplicação de %d x %d x %d = %d", num1,num2,num3, num1*num2*num3);

}
