 #include <stdio.h>
#include <stdlib.h>

// Função para alocar matriz dinâmica
int** alocarMatriz(int rows, int cols) {
    // Aloca um array de ponteiros para as linhas
    int** matriz = (int**)malloc(rows * sizeof(int*));
    if (matriz == NULL) {
        perror("Erro ao alocar memória para as linhas");
        exit(EXIT_FAILURE);
    }

    // Aloca memória para cada linha
    for (int i = 0; i < rows; i++) {
        matriz[i] = (int*)malloc(cols * sizeof(int));
        if (matriz[i] == NULL) {
            perror("Erro ao alocar memória para as colunas");
            exit(EXIT_FAILURE);
        }
    }

    return matriz;
}

// Função para liberar a memória da matriz dinâmica
void liberarMatriz(int** matriz, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matriz[i]); // Libera cada linha
    }
    free(matriz); // Libera o array de ponteiros
}

int main() {
    int rows = 3, cols = 4;

    // Alocar matriz
    int** matriz = alocarMatriz(rows, cols);

    // Preencher e exibir a matriz
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matriz[i][j] = i * cols + j; // Exemplo de preenchimento
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Liberar memória
    liberarMatriz(matriz, rows);

    return 0;
}
