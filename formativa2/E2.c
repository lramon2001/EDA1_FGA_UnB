#include <stdio.h>
long long int conta7s (long long int numero){
    int contador=0;
    if(numero==0){
        return 0;
    }
    else if(numero%10==7){
        contador++;
        return conta7s(numero/10) + contador;
    }
    else{
        return conta7s(numero/10);
    }

}
/*int main(){
    long long int numero;
    scanf("%ld",&numero);
    long long int total;
    total = conta7s(numero);
    printf("%ld\n",total);
    return 0;
}
*/