#include <stdio.h>
#include <stdlib.h>

typedef struct fila
{
    int *dados;
    int N, p, u;
} fila;

int desenfileira (fila *f, int *y)
{
    if(f->p==f->u) return 1;
    *y=f->dados[f->p];
    f->p=(f->p+1)%f->N;

    return 0;
}
