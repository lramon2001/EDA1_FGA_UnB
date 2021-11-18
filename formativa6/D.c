#include <stdio.h>
#include <stdlib.h>



typedef struct celula {
  
  int dado;
  struct celula *prox;

} celula;

celula *enfileira(celula*le,int x){
    celula*novo = malloc (sizeof(celula));
    novo->prox=le->prox;
    le->prox=novo;
    le->dado=x;
    return novo;

}

