#include <stdio.h>
#include <stdlib.h>

#define TAM 10

typedef struct {
    int vet [TAM];
    int topo;
}pilhavet;

void empilhar (int valor, pilhavet*p){
    if(p -> topo == TAM - 1){
        printf("\nPilha cheia!");
        exit(0);
    }

    p -> topo++;
    p -> vet[p -> topo] = valor;
};

int desempilha (pilhavet*p){
    int aux;

    if(p -> topo < 0){
        printf("\nPilha vazia!");
        exit(1);
    }
    aux = p -> vet[p -> topo];
    p -> topo--;
    return aux; 
};

int main(void){
    pilhavet pilha;
    int valor;
    pilha.topo = -1;
    
    for(int i = 0; i < TAM; i++){
        printf("\nDigite o valor a ser empilhado: ");
        scanf("%d", &valor);
        empilhar(valor, &pilha);
    }

    for(int i = 0; i < TAM; i++){
        printf("\n%d", desempilha(&pilha));
    }
    
    printf("\n");
    return 0;
}