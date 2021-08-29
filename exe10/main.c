#include <stdio.h>

int main() {
int num; 
int vetor[10];
int i=0; 
for (i=0; i < 10; i++) {
  scanf("%d\n", &vetor[i]); 
}
for (int j = 9; j > -1; j--){
  printf("%d\n", vetor[j]); 
}
   return 0;
}