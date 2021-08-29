#include <stdio.h>

int main() {
  float n1, n2, n3, n4, soma, media; 
  scanf ("%f %f %f %f", &n1, &n2, &n3, &n4); 
  soma = n1 + n2 + n3 + n4; 
  media = soma / 4;
  printf ("NOTA = %.1f", media);
  if ( media >= 6){ 
    printf (" (APROVADO)");
  } 
  if (media <= 6) {
    printf (" (REPROVADO)");
  }
   return 0;
}






