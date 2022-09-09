#include <stdio.h>

int
main ()
{
  float x;
  printf ("digite um número x: \n");
  scanf ("%f", &x);
  printf ("o número com apenas uma casa decimal: %.1f", x);
  return 0;
}
