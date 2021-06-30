#include <stdio.h>

/* Declarar las funciones al inicio antes de la declaración */
/* Las funciones retorna (return) de acuerdo a tipo de función */
int sumar()
{
    int num1=12;
    int num2=15;
    int suma=num1+num2;
    return suma;
}

void saludo()
{
    printf("Hola mundo\n");
    printf("%i\n",sumar());
    return;
}

int main()
{
    saludo();
    return 0;
}

