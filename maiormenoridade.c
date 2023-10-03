#include <stdio.h>

int main() {
    int idade;
    int i;

    for (i = 1; i <= 75; i++) {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        if (idade >= 18) {
            printf("Pessoa %d é maior de idade.\n", i);
        } else {
            printf("Pessoa %d é menor de idade.\n", i);
        }
    }

    return 0;
}
