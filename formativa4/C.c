#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
	int dado;
	struct celula *prox;
} celula;

celula *busca_lista_posicao (celula *le, int x){
	celula *elem = le;
  for(elem=elem; elem->prox != NULL; elem = elem -> prox){
    if(elem->prox->dado==x){
      return elem;
    }
  }
	return elem;
}

void insere_antes (celula *le, int x, int y){
	int i=0;
	celula *elem;
	celula *novo = malloc (sizeof (celula));
	//percorrendo a lista encadeada até chegar na posição desejada
	elem = busca_lista_posicao(le, y);
	novo -> dado = x;	
	novo -> prox = elem -> prox;
	elem -> prox = novo;

}


void insere_inicio (celula *le, int x){
	celula *novo = malloc(sizeof(celula));
	novo -> dado = x;
	novo->prox = le->prox;
	le->prox = novo;
}

