#include <stdio.h>
#include<stdlib.h>

/*int main(void) {
    int*vetor;
    int quantidade;
    int i=0;
    printf("Digite o tamanho do vetor: \n");
    scanf("%d",&quantidade);
    vetor=malloc(quantidade*sizeof(int));

    if(!vetor){
        printf("Memória esgotada!");
        exit(1);
    }
    printf("Digite valores para o vetor");
    for(i=0;i<quantidade;i++){
        printf("Digite um valor para a posicao [%d] do vetor.",i);
        scanf("%d",vetor+i);
    }
    free(vetor);
    return 0;
}
*/