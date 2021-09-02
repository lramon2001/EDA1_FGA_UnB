//
// Created by USER on 29/08/2021.
//
#include <stdio.h>
int f91(int valor) {
    if(valor>=101){
       return valor-10;
    }
    else{
     return f91(f91(valor+11));
    }
}

/*int main(){
    int n;
    scanf("%d",&n);
    while(n){
        printf("f91(%d) = %d\n",n, f91(n));
        scanf("%d",&n);
    }
    return 0;
}*/