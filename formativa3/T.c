#include <stdio.h>

void contaEOF(){
    int a,count=0;
    while(scanf("%d",&a)!=EOF){
        count++;
    }
    printf("%d\n",count);
}
int main() {
    contaEOF();
    return 0;
}
