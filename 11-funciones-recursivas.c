/* 

Funciones recursivas


 */

/* Inicio del programa */

#include <stdio.h>
long Factorial(long numero);

int main()
{
    int numero;
    printf("Ingresa un número: ");
    scanf("%i",&numero);
    for(int i=0;i<=numero;i++){
        printf("%ld\n",Factorial(i));
    }
    return 0;
}

long Factorial(long numero)
{
    if (numero <=1)
    {
        return 1;
    }else{
        return(numero*Factorial(numero-1));
    }    
}