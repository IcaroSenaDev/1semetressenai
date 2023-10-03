#include <stdio.h>

int main(void){
    /*Elabore um programa que leia 10 valores inteiros guarde em um vetor. 
    Crie mais dois vetores de nome cubo e Quadrado e preencha com os valores do primeiro vetor. 
    Calcule o cubo dos valores do primeiro vetor e guarde no vetor cubo. 
    Faça a mesma coisa com o vetor quadrado. */
    
    int vinteiro[10];
    int vcubo[10];
    int vquadrado[10];
    int i;
    
    for (i = 0; i < 10; i++){
        printf("Digite O %d° número: ", i + 1);
        scanf("%d", &vinteiro[i]);
        
        vcubo[i] = ( vinteiro[i] ^ 3 );
        vquadrado[i] = ( vinteiro[i] ^ 2 );
    }

            for (i = 0; i < 10; i++){
            printf("Valores preenchidos: %d\n", vinteiro[i]);
        }
            for (i = 0; i < 10; i++){
            printf("Valores ao Cubo: %d\n", vcubo[i]);
        }
            for (i = 0; i < 10; i++){
            printf("Valores ao Quadrado: %d\n", vquadrado[i]);
        }
        
        printf("\n\n");
}
