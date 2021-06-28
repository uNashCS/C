/* 
Arreglos en C
Guardar datos de un mismo tipo.
 */

#include <stdio.h>

int main()
{
    /* int arreglo[4]={3,4,1,5};
    printf("%i\n",arreglo[2]);

    int sizeA;
    printf("Tamaño del arreglo: ");
    scanf("%i",&sizeA);
    int ageihh[sizeA];

    for (int i=0; i<sizeA;i++){
        printf("Ingresa un valor de la posicón %i: ",i+1);
        scanf("%i",&ageihh[i]);
    }

    printf("Los valores del arreglo son: \n");
    for(int j=0; j<sizeA;j++){
        printf("%i\n",ageihh[j]);
    } */
    /* 
       0 1 2
    0 [1,2,3]
    1 [4,5,6]
    
     */
    int multi[2][3]={{1,2,3},{4,5,6}};
    printf("%i\n",multi[0][1]);
    return 0;
}