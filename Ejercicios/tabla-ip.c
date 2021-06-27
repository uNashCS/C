#include <stdio.h>
short oct,i,cont=0,rep=32;
int main()
{
    for(i=0;i<rep;i++){
        for(oct=1;oct<=rep;oct++){
            if(cont>0){
                printf("%i ",0);
            }else{
                printf("%i ",1);
            }
            cont--;
            if (oct%4==0){
                printf(" ");
            }            
        }
        cont=i+1;
        printf("%i  ",32-cont+1);
        printf("\n");
    }
    return 0;
    
}
