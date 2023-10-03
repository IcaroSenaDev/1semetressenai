#include <stdio.h>

int main() {
    int anonascimento;
    int i;

    for (i = 1; i <= 20; i++) {
        printf("Digite o ano de nascimento da pessoa %d: ", i);
        scanf("%d", &anonascimento);

        int idade = 2023 - anonascimento;

        if (idade >= 18) {
            printf("Pessoa %d e maior de idade.\n", i);
        } else {
            printf("Pessoa %d e menor de idade.\n", i);
        }
    }

    return 0;
}
