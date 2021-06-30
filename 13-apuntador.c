/* 
Apuntadores
Son varialbes cuya apuntan a la memora */

#include <stdio.h>

int main(){
    int a=2;                        // Reserva en la memoria de acuerda al tipo de variable/objeto (int) 4bytes
    int *apt=&a;                    // Crea un apuntador y apunta a la dirección de la variable
    /* scanf("%i",varaible) */
    //*apt                          apunta al contenido de la dirección apuntada
    printf("%i\n",a);               // Imprime el valor de la variable
    printf("%i\n",*apt);            // devuelve el valor
    printf("%p\n",apt);             // %p apunta a la memoria y retorna en entero hex decimal de la memoria
    
    printf("\n\nApuntadores de memoria ejemplos\n");
    int arreglo[6]={1,5,-20,8,100,0};

    // Es lo mismo, ambos apuntan a la dirección del arreglo posición cero, lo que uno es implícito el & en explícitamente de la posición que queremos como espificar la posición 4 o 6

    // * apunta al contenido de la memoria apuntada
    printf("{1,5,-20,8,100,0}\n");
    int *aPrr=arreglo;
    printf("Apuntador de memoria de aPrr: %i\n",*aPrr);
    int *aPrr2=&arreglo[0];
    printf("Apuntador de memoria de aPrr2: %i\n",*aPrr2);

    aPrr++;
    printf("Apuntador de memoria de aPrr después de la adición del apuntador en +1: %i\n",*aPrr);

    aPrr+=4;

    printf("Apuntador de memoria de aPrr después de la adición del apuntador en +4 al anterior: %i\n",*aPrr);
    aPrr-=5;
    printf("Apuntador de memoria de aPrr después de la resta del apuntador en -5 al anterior para obtener la posición inicial: %i\n",*aPrr);

    return 0;
}