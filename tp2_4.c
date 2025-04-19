#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Defino la estructura 
struct compu {
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio; // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
};

typedef struct compu compu;

//Defino las funciones
void listarPCs(compu pcs[], int cantidad);
   

int main(){
    int cant_PC = 5;
    compu PCs[cant_PC];
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core","Pentium"};

    srand(time(NULL));

    for (int i = 0; i < cant_PC; i++)
    {
        PCs[i].velocidad = 1 + rand() % 3;
        PCs[i].anio = 2015 + rand() % 10;
        PCs[i].cantidad_nucleos = 1 + rand() % 8;
        PCs[i].tipo_cpu = tipos[rand() % 6];
    }
    

    listarPCs(PCs, cant_PC);


    return 0;
}

//Desarrollo las funciones
//Función 1
void listarPCs(compu pcs[], int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        printf("PC %d: \n", i+1);
        printf("  Velocidad: %d \n",pcs[i].velocidad);
        printf("  Anio: %d \n",pcs[i].anio);
        printf("  Cantidad de nucleos: %d \n",pcs[i].cantidad_nucleos);
        printf("  Tipo de PC: %s \n",pcs[i].tipo_cpu);
        printf("\n");
    }

}