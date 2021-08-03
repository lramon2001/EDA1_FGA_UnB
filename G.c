#include <stdio.h>
int main(){
    char texto[1001];
    char alvo[1];
    int contador;
    int frequencia=0;
    int mesmaPalavra=0;
    int total=0;
    scanf("%s",alvo);
    scanf("%[^\n]",texto);

    for(contador=0;texto[contador]!='\0';contador++){
        if(texto[contador]==alvo[0] && mesmaPalavra == 0){
            frequencia++;
            mesmaPalavra=1;
            printf("entrou no primeiro if");
        }
        if(texto[contador]==' '){
            mesmaPalavra=0;
            total++;
            printf("entrou no segundo if");
        }
    }

    int resposta;
    resposta =frequencia/total;
    printf("%d",resposta);
    return 0;
}