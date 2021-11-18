#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
	int dado;
	struct celula *prox;
} celula;

celula * busca_lista_posicao(celula * le, int x) {
  celula * elem = le;
  for (elem = elem; elem -> prox != NULL; elem = elem -> prox) {
    if (elem -> prox -> dado == x) {
      return elem;
    }
  }
  return elem;
}


int remove_depois(celula *p){
  if (p->prox!=NULL)
  {
    celula *prox_p = p->prox;
    int dado_removido = prox_p->dado;
    p->prox = prox_p->prox;
    free(prox_p);
    return dado_removido;
  } else {
     return 1;
  }
 
}

void remove_elemento(celula *le, int x){
  //Procurando o elemento x em le
  if(le->prox!=NULL){
    celula *antes_x = busca_lista_posicao(le, x);
    celula *x_encontrado = antes_x->prox;

    antes_x->prox = x_encontrado->prox;

    free(x_encontrado);
  }
  
}

void remove_todos_elementos(celula *le, int x){
  celula *anterior = le;
  if(le->prox!=NULL){
    for (celula *elem = le->prox; elem != NULL; elem = elem->prox){
      if(elem->dado == x){
        anterior->prox = elem->prox;
      }
      anterior = elem;
    }
  }
}


