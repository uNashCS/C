#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int suma;
    int resta;
    int multiplicacion;
    printf("Ingrese primer valor:\n");
    scanf("%d",&num1);
    printf("Ingrese segundo valor:\n");
    scanf("%d",&num2);
    suma=num1+num2;
    resta=num1-num2;
    multiplicacion=num1*num2;
    printf("La suma es: %d\n", suma);
    printf("La resta es: %d\n", resta);
    printf("La multiplicación es: %d\n", multiplicacion);
    return 0;
}