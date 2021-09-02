#include <stdio.h>
#include <string.h>
int contaXs(char*string){
    int contador=0;
    if(*string=='x'){
        contador++;
        return contador+ contaXs(string+1);
    }
    else{
        if(*string=='\0'){
            return 0;
        }
        return contaXs(string+1);
    }
}

int imprimeXs(int quantidade){
    if(quantidade>0){
        printf("%c",'x');
        return imprimeXs(quantidade-1);
    }
    if(quantidade==0){
        return 0;
    }
}

void imprimesemosx(char*string){
    if(*string!='x' && *string!='\0'){
        printf("%c",string[0]);
        if(string+1!='\0'){
            imprimesemosx(string+1);
        }
    }
    if(*string=='x'){
        if(string+1!='\0'){
            imprimesemosx(string+1);
        }
    }
    else{
        return;
    }

}

/*int main(){
    char frase[110];
    scanf("%s",frase);
    int contadorDeXs= contaXs(frase);
    imprimesemosx(frase);
    imprimeXs(contadorDeXs);
    printf("\n");


}
*/
