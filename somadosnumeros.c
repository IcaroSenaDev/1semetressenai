#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	int num1,num2;
	
	printf("Qual o valor do primeiro numero?\n");
	scanf("%d", &num1);
	printf("Qual o valor do segundo numero?\n");
	scanf("%d", &num2);
	
	printf("A soma de %d + %d = %d", num1,num2,num1+num2);

}
