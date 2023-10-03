#include <stdio.h>

int main() {
    int alunos = 10;
    int i;

    for (i = 1; i <= alunos; i++) {
        float nota1, nota2;

        printf("Aluno %d\n", i);
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        float media = (nota1 + nota2) / 2;

        printf("A media do aluno %d e %.2f\n", i, media);
    }

    return 0;
}
