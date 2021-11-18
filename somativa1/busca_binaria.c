#include <stdlib.h>
#include <stdio.h>

void merge(int *v, int l, int m, int r)
{
  int ia = l, ib = m + 1, ic = 0, tc = r - l + 1;
  int *c;
  c = malloc(tc * sizeof(int));

  while (ia <= m && ib <= r)
  {
    if (v[ia] < v[ib])
    {
      c[ic] = v[ia++];
    }
    else
    {
      c[ic] = v[ib++];
    }
    ic++;
  }

  while (ia <= m)
  {
    c[ic++] = v[ia++];
  }

  while (ib <= r)
  {
    c[ic++] = v[ib++];
  }

  for (ic = l; ic <= r; ic++)
  {
    v[ic] = c[ic - l];
  }

  free(c);
}
void mergesort(int *v, int l, int r)
{
  if (l >= r)
  {
    return;
  }
  int m = (l + r) / 2;
  mergesort(v, l, m);
  mergesort(v, m + 1, r);
  merge(v, l, m, r);
}
int buscaBinaria(int *v, int alvo,int tamanho){
    int inicio=0;
    int fim = tamanho;
    int meio;
    while(inicio<=fim){
        meio =(inicio+fim)/2;
        if(alvo>v[meio]){
            inicio=meio+1;
        } else if(alvo<v[meio]){
            fim = meio -1;
        } else if(alvo == v[meio]){
           return 1;
        }
    }
    return -1;
}

int buscaLinear(int vetor[],int alvo,int quantidade){
int procurado =1930;
for(int i=0;i<=quantidade;i++){
    if(vetor[i]==alvo){
        procurado=i;
        return procurado;
    }
}
return procurado;
}
int main(void)
{
    int n,m;
//lê n e m
scanf("%d %d",&n,&m);
	int vetor[n];
	int procurados[m];
	int vetorCopia[n];

// lê o vetor que compõem o conjunto de dados de interesse de busca
for(int i=0;i<n;i++){
	scanf("%d",&vetor[i]);
	vetorCopia[i]=vetor[i];
}

mergesort(vetor,0,n-1);
// lê o vetor que compõem os inteiros que devem ser procurados no conjunto de dados
for(int i=0;i<m;i++){
	scanf("%d",&procurados[i]);
}

for(int i=0;i<m;i++){
if(buscaBinaria(vetor,procurados[i],n-1)==1){
   printf("%d\n",buscaLinear(vetorCopia,procurados[i],n));
}
else{
    printf("%d\n",-1);
}
}


 /*int v[10];
    int count = 0;
  while(scanf("%d",&v[count])!=EOF)
        count++;
    printf("%d\n",count);
  mergesort(v, 0, count-1);
  for (int i = 0; i <count; i++)
  {

         printf("%d ", v[i]);


  }
*/
  return 0;
}
