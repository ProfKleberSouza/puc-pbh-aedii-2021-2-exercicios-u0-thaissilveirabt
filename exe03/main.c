#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    scanf ("%d", &num);
    if (num == 0) { 
      printf ("NUMERO NEUTRO");
    }else { 
    if (num%2 == 0)
    {
        printf ("NUMERO PAR");
    }
    else 
    {
        printf ("NUMERO IMPAR");
    }
     if (num < 0)
    {
        printf (" NEGATIVO");
    }
    else 
    {
        printf (" POSITIVO");
    } 
    }
    return 0; 
} 