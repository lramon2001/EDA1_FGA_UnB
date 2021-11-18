int posOcupada(int vetor[],int valor,int fim){
 int inicio=0;
 int meio;
 while(inicio<=fim){
    meio=(inicio+fim)/2;
    if(valor>vetor[meio]){
        inicio= meio +1;
    }
    else if(valor<vetor[meio]){
        fim = meio-1;
    }
    else if(valor== vetor[meio]){
        return meio;
    }

 }
  if(meio==fim){
    return meio+1;
  }
  else{
    return meio;
  }

}


int main(){

int n,m;
scanf("%d %d",&n,&m);
int sequencia[n];
int input[m];
for(int i=0;i<n;i++){
    scanf("%d",&sequencia[i]);
}

for(int i=0;i<m;i++){
    scanf("%d",&input[i]);
    int resultado =posOcupada(sequencia,input[i],n-1);
    printf("%d\n",resultado);
}

return 0;
}
