//
// Created by USER on 29/08/2021.
//
#include <stdio.h>
float potenciacao(int base,int expoente){

    if(expoente==0){
        return 1.0;
    }
    else if(expoente<0){
        return 1.0/ base*potenciacao(base,expoente+1);
    }
    else{
        return base* potenciacao(base,expoente-1);
    }
}
int main(){
    int base,expoente;

    scanf("%d %d",&base,&expoente);
    if(base==0 && expoente == 0){
        printf("indefinido");
    }
    else{
        printf("%f", potenciacao(base,expoente));
    }
    return 0;
}
 