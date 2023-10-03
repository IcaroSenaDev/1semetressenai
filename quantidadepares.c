#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int vetor[10];
	int par = 0;
	
	for (int i = 0; i < 10; i++){

	printf("Digite 10 valores inteiros: ");
	scanf("%d", &vetor[i]);
		 
		 if (vetor[i]%2 == 0){
		 			par++;
		 	
		 }

    }
		 printf("%d",par);
}
