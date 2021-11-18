#include <stdlib.h>

typedef struct pilha
{
	int *dados;
	int N, topo;
}pilha ;

int empilha(pilha *p, int x){
	//pilha cheia
	if(p->topo == p->N){
		//redimensionamento do vetor p->dados
		p->dados = realloc(p->dados, 2*p -> N*sizeof(int));
		if(p->dados == NULL) return 0;
		p->N *= 2;
	}
	p->dados[p->topo] = x;
	p->topo++;
	return 1;
}