// codigo a completar
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 20
int main(){
    int i;
    double vt[N];
    double *puntv;
    puntv=vt;
    srand(time(NULL));
    printf("(");
    for(i = 0;i<N; i++){
        *(puntv+i)=1+rand()%100;
        printf(" %f ",*(puntv+i));
    }
    printf(")");
    return 0;
}