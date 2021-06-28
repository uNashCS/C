#include <stdio.h>
/* Inicio de código */
int main()
{
    int casos;
    printf("Ingresa un número: ");
    scanf("%i",&casos);
    switch (casos)
    {
    case 1:
        printf("Elegiste el primer caso\n");
        break;
    case 2:
        printf("Elegiste el segundo caso\n");
        break;
    case 3:
        printf("Elegiste el tercer caso\n");
        break;
    case 4:
        printf("Elegiste el cuarto caso\n");
        break;
    
    default:
    printf("No encontramos tu caso\n");
        break;
    }
    return 0;
}

/* Fin de código */