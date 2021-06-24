# include <stdio.h>
/* Palabras reservadas */
int main ()
{
    int a = 80;             // OUTPUT P (char)
    float f = 45.3;
    float suma = a+f;
    printf("entero %i\nflotante %.2f\ndouble %.3f\ncaracter %c",a,(float)a, (double)a, (char)a);
    printf("entero %i\nflotante %.2f\ndouble %.3f\ncaracter %c\n",suma,(float)suma, (double)suma, (char)suma);
    // return 0;

    int c=100;
    printf("Entero C: %i\nDouble C: %.2f\nCaracter C: %c",c,(float)c,(char)c);
    return 0;
}