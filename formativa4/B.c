#include <stdio.h>

typedef struct celula {
	int dado;
	struct celula *prox;
} celula;

celula *busca (celula *le, int x){
	celula *elem = le->prox;
	for(elem=elem; elem != NULL; elem = elem -> prox){
		if(elem->dado==x){
		  return elem;
		}
	}
	return NULL;
}

celula *busca_rec (celula *le, int x){
	celula *elem = le->prox;
	if(elem != NULL){
		if(elem->dado == x){
			return elem;
		} 
		return busca_rec(elem, x);
	} 
	return NULL;
}

