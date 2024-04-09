// CÓDIGO MODIFICADO DEL TP2_1_1.C : Aritmética de punteros(notación indexada) para recorrer el vector.


#include <stdio.h>
#include <stdlib.h> // Libreria para la creación de números aleatorios
#include <time.h> // Libreria para la creación de números aleatorios

#define N 20

int main() {
    int i;
    double vt[N]; //Declaro arreglo
    double *ptr = vt; // Declaro el puntero al primer elemento del arreglo
    
    srand(time(NULL)); //  Semilla para trabajar con números aleatorios
    
    for (ptr = vt; ptr < vt + N; ptr++) { // Avanzo por el arreglo
        *ptr = 1 + rand() % 100; // Guardo en cada elemento un numero aleatorio
        printf("%f \n", *ptr); 
    }

    return 0;
}