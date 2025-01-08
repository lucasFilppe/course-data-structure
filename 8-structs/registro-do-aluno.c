#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Tipo de dados do livro
typedef struct {
    char titulo[100];
    int numPaginas;
    float preco;
} Livro;

// Tipo de dados do aluno
typedef struct {
    char nome[100];
    int idade;
    Livro *livro_favorito;
} Aluno;

// Função que cria um livro
Livro* criaLivro(char *titulo, int numPaginas, float preco) {
    Livro *livro = malloc(sizeof(Livro));
    if (livro == NULL) {
        printf("Erro ao alocar memória para o livro.\n");
        exit(1);
    }
    strcpy(livro->titulo, titulo);
    livro->numPaginas = numPaginas;
    livro->preco = preco;
    return livro;
}

// Função que copia um livro
Livro* copiaLivro(Livro *livro) {
    return criaLivro(livro->titulo, livro->numPaginas, livro->preco);
}

// Função que imprime um livro
void imprimeLivro(Livro *livro) {
    printf("Nome do livro: %s\n", livro->titulo);
    printf("Número de páginas: %d\n", livro->numPaginas);
    printf("Preço: R$%.2f\n", livro->preco);
}

// Função que desaloca um livro
void desalocaLivro(Livro **livro_ref) {
    if (*livro_ref != NULL) {
        free(*livro_ref);
        *livro_ref = NULL;
    }
}

// Função que cria um aluno
Aluno* criaAluno(char *nome, int idade, Livro *livro_fav) {
    Aluno *aluno = malloc(sizeof(Aluno));
    if (aluno == NULL) {
        printf("Erro ao alocar memória para o aluno.\n");
        exit(1);
    }
    strcpy(aluno->nome, nome);
    aluno->idade = idade;
    aluno->livro_favorito = copiaLivro(livro_fav);
    return aluno;
}

// Função que imprime um aluno
void imprimeAluno(Aluno *aluno) {
    printf("\nNome: %s\n", aluno->nome);
    printf("Idade: %d\n", aluno->idade);
    printf("Livro favorito:\n");
    imprimeLivro(aluno->livro_favorito);
}

// Função que desaloca um aluno
void desalocaAluno(Aluno **aluno_ref) {
    if (*aluno_ref != NULL) {
        desalocaLivro(&((*aluno_ref)->livro_favorito));
        free(*aluno_ref);
        *aluno_ref = NULL;
    }
}

int main() {
    // Criação e impressão do livro
    Livro *livro_1 = criaLivro("A marca da vitória", 239, 199.0);
    imprimeLivro(livro_1);

    // Criação e impressão do aluno
    Aluno *lucas = criaAluno("Lucas Filipe Ramos", 25, livro_1);
    imprimeAluno(lucas);

    // Liberação de memória
    desalocaAluno(&lucas);
    desalocaLivro(&livro_1);

    return 0;
}
