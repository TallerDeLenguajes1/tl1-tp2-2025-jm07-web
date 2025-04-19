#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CANT_PC 5

//Defino la estructura 
struct compu {
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio; // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
};

typedef struct compu compu;
   

int main(){
    compu PCs[CANT_PC];
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core","Pentium"};

    srand(time(NULL));

    for (int i = 0; i < CANT_PC; i++)
    {
        PCs[i].velocidad = 1 + rand() % 3;
        PCs[i].anio = 2015 + rand() % 10;
        PCs[i].cantidad_nucleos = 1 + rand() % 8;
        PCs[i].tipo_cpu = tipos[rand() % 6];
    }

    for (int i = 0; i < CANT_PC; i++)
    {
        printf("PC %d: \n",i+1);
        printf("  Velo: %d \n",PCs[i].velocidad);
        printf("  Anio: %d \n",PCs[i].anio);
        printf("  Cant nucleos: %d \n",PCs[i].cantidad_nucleos);
        printf("  Tipo: %s \n",PCs[i].tipo_cpu);
        printf("\n");
    }
    
    
    

    return 0;
}