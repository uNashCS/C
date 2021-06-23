/* 
    Directivas del preprocesaor
 */
#include <stdio.h>                          // Busca en los encabezados de la biblioteca

#include "stdio.h"                          // Mismo directorio donde se encuentra el archivo

#define PI 3.14159                          // Crea constantes simbólicas, inmutables
#define CUBO(a) a*a*a
int main()
{
    int suma;
    suma=PI+3;
    printf("%i\n",suma);                    // %i números enteros

    int a=3;
    printf("El cubo de la variable a es: %i\n", CUBO(a));       
    return 0;
}