#include <stdio.h>

int main(void){
    /*Faça algoritmo para ler um vetor de 10 valores  inteiros e depois identificar e mostrar o menor  valor. */
    
    int valores[10];
    int i;
    int menorvalor;
    
    for (i = 0; i < 10; i++){
        printf("Digite o %d° numero: ", i + 1);
        scanf("%d", &valores[i]);
        
        if (i == 0 || valores[i] < menorvalor){
            menorvalor = valores[i];
        }
    }
    
    printf("%d", menorvalor);
}
