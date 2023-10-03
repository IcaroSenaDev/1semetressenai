#include <stdio.h>

int main() {
    int idade;
    int i;
    int maioresdeidade = 0;

    for (i = 1; i <= 50; i++) {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        if (idade >= 18) {
            maioresdeidade++;
        }
    }

    printf("Numero de pessoas maiores de idade: %d\n", maioresdeidade);

    return 0;
}
