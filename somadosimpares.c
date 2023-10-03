#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int vetor[6];
	int soma;
	
	for (int i = 0; i < 10; i++){

	printf("Digite 6 valores inteiros: ");
	scanf("%d", &vetor[i]);
		 
		 if (vetor[i]%2 == 1){
			soma += vetor[i];
		 	
		 }

    }
		 printf("%d",soma);
}
