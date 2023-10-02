#include <stdio.h>
#define A 5
#define B 7
int main () 
{ 
int (*x)[A][B]; 
printf("%d", sizeof(*x));
return 0; 
} 
