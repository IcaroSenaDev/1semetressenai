#include <stdio.h>

int main() {
    /*Faça um algoritmo que inverta a posição dos  valores de um vetor de dez posições de inteiros*/
    int vetororiginal[10];
    int vetorinvertido[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &vetororiginal[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        vetorinvertido[i] = vetororiginal[9 - i];
    }
    printf("Vetor original: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetororiginal[i]);
    }

    printf("\nVetor invertido: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetorinvertido[i]);
    }

    printf("\n");

    return 0;
}

