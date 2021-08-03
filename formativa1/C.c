#include <stdio.h>
int somador(int quantidade){
    int a,soma=0,contador;
    for(contador=0;contador<quantidade;contador++){
        scanf("%d",&a);
        soma+=a;
    }
    return soma;
}
int main() {
    int quantidade;
    scanf("%d",&quantidade);
    int resultado = somador(quantidade);
    printf("%d",resultado);
    return 0;
}