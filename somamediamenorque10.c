#include <stdio.h>

int main(void)
{
    
    int i, menorque10 = 0, somadosnumeros;
    float mediadosnumeros;
    int vetor[6];
    
    
    for ( i = 0 ; i < 6 ; i++){
        printf("Digite um valor: ");
        scanf("%d",&vetor[i]);
        
        if (vetor[i] < 10){
            menorque10++;
        }
         somadosnumeros += vetor[i];
    }
    
   
    
    mediadosnumeros = (vetor[0] + vetor[1] + vetor[2] + vetor[3] + vetor[4] + vetor[5])/6;

    printf("A quantidade de números menores que 10 é de: %d \nA soma dos números é de: %d \nA média dos números é de: %.2f", menorque10, somadosnumeros, mediadosnumeros);
    
    return 0;
}
