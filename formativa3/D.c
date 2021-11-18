#include <stdio.h>
#include <stdlib.h>

int andar(int *casas, int *encomendas, int tam_casas, int tam_encomendas){
	int encomenda, achou, pos=0, nova_pos=0;
	int passos=0;
	int diferenca_casas;
	int *vet = malloc(tam_encomendas*sizeof(int));
	for(int i=0;i<tam_encomendas;i++){
		for(int j=0;j<tam_casas;j++){
			if(casas[j]==encomendas[i]){
				nova_pos=j;
				diferenca_casas=nova_pos - pos;
				passos+=abs(diferenca_casas);
				pos=j;
			}
		}
	}
	return passos;
}


int main(void) {
  int num_casas, num_encomendas, passos=0;
	int *casas, *entregas;
	scanf("%d %d", &num_casas, &num_encomendas);

	casas = malloc(num_casas*sizeof(int));
	entregas = malloc(num_encomendas*sizeof(int));

	//Inserindo as casas
	for(int i=0;i<num_casas;i++){
		scanf("%d", &casas[i]);
	}

	//Formando as encomendas
	for(int i=0;i<num_encomendas;i++){
		scanf("%d", &entregas[i]);
	}

	passos = andar(casas, entregas, num_casas, num_encomendas);

	printf("%d\n", passos);

	return 0;
}