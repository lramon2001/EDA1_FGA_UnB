
#include <stdio.h>
void ordenacaoPorSelecao(int vetor[], int n) {
   for(int i = 0; i < n - 1; i++) {
      int menor = i;
      for(int j = i + 1; j < n; j++) {
         if (vetor[j] < vetor[menor]) menor = j;
      }
      int aux = vetor[i];
      vetor[i] = vetor[menor];
      vetor[menor] = aux;
   }
}
int main()
{
    int array[1001];
    int contador=0;

    while(scanf("%d",&array[contador])!=EOF){
        contador++;
    }

    ordenacaoPorSelecao(array,contador);
    for(int i=0;i<contador;i++){
        printf("%d ",array[i]);
    }

    return 0;
}

