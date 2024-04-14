//=============EJERCICIO 4-TP2================

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define CANT 5

struct compu {
int velocidad;//entre 1 y 3 GHz
int anio;//entre 2015 y 2023
int cantidad;//entre 1 y 8
char *tipo_cpu; //valores del arreglo tipos
};

// Declaracion de funciones

void cargarDatos(struct compu *pc);
void mostrar_PC(struct compu pc) ;
//---
void listaPc (struct compu *pc, int cantidad);
struct compu  pcMasVieja (struct compu *pc, int cantidad);
struct compu  pcMayorVelocidad (struct compu *pc, int cantidad);

//------------------------------


char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};  // Tipos de procesadores en un arreglo de cadena de caracteres


//=====PROGRAMA PRINCIPAL=======
int main()
{

 struct compu pc[CANT]; // Declaro arreglo del tipo de la estructura declarada (Ej 4b)

  struct compu masVieja; // Punto D
  struct compu masRapida; // Punto E

 //Inicializa el arreglo de estructuras de las 5 pc que se desean mostrar con los valores aleatorios en los rangos dados

 for (int i = 0; i < CANT; i++) 
   {
        cargarDatos(&pc[i]);
    }
 
 // Ejercicio C- Muestra la lista de las Pcs con sus caracteristicas
    listaPc(pc, CANT);

  // Ejercicio D- Muestra la pc mas antigua

  // Mostrar la PC más vieja
    printf("--------PC MAS ANTIGUA-------:\n");
    masVieja= pcMasVieja (pc, CANT);
    mostrar_PC(masVieja);

  // Ejercicio E- Muestra la pc mas veloz

   // Mostrar la PC con mayor velocidad
    printf("--------PC MAS VELOZ-------:\n");
    masRapida= pcMayorVelocidad (pc, CANT);
    mostrar_PC(masRapida);


    return 0;
}


//=====Desarrollo de funciones======


//--------- Función para inicializar una PC con valores aleatorios
void cargarDatos(struct compu *pc) {
    pc->velocidad = 1 + rand() % 3; // Rango entre 1 y 3 GHz

    pc->anio = 2015 + rand() % 9; // Rango entre 2015 y 2023

    pc->cantidad = 1 + rand() % 8; // Rango entre 1 y 8

    pc->tipo_cpu = tipos[rand() % 6]; // Rango entre valores del arreglo tipos
}
//------------------------------

//---------- Función para mostrar una PC
void mostrar_PC(struct compu pc) {
    printf("--Velocidad: %d GHz\n", pc.velocidad);
    printf("--Anio de fabricacion: %d\n", pc.anio);
    printf("--Cantidad de nucleos: %d\n", pc.cantidad);
    printf("--Tipo de procesador: %s\n\n", pc.tipo_cpu);
}
//------------------------------

//-----------Punto C ----------------
void listaPc (struct compu *pc, int cantidad)
{
  printf("--------------Lista de PCs: ----------\n");
   for (int i = 0; i < cantidad; i++)
   {
    printf(">>>>>>>PC NRO %d<<<<<<<<<:\n", i + 1);
    mostrar_PC(pc[i]);
   }
   

}
//------------------------------

//-----------Punto D ----------------
struct compu pcMasVieja (struct compu *pc, int cantidad) 
{
     struct compu pc_Vieja = pc[0];

    for (int i = 1; i < cantidad; i++) {
        if (pc[i].anio < pc_Vieja.anio) {
            pc_Vieja = pc[i];
        }
    }
    return pc_Vieja;
}
//------------------------------

//-----------Punto E ----------------
struct compu  pcMayorVelocidad (struct compu *pc, int cantidad)
{
     struct compu mayor_velocidad = pc[0];

    for (int i = 1; i < cantidad; i++) {
        if (pc[i].velocidad > mayor_velocidad.velocidad) {
            mayor_velocidad = pc[i];
        }
    }
    return mayor_velocidad;


}
//------------------------------
