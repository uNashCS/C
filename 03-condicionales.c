/* 
    Toma de decisiones IF
    Operadores de igualdad
        ==
        !=
    Operadores de Relación
        >
        <
        >=
        <=
 */

#include <stdio.h>

int main()
{
    int edad;
    printf("Ingresa tu edad\n");
    scanf("%d",&edad);
    if (edad>=18)
    {
        printf("Eres mayor de edad");
    }
    else if(edad==17){                                              // En el caso de que se requiera otras condicionales
        printf("Casi eres mayor de edad");
    }
    else{
        printf("Eres menor de edad");
    }

    return 0;
    
}