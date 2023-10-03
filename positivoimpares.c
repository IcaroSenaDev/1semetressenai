#include <stdio.h>

int main(void)
{
    int i, positivos = 0, impares = 0;
    int vetor[10];
    
    for ( i = 0 ; i < 10 ; i++){
        printf("Digite um valor: ");
        scanf("%d",&vetor[i]);
        
        if (vetor[i] >= 0){
            positivos++;
        }
        if (vetor[i]%2 != 0){
            impares++;
        }
        
    }

    printf("A quantidade de números positivos é de: %d \nA quantidade de números impares é de: %d", positivos, impares);
    
    return 0;
}
