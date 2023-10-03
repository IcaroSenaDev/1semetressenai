#include <stdio.h>

int main() {
    /*Altere o algoritmo anterior para procurar um  número digitado pelo usuário, informando a sua  posição, se ele constar no vetor*/
    int vetor[10];
    int numeroprocurar;
    int encontrado = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o número que você deseja procurar: ");
    scanf("%d", &numeroprocurar);

    for (int i = 0; i < 10; i++) {
        if (vetor[i] == numeroprocurar) {
            printf("O número %d foi encontrado na posição %d do vetor.\n", numeroprocurar, i + 1);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("O número %d não foi encontrado no vetor.\n", numeroprocurar);
    }

    return 0;
}
