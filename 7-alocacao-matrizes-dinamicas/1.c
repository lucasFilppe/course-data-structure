#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas = 2;
    int colunas = 3;
    int count = 0;

    // Alocação dinâmica da matriz
    int **m = (int **)calloc(linhas, sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        m[i] = (int *)calloc(colunas, sizeof(int));
    }

    // Exibe informações sobre o ponteiro da matriz
    printf("&m = %p, m = %p\n\n", &m, m);

    // Preenchimento e impressão dos elementos
    for (int i = 0; i < linhas; i++) {
        printf("&m[%d] = %p, m[%d] = %p\n", i, &m[i], i, m[i]);
        for (int j = 0; j < colunas; j++) {
            m[i][j] = count++;
            printf("&m[%d][%d] = %p ||||| m[%d][%d] = %d\n", i, j, &m[i][j], i, j, m[i][j]);
        }
        printf("\n");
    }

    // Liberação da memória alocada dinamicamente
    for (int i = 0; i < linhas; i++) {
        free(m[i]);  // Libera cada linha
    }
    free(m);  // Libera o vetor de ponteiros
    m =NULL;

    return 0;
}
