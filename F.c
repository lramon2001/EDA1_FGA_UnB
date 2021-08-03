#include <stdio.h>
int main(){
    int N,M, xa,xb,ya,yb,modificaA,ModificaB,passadas,contador;
    scanf("%d %d", &N,&M);

    scanf("%d", &passadas);
    xa=1;
    ya=1;
    xb=N;
    yb=M;
    for(contador=0;contador<passadas;contador++){
        scanf("%d %d", &modificaA,&ModificaB);

        if(modificaA ==1){

            ya++;
        }
        else if(modificaA == 2){
            ya--;
        }
        else if(modificaA == 3){
            xa++;
        }
        else {
            xa--;
        }
        if(ModificaB == 1){
            yb++;
        }
        else if(ModificaB == 2){
            yb--;
        }
        else if(ModificaB == 3){
            xb++;
        }
        else{
            xb--;
        }
        if(xa==xb && ya==yb){
            printf("Encontraram-se na posicao (%d,%d) no passo %d\n", xa,ya,contador+1);
            break;
        }else if(xa > N || xa <1 || ya > M|| ya < 1){
            printf("PA saiu na posicao (%d,%d) no passo %d\n",xa,ya,contador+1);
            break;
        }else if (xb > N || xb < 1 || yb > M || yb < 1){
            printf("PB saiu na posicao (%d,%d) no passo %d\n", xb,yb,contador+1);
            break;
        }

    }
    if(contador==passadas)
        printf("Nao se encontraram\n");

    return 0;
}