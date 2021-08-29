#include <stdio.h>

int main() {
   int n1, n2, n3;
   scanf("%d %d %d", &n1, &n2, &n3);
  if (n1 > n2 && n1> n3){
    printf ("MAIOR = %d \n", n1);
  } else 
  if (n2 > n1 && n2 > n3){
    printf ("MAIOR = %d \n", n2); 
  } else 
  if (n3 > n1 && n3 > n2){
    printf ("MAIOR = %d \n", n3); 
  } 
  if (n1 < n2 && n1 < n3){ 
    printf ("MENOR = %d \n", n1); 
  } else 
  if (n2 < n1 && n2 < n3){
    printf ("MENOR = %d \n", n2); 
  } else 
  if (n3 < n1 && n3 < n2){
    printf ("MENOR = %d \n", n3); 
  }
  return 0; 
}
    