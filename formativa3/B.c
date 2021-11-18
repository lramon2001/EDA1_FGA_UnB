void ordena(int *vetor, int n) {
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
