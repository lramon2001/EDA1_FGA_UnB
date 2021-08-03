#include <stdio.h>

void imprimeTabuleiro(int linha, int coluna){
    for(int i;i<linha;i++){
        for(int j=0;j<coluna;j++){
            printf("[%03d,%03d]",i,j);
        }
        printf("\n");
    }
}


int main(){
    int linha,coluna;
    scanf("%d %d",&linha,&coluna);
    imprimeTabuleiro(linha,coluna);
    return 0;
}