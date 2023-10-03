#include <stdio.h>

int main() {
    int numero;
    int i;

    for (i = 1; i <= 20; i++) {
        printf("Digite o número %d: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            printf("%d é par.\n", numero);
        } else {
            printf("%d é ímpar.\n", numero);
        }
    }

    return 0;
}
