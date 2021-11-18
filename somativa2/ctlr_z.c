#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct no{
  char *palavra;
  struct no *proximo;
}no;

no *cria_pilha(){
 no *topo;
 topo = malloc (sizeof(no));
 topo->proximo = NULL;
 return topo;
}

int empilha(no *topo, char *frase){
  no *novo = malloc(sizeof(no));

  if(novo == NULL) return 1;

  novo->palavra = frase;
  novo->proximo = topo->proximo;
  topo->proximo = novo;

  return 0;
}


int desempilha(no *topo){
  no *lixo = topo->proximo;
  if(lixo==NULL){
    printf("NULL\n");
    return 1;
  }
  printf("%s\n",lixo->palavra);
  topo->proximo = lixo->proximo;
  free(lixo);
  return 0;
}



int determina_operacao(char *a){
    char *inserir = "inserir";
    char *desfazer = "desfazer";

    int eh_inserir;
    int eh_desfazer;

    eh_inserir = strcmp(a,inserir);
    eh_desfazer = strcmp(a,desfazer);

    if(eh_inserir==0){
        return 1;
    }

    else if(eh_desfazer==0){
        return 2;
    }
    else{
        return 0;
    }

}



int main() {
  no *topo;
  topo = cria_pilha();
  char input[10]="";



  int operacao;
   while(scanf("%s",input)!=EOF){
        operacao = determina_operacao(input);
        if(operacao==1){
            char *palavra = calloc(101,sizeof(char));

            scanf("%[^\n]s",palavra);
            empilha(topo,palavra);


        }
        else if(operacao == 2){
            desempilha(topo);

        }
        else{
            printf("entrada invalida\n");
        }

    }


  return 0;
}
