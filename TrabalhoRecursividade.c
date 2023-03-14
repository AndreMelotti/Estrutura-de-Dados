/*
Trabalho 1 - Estrutura de Dados I

screva um programa com uma função que, a partir de um vetor de 10 elementos aleatórios, 
realize a busca de um elemento de forma recursiva.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10  // Declarei uma variavel com valor 10 fixo

/*
Explicando a Logica da Função

*/
// Função recursiva
int busca_recursiva(int vetor[], int chave, int inicio, int fim) {                  
    
    if (inicio > fim) {                             // Para a função caso o numero não seja encontrado
        return -1;              
    }

    int meio = (inicio + fim) / 2;
    if (vetor[meio] == chave) {
        return meio;                                 // Caso ele encontre o numero ele 
    } else if (vetor[meio] > chave) {
        return busca_recursiva(vetor, chave, inicio, meio-1); // busca na metade esquerda
    } else {
        return busca_recursiva(vetor, chave, meio+1, fim); // busca na metade direita
    }
}
    
// Programa funcionando   
int main(void) {
    int vetor[TAM] = { 1, 215, 39, 43, 5, 60, 81, 879, 76, 10};     // Declarando os valores dos Vetores
    int chave, posicao;
    
    printf("O vetor é:\n");
    
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    
    printf("\nDigite o elemento a ser buscado: ");
    scanf("%d", &chave);
    posicao = busca_recursiva(vetor, chave, 0, TAM-1);
    
    
    if (posicao >= 0) {
        printf("Elemento encontrado na posição %d\n", posicao);
    } else {
        printf("Elemento não encontrado no vetor\n");
    }
    
    
return 0;

}