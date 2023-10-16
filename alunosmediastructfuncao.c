#include <stdio.h>
#include <string.h>

// Definição da estrutura Aluno
struct Aluno {
    char nome[50];
    float nota1;
    float nota2;
    float media;
};

// Função para calcular a média de um aluno
float calcularMedia(float nota1, float nota2) {
    return (nota1 + nota2) / 2;
}

// Função para adicionar um aluno ao vetor
void adicionarAluno(struct Aluno alunos[], int indice) {
    struct Aluno aluno;

    printf("Informe o nome do aluno: ");
    scanf("%s", aluno.nome);

    printf("Informe a nota 1 do aluno: ");
    scanf("%f", &aluno.nota1);

    printf("Informe a nota 2 do aluno: ");
    scanf("%f", &aluno.nota2);

    aluno.media = calcularMedia(aluno.nota1, aluno.nota2);

    alunos[indice] = aluno;
}

// Função para listar todos os alunos
void listarTodosAlunos(struct Aluno alunos[], int tamanho) {
    printf("Lista de todos os alunos:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Nome: %s, Nota 1: %.2f, Nota 2: %.2f, Média: %.2f\n", alunos[i].nome, alunos[i].nota1, alunos[i].nota2, alunos[i].media);
    }
}

// Função para listar alunos aprovados
void listarAlunosAprovados(struct Aluno alunos[], int tamanho) {
    printf("Alunos aprovados:\n");
    for (int i = 0; i < tamanho; i++) {
        if (alunos[i].media >= 7.0) {
            printf("Nome: %s, Média: %.2f\n", alunos[i].nome, alunos[i].media);
        }
    }
}

// Função para listar alunos reprovados
void listarAlunosReprovados(struct Aluno alunos[], int tamanho) {
    printf("Alunos reprovados:\n");
    for (int i = 0; i < tamanho; i++) {
        if (alunos[i].media < 7.0) {
            printf("Nome: %s, Média: %.2f\n", alunos[i].nome, alunos[i].media);
        }
    }
}

int main() {
    struct Aluno alunos[10];

    for (int i = 0; i < 10; i++) {
        adicionarAluno(alunos, i);
    }

    listarTodosAlunos(alunos, 10);
    listarAlunosAprovados(alunos, 10);
    listarAlunosReprovados(alunos, 10);

    return 0;
}
