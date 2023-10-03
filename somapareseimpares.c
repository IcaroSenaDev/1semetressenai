#include <stdio.h>

int main() {
    int valor;
    int i;
    int pares = 0;
    int impares = 0;

    for (i = 1; i <= 15; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &valor);

        if (valor % 2 == 0) {
            pares += valor;
        } else {
            impares++;
        }
    }

    printf("Soma dos valores pares: %d\n", pares);
    printf("Quantidade de valores ímpares: %d\n", impares);

    return 0;
}
