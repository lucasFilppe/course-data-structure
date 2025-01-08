#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Para usar strcpy

typedef struct {
    char nome[50];
    int matricula;
} Aluno;

int main() {
    // Cria um ponteiro do tipo Aluno e aloca memória para ele
    Aluno *dadosAluno = malloc(sizeof(Aluno));
    if (dadosAluno == NULL) { // Verifica se a alocação foi bem-sucedida
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Copia a string para o campo nome
    strcpy(dadosAluno->nome, "Lucas Filipe");
    dadosAluno->matricula = 2014145;

    printf("Nome: %s\n", dadosAluno->nome);
    printf("Matrícula: %d\n", dadosAluno->matricula);

    // Libera a memória alocada
    free(dadosAluno);

    return 0;
}

