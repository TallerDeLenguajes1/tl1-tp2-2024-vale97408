#include<stdio.h>
#include<stdlib.h> // Libreria para la creación de números aleatorios
#include<time.h>// Libreria para la creación de números aleatorios

#define N 20

int main()
{

int i;
double vt[N];

srand(time(NULL)); // Semilla para trabajar con los numeros aleatorios

for(i = 0;i<N; i++)
{
vt[i]=1+rand()%100;
printf("%f ", vt[i]);
}

return 0; 
}
