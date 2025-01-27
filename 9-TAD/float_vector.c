#include "float_vector.h"
#include <stdlib.h>
#include <stdio.h>


struct float_vector{
    int capacity;
    int size;
    float *data;
};//nunca esqueça da virgula

//criação de dados
/**
* @brief cria(aloca)um vetor de floats com uma dada capacidade
*
* @param capacity 
* @return  FloatVector* Um vetor de floats /alocado/criado 
*/

FloatVector *create(int capacity){
    FloatVector *vec = (FloatVector*)calloc(1, sizeof(FloatVector));
    vec->size = 0;// não ha elemeto no vetor
    vec->capacity = capacity;
    vec->data = (float*)calloc(capacity, sizeof(float));

    return vec;

}

//desalocar vetor
void destroy(FloatVector **vec_ref){
    FloatVector *vec = *vec_ref;

    free(vec->data);
    free(vec);
    *vec_ref = NULL;
}

// Função que coloca valor no vetor
void append(FloatVector *vec, float val) {
    if (vec->size >= vec->capacity) {
        printf("Erro: sem espaço disponível no vetor.\n");
        return;
    }
    vec->data[vec->size] = val;
    vec->size++;
}

//função que mostra saida do vetor de estrura floatVector
void imprime(const FloatVector *vec){
    printf("Capacit = %d\n", vec->capacity);
    printf("Size: %d\n", vec->size);
    
    printf("Elementos do vetor\n");
    for(int i = 0; i < vec->size; i++){
        printf("[%d] = %lf\n", i, vec->data[i]);
    }
    printf("\n\n");
}

//retorna tamanho do vetor
int size(const FloatVector *vec){
    return vec->size;
}

//retorna capacidade do vetor
int capacity(const FloatVector *vec){
    return vec->size;
}

//
int at(const FloatVector *vec, int index){
    return vec->data[index];

}

int get(const FloatVector *vec, int index){
    return vec->data[index];
}

void set(const FloatVector *vec, int index, float val){
    vec->data[index] = val;
}