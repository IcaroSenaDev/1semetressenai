#include <stdio.h>

int main(void){
    
    /*Dada uma seqüência numérica de 20 elementos armazenados num vetor, determinar o índice (posição)
    do maior elemento do conjunto. Suponha que os elementos sejam distintos.*/
    
    int vetor[20];
    int i;
    int numero = 0;
    
    for (i = 0; i < 20 ; i++){
        
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
        
        if (vetor[i] > numero){
            numero = vetor[i];
        }
    }
    
    printf("O maior número é %d", numero);
}
