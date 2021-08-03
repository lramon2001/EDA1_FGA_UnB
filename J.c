#include <stdio.h>

struct  tipoLogradouro {
    char tipo[80];
    char nome[80];
    char complemento[80];
};

void criaLinhaCSV (struct tipoLogradouro info,char linha[240]){
    int p=0;
    for(int i=0;info.tipo[i]!='\0';i++){
        linha[p]= info.tipo[i];
        p++;
    }

    linha[p]=';';
    p++;
    for(int i=0;info.nome[i]!='\0';i++){
        linha[p]= info.nome[i];
        p++;
    }

    linha[p]=';';
    p++;
    for(int i=0;info.complemento[i]!='\0';i++){
        linha[p]= info.complemento[i];
        p++;
    }

    linha[p]='\0';

}