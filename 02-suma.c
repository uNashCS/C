#include <stdio.h>
/* Incio de función MAIN */
int main()
{
    int num1;                                   // Declaración de variables
    int num2;
    int suma;
    int resta;
    int multiplicacion;
    printf("Ingrese primer valor:\n");          // Imprime diálogo
    scanf("%d",&num1);                          // Lee números de entrada de teclado y el %d indica que es un número el que va a recibir.       scanf("%d",DATO-INT)
                                                // & operador de dirección, la ruta o la direccion donde va a ser almacenada
    printf("Ingrese segundo valor:\n");
    scanf("%d",&num2);
    suma=num1+num2;                             // Realiza las operaciones de suma
    resta=num1-num2;
    multiplicacion=num1*num2;
    printf("La suma es: %d\n", suma);           // Indica %d que es un INT el que va a imprimir printf("%d", DATON-INT)
    printf("La resta es: %d\n", resta);
    printf("La multiplicación es: %d\n", multiplicacion);
    return 0;                                   // Finalizó correctamente
}
/* Fin de función MAIN */