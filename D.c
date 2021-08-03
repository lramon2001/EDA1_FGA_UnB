#include <stdio.h>
char verificaImpedimento(int L,int R,int D){

    if(R>50 && L<R && R>D){
        return 'S';
    }
    else{
        return 'N';
    }
}
int main() {
    int L,R,D;
    scanf("%d %d %d",&L,&R,&D);
    char resposta = verificaImpedimento(L,R,D);
    printf("%c",resposta);
    return 0;
}
