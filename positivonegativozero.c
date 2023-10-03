#include <stdio.h>

int main() {
    int num;
    int i;

    for (i = 1; i <= 20; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%d", &num);

        if (num > 0) {
            printf("%d e positivo.\n", num);
        } else if (num < 0) {
            printf("%d e negativo.\n", num);
        } else {
            printf("%d e zero.\n", num);
        }
    }

    return 0;
}
