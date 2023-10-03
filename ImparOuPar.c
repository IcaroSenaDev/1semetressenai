#include <stdio.h>


int main() {

	int num;

	printf("Digite um numero \nDigite aqui:");
	scanf("%d",&num);
	
	if (num % 2 == 0){
		printf("O numero e PAR");
	}else{
		printf("O numero e IMPAR");
	}

}
