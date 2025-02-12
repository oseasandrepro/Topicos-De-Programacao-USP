#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    struct no* anterior;
    int valor;
    struct no *proximo;
    
}No;

void insereNoInicio(No **cabeca, int valor){
    No *novoNo = (struct no*)malloc(sizeof(No));
    
    novoNo->valor = valor;
    novoNo->anterior = NULL;
    novoNo->proximo = (*cabeca);
    
    (*cabeca)->anterior = novoNo;
    
    (*cabeca) = novoNo;
}

void printLista(No *cabeca){
    No *aux = cabeca;
    
    while( aux != NULL){
        printf("%d ", aux->valor);
        
        aux = aux->proximo;
    }
    printf("\n");
}

void removerNo(No **cabeca, int chave){
    
    No * aux = *cabeca;
    while( aux != NULL && aux->valor!=chave){
        aux = aux->proximo;
    }
    
    if( aux != NULL && aux->anterior == NULL)
    {
        No* antigacabeca = (*cabeca);
        (*cabeca) = (*cabeca)->proximo;;
        free( antigacabeca );
    }
    else if( aux != NULL && aux->proximo != NULL)
    {
        aux->anterior->proximo = aux->proximo;
        aux->proximo->anterior = aux->anterior;
        free(aux);
    }else if( aux != NULL && aux->proximo == NULL)
    {
        aux->anterior->proximo = NULL;
        free(aux);
    }
}

int main() 
{
    No *cabeca = (struct no*)malloc(sizeof(No));
    cabeca->valor = 12;
    cabeca->proximo = NULL;
    
    insereNoInicio(&cabeca, 24);
    insereNoInicio(&cabeca, 36);
    insereNoInicio(&cabeca, 48);
    insereNoInicio(&cabeca, 60);
    insereNoInicio(&cabeca, 72);
    
    printLista(cabeca);
    removerNo(&cabeca, 72);
    printLista(cabeca);
    
    return 0;
}