#include <stdio.h>
#include <math.h>

int main() {
   int R, V, T, D, L; 
scanf ("%d", &T); 
scanf ("%d", &V);
scanf ("%d", &R); 
D = T * V;
L = D / R;
printf (" Rendimento = R = %d \n",R); 
printf (" Velocidade = V = %d \n",V); 
printf (" Tempo = T = %d \n", T); 
printf ("Distancia = D = %d \n", D); 
printf ("Litros = L = %d \n", L); 
return 0; 
}

