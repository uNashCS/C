#include <stdio.h>
/* Inicio del programa principal - WHILE and DO WHILE */
int main()
{
    int contador=4;
    // Evalua primero y luego ejecuta
    while (contador<=20)
    {
        /* code */
        printf("%i\n",contador);
        contador++;
    }

    int contadorDO=20;

    // Se ejecuta al menos una vez
    do                      
    {
        /* code */
        printf("%i\n",contadorDO);
        contadorDO--;
    } while (contadorDO>=1);
    
    return 0;
    
}