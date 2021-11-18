#include <stdio.h>

typedef struct celula {
	int dado;
	struct celula *prox;
} celula;

void imprime(celula *le) {
	for(celula *elem = le -> prox; elem != NULL; elem = elem -> prox){
		printf("%d ->", elem->dado);
	}
	printf(" NULL\n");
}

void imprime_rec (celula *le){
	celula *elem = le -> prox;
	if(elem != NULL){
		printf("%d ->", elem->dado);
		return imprime_rec(le -> prox);
	}
	printf(" NULL\n");
	return;
}