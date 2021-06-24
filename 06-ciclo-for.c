#include <stdio.h>

int main()
{
    int contador,j;

    for(contador=40; contador<=50; contador++)
    {
        for ( j = 40; j <= 42; j++)
        {
            /* code */
            /* Imprime caracteres transformados desde un entero y que están señalados en los ciclos */
            printf("%i %i\n",contador,j);
        }
        
    }
}

/* 
OUTPUT CHAR
( (
( )
( *
) (
) )
) *
* (
* )
* *
+ (
+ )
+ *
, (
, )
, *
- (
- )
- *
. (
. )
. *
/ (
/ )
/ *
0 (
0 )
0 *
1 (
1 )
1 *
2 (
2 )
2 *

 */

/* 
OUTPUT INT
40 40
40 41
40 42
41 40
41 41
41 42
42 40
42 41
42 42
43 40
43 41
43 42
44 40
44 41
44 42
45 40
45 41
45 42
46 40
46 41
46 42
47 40
47 41
47 42
48 40
48 41
48 42
49 40
49 41
49 42
50 40
50 41
50 42
 */