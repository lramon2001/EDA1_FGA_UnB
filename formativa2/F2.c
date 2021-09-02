
#include <stdio.h>
#include <stdlib.h>


unsigned long int array[81] ;

long int fibonacci(int posicao_n) {
/*
 * Este if verifica se a posição do array é menor que 2
 * e se ainda não foi incializada. Serve para evitar que entre desnecessariamente
 * no if;
 */
    if((posicao_n <= 2) && array[posicao_n] == NULL) {
        array[posicao_n] = 1;

    }
    /*
     * Este if verifica se a posição ainda não foi inicializada para evitar chamadas
     * desnecessárias;
     */
    else if (array[posicao_n] == NULL) {
        array[posicao_n] = fibonacci(posicao_n - 2) + fibonacci(posicao_n - 1);
    }
/*
 *  Retornando o valor de array[posicão_n] faz com que acelere o algoritmo pois nas chamadas recursivas
 *  em que a posição já foi inicializada basta retornar o valor contido em v[posicao_n];
 */
    return array[posicao_n];
}