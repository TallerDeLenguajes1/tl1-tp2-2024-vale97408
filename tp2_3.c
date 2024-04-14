// =========EJERCICIO 3- TP2=============

#include<stdio.h>
#include<stdlib.h>// Libreria para la creación de números aleatorios
#include<time.h>// Libreria para la creación de números aleatorios

#define N 5
#define M 7

int main() 
{ 

int i,j;
int mt[N][M];

// Declaro puntero
int *puntero;
puntero= mt; // Apunta al primer elemento del arreglo bidimensional

srand(time(NULL)); // Semilla para la creacion de numeros aleatorios no repetidos

for(i = 0;i<N; i++)
{
    for(j = 0;j<M; j++)
   {
      *(puntero + i * M + j)=1+rand()%100;  // Accede a los elementos de la matriz ya que ingresa al valor almacenado en la ubicación de memoria calculada permitiendole asignar un numero aleatorio generado entre [1,100] al elemento (i,j) de la matriz. 

      printf("%d ",  *(puntero + i * M + j));
    }
  printf("\n");
}


return 0; 
 }