#include <stdio.h>
#include<stdlib.h>

typedef struct no{
    int valor;
    struct no *direita;
    struct no *esquerda;
}No;

void inserir(No *raiz,No *novo){

    if(novo->valor > raiz->valor){ 
        if(raiz->direita == NULL) raiz->direita = novo;
        else inserir(raiz->direita,novo);
    }
    if(novo->valor < raiz->valor){
        if(raiz->esquerda == NULL) raiz->esquerda = novo;
        else inserir(raiz->esquerda,novo);
    }
}

void imprimePreOrdem(No *raiz){ 
    if(raiz!=NULL){
       printf("%d ",raiz->valor);
       imprimePreOrdem(raiz->esquerda);
       imprimePreOrdem(raiz->direita);
    }
}

void imprimeEmOrdem(No *raiz){ 
   if(raiz!=NULL){
       imprimeEmOrdem(raiz->esquerda);
       printf("%d ",raiz->valor);
       imprimeEmOrdem(raiz->direita);
    }
}

void imprimePosOrdem(No *raiz){ 
    if(raiz!=NULL){
       imprimePosOrdem(raiz->esquerda);
       imprimePosOrdem(raiz->direita);
       printf("%d ",raiz->valor);
     
    }
}

void inicializa(No* raiz){ // inicializa árvore -- nó raiz
    raiz = NULL;
}

int estaNula(No* raiz){ // verifica se árvore está vazia
    if(raiz == NULL) 
        return 1; // true para nulo 
    else 
        return 0;
}
int main()
{
    int input;
    
    No*raiz= 0;
    No*p=0;
    inicializa(raiz);
    
    
    while(scanf("%d",&input)!=EOF){
        p=(No*) malloc(sizeof(No)); 
        p->valor=input;
        p->direita = NULL;
        p->esquerda = NULL;
        if(estaNula(raiz)) raiz = p;
        else inserir(raiz,p);
        
    }
     imprimePreOrdem(raiz);
     printf(" .");
     printf("\n");
     imprimeEmOrdem(raiz);
      printf(" .");
     printf("\n");
     imprimePosOrdem(raiz);
      printf(" .");

    return 0;
}

