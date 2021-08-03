#include <stdio.h>

void substitui(char texto[10001], char antiga[41], char nova[41]) {
    int caracteresIguais = 0;
    int contador;
    for (contador = 0; texto[contador] != '\0'; contador++) {
        if (antiga[caracteresIguais] == texto[contador]) {
            caracteresIguais++;
        } else {
            if (caracteresIguais > 0) {
                if (antiga[caracteresIguais] == '\0') {
                    printf("%s", nova);
                    caracteresIguais = 0;
                } else {
                    while (caracteresIguais > 0) {
                        printf("%c", texto[contador - caracteresIguais]);
                        caracteresIguais--;
                    }
                }

            }
            printf("%c", texto[contador]);
        }


    }

    if(caracteresIguais>0 && antiga[caracteresIguais]=='\0'){
        printf("%s",nova);
    }
    printf("\n");



}
int main(){
    char texto[10001], antiga[41], nova[41];
    scanf("%[^\n]",texto);
    scanf("%s",antiga);
    scanf("%s",nova);
    substitui(texto,antiga,nova);
    return 0;
}