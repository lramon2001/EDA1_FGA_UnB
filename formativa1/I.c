#include <stdio.h>
double calculaVelocidadeMedia(int tA, int tB, double distancia);
int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima);

double calculaVelocidadeMedia(int tA, int tB, double distancia){

    double deltaT;
    deltaT= (tB-tA)/(3600.0);
    return distancia/deltaT;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima){
    double velocidadeDoVeiculo = calculaVelocidadeMedia(tA,tB,distancia);
    if(velocidadeDoVeiculo> velocidadeMaxima){
        return 1;
    }
    else{
        return 0;
    }
}