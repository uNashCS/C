/* 
Break and Continue

*/

#include <stdio.h>

int main()
{
    int num=0;
    while (num<=7)
    {
        num++;
        if (num==2)
        {            
            break;                  // Rompe el ciclo y lo termina  OUTPUT = 1
            continue;               // Continua el ciclo omitiendo el valor OUTPUT = 1,3,4,5,6,7,8
        }
        printf("%i\n",num);
    }
    
    return 0;
}