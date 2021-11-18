#include<stdio.h>
#include<stdlib.h>


typedef struct celula {
  char matricula[10];
  double mediaAtividades;
  double mediaProvas;
  struct celula *prox;
} celula;

void relatorioMediaAtividades (celula *le, celula *l1, celula *l2, double media){

    le = le->prox;

    while(le != NULL){
        if(le->mediaAtividades > media){
            l2->prox = le;
            l2 = l2->prox;
        }
        else{
            l1->prox = le;
            l1 = l1->prox;
        }
        le = le->prox;
    }
    l1->prox = NULL;
    l2->prox = NULL;

}
