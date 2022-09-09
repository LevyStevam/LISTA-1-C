#include <stdio.h>

float main ()
{
  float x;
  printf("escreva um número x: ");
  scanf("%f", &x);
  printf("o triplo do número é: %.1f, o seu quadrado é: %.1f, e a sua metade é: %.1f  ", x*3,  x*x , x/2);
  return 0;
}
