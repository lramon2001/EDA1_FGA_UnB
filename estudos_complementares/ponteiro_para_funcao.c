//
// Created by USER on 30/08/2021.
//

#include <stdio.h>
#include <stdlib.h>

float maior(float x, float y)
{
    return ((x>y)?x:y);
}

float menor(float x, float y)
{
    return((x<y)?x:y);
}
float resultado(float x, float y, float (*funcao)(float, float))
{
    return funcao(x,y);
}
/*int main() {
    float r;
    r = resultado(5, 6, &maior);
    printf("O maior numero e %.2f\n", r);

    return 0;
}*/