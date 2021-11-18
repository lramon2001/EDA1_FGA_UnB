#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct celula{
    char *nomeDaCidade;
    struct celula *prox;
}celula;


celula *criaFila(){
    celula *p;
    p = malloc(sizeof(celula));
    p->prox = NULL;
    return p;
}

//insere depois de p
void insereFila(celula *p){
    celula *novo;
    novo = malloc(sizeof(celula));
    p->prox = novo;
    novo->prox = NULL;
    novo->nomeDaCidade = malloc(sizeof(char)*27);    
}

//cria uma lista encadeada salvando o nome de cada cidade
celula *lerTudo(celula *ptr){
    char nomeCidade[27];
    if(scanf(" %s", nomeCidade) != EOF){
        insereFila(ptr);
        strcpy(ptr->prox->nomeDaCidade, nomeCidade);
        lerTudo(ptr->prox);        
    }
    else{
        return ptr;
    }
}

//manda p->next para a ultima posicao
celula *mandaPParaAUltimaPosicao(celula *p, celula *u){

    if(p->prox->prox == NULL){
        return u;
    }
    else{
        u->prox = p->prox;
        p->prox = p->prox->prox;
        u->prox->prox = NULL; 
        return u->prox;
    }

}

void logicaDaTroca(celula *shows, celula *ultimo){

    printf("%s\n", shows->nomeDaCidade);
    if(shows->prox == NULL){ return; }
    if((int)shows->prox->nomeDaCidade[0] + 32 == (int)shows->nomeDaCidade[strlen(shows->nomeDaCidade) - 1]){ //cast para a tabelaASC
        ultimo = mandaPParaAUltimaPosicao(shows, ultimo);
    }
    logicaDaTroca(shows->prox, ultimo); //recursao
}

int main(){
    celula *shows, *ultimo;
    shows = criaFila();
    ultimo = lerTudo(shows);
    logicaDaTroca(shows->prox, ultimo);

    return 0;
}
