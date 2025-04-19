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
void mostrarMasVieja(compu pcs[], int cantidad);
void mostrarMasVeloz(compu pcs[], int cantidad);

//Programa principal
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
    mostrarMasVieja(PCs, cant_PC);
    mostrarMasVeloz(PCs, cant_PC);


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
        printf("  Tipo: %s \n",pcs[i].tipo_cpu);
        printf("\n");
    }

}

//Función 2
void mostrarMasVieja(compu pcs[], int cantidad)
{
    int tope = 2025, inidice = 0;
    for (int i = 0; i < cantidad; i++)
    {
        if (pcs[i].anio < tope)
        {
            tope = pcs[i].anio; 
            inidice = i;
        }
    }

    printf("\nLa PC mas vieja es: \n");
    printf("PC %d: \n", inidice+1);
    printf("  Velocidad: %d \n",pcs[inidice].velocidad);
    printf("  Anio: %d \n",pcs[inidice].anio);
    printf("  Cantidad de nucleos: %d \n",pcs[inidice].cantidad_nucleos);
    printf("  Tipo: %s \n",pcs[inidice].tipo_cpu);
    printf("\n");
    
}

//Función 3
void mostrarMasVeloz(compu pcs[], int cantidad)
{
    int max = 0, inidice = 0;
    for (int i = 0; i < cantidad; i++)
    {
        if (pcs[i].velocidad > max)
        {
            max = pcs[i].velocidad; 
            inidice = i;
        }
    }

    printf("\nLa PC mas veloz es: \n");
    printf("PC %d: \n", inidice+1);
    printf("  Velocidad: %d \n",pcs[inidice].velocidad);
    printf("  Anio: %d \n",pcs[inidice].anio);
    printf("  Cantidad de nucleos: %d \n",pcs[inidice].cantidad_nucleos);
    printf("  Tipo: %s \n",pcs[inidice].tipo_cpu);
    printf("\n");

}