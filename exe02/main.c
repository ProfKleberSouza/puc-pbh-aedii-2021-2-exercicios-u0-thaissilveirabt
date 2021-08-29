#include <stdio.h>
#include <math.h>

int main() {
   int R, V, T, D, L; 
scanf ("%d %d %d", &T, &V, &R); 

D = T * V;
L = D / R;
printf ("R = %d\n", R); 
printf ("V = %d\n", V); 
printf ("T = %d\n", T); 
printf ("D = %d\n", D); 
printf ("L = %d\n", L); 
return 0; 
}

