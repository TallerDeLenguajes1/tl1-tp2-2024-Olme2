#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct compu {
    int velocidad;//entre 1 y 3 GHz
    int anio;//entre 2015 y 2024
    int cantidad;//entre 1 y 8
    char *tipo_cpu; //valores del arreglo tipos
}compu;

void cargarDatos();
void mostrarDatos();
void mostrarPCMasVieja();
void mostrarPCMasVeloz();

compu PC[5];
char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

int main(){
    srand(time(NULL));
    cargarDatos();
    mostrarDatos();
    mostrarPCMasVieja();
    mostrarPCMasVeloz();
    return 0;
}

void cargarDatos(){
    for(int i=0; i<5; i++){
        PC[i].velocidad=1+rand()%3;
        PC[i].anio=2015+rand()%10;
        PC[i].cantidad=1+rand()%8;
        int j=rand()%6;
        PC[i].tipo_cpu=tipos[j];
    }
}

void mostrarDatos(){
     for(int i=0; i<5; i++){
        printf("PC %d:\n",i+1);
        printf("Velocidad: %d\n",PC[i].velocidad);
        printf("Año de fabricacion: %d\n", PC[i].anio);
        printf("Cantidad de nucleos: %d\n",PC[i].cantidad);
        printf("Tipo de cpu: %s\n", PC[i].tipo_cpu);
        printf("------------------------\n");
    }
}

void mostrarPCMasVieja(){
    int menor=PC[0].anio, masVieja=0;
    for(int i=1; i<5 ; i++ ){
        if(PC[i].anio<menor){
            menor=PC[i].anio;
            masVieja=i;
        }
    }
    printf("\nLa PC mas vieja es la PC %d:\n", masVieja+1);
    printf("Velocidad: %d\n",PC[masVieja].velocidad);
    printf("Año de fabricacion: %d\n", PC[masVieja].anio);
    printf("Cantidad de nucleos: %d\n",PC[masVieja].cantidad);
    printf("Tipo de cpu: %s\n", PC[masVieja].tipo_cpu);
    printf("------------------------\n");
}

void mostrarPCMasVeloz(){
    int mayor=PC[0].velocidad, masVeloz=0;
    for(int i=1; i<5 ; i++ ){
        if(PC[i].velocidad>mayor){
            mayor=PC[i].velocidad;
            masVeloz=i;
        }
    }
    printf("\nLa PC mas veloz es la PC %d:\n", masVeloz+1);
    printf("Velocidad: %d\n",PC[masVeloz].velocidad);
    printf("Año de fabricacion: %d\n", PC[masVeloz].anio);
    printf("Cantidad de nucleos: %d\n",PC[masVeloz].cantidad);
    printf("Tipo de cpu: %s\n", PC[masVeloz].tipo_cpu);
    printf("------------------------\n");
}