#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct vertice{
    int valor;
    struct vertice *verticeEsquerdo;
    struct vertice *VerticeDireito;
    int visitado;
    
}Vertice;

typedef struct{
 Vertice *raiz;
 char nome[50];
}Arvore;

void dfs_pre_ordem(Vertice *raiz, int chave){

    if( raiz == NULL || (raiz->visitado == 1) )
        return;

    raiz->visitado = 1;
    if(raiz->valor == chave){
        //printf("encontrei!\n");
        return;
    }
    else
    {
      printf("%c ", raiz->valor);
      dfs_pre_ordem(raiz->verticeEsquerdo, chave);
      dfs_pre_ordem(raiz->VerticeDireito, chave);
    }
}

Vertice * criar_vertice(int valor, Vertice *esquerda, Vertice *direita, int visitado)
{
    Vertice *vertice = (Vertice*)malloc(sizeof(Vertice));
    vertice->valor=valor;
    vertice->verticeEsquerdo = esquerda;
    vertice->VerticeDireito = direita;
    vertice->visitado = visitado;

    return vertice;
}

void desaloca_arvore(Vertice *raiz)
{
    if( raiz == NULL)
        return
    desaloca_arvore(raiz->verticeEsquerdo);
    desaloca_arvore(raiz->VerticeDireito);
    free(raiz);
}


int main(void)
{
    Arvore arvore;
    strcpy(arvore.nome, "letras");
    arvore.raiz = (Vertice*)malloc(sizeof(Vertice));
    arvore.raiz->valor = 'A';
    arvore.raiz->visitado = 0;

    Vertice *verticeB = (Vertice*)malloc(sizeof(Vertice));
    verticeB->valor='B';
    verticeB->visitado = 0;

    Vertice *verticeD = (Vertice*)malloc(sizeof(Vertice));
    verticeD->valor='D';
    verticeD->verticeEsquerdo = NULL;
    verticeD->VerticeDireito = NULL;
    verticeD->visitado = 0;

    Vertice *verticeF = (Vertice*)malloc(sizeof(Vertice));
    verticeF->valor='F';
    verticeF->verticeEsquerdo = NULL;
    verticeF->VerticeDireito = NULL;
    verticeF->visitado = 0;

    Vertice *verticeE = (Vertice*)malloc(sizeof(Vertice));
    verticeE->valor='E';
    verticeE->verticeEsquerdo = NULL;
    verticeE->VerticeDireito = NULL;
    verticeE->visitado = 0;

    arvore.raiz->verticeEsquerdo = verticeB;
    arvore.raiz->VerticeDireito = verticeE;

    verticeB->verticeEsquerdo = verticeD;
    verticeB->VerticeDireito = verticeF;

    dfs_pre_ordem(arvore.raiz, -1);
    desaloca_arvore(arvore.raiz);
    return 0;
}