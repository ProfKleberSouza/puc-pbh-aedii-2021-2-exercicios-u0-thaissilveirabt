#include <stdio.h>
#include <stdlib.h>

int main()
{ 
  int L1, L2, L3; 
  scanf ("%d %d %d", &L1, &L2, &L3);
    if ( (L2-L3) < L1 < L2 + L3 && (L1-L3) < L2 < L1 + L3 && (L1-L2) < L3 < L1 + L2 ) {
      printf ("TRIANGULO"); 
    } else printf ("OS LADOS NAO FORMAM UM TRIANGULO");

    if (L1 == L2 && L2 == L3){
      printf (" EQUILATERO");
    } 
    if (L1 == L2 && L3 != L1 || L3 == L2 && L1 != L3 || L1 == L3 && L2 != L1){
      printf (" ISOCELES");
    } 
    if (L1 != L2 && L1 != L3 && L2 != L3){
      printf (" ESCALENO");
    } 
  
return 0; 
}

