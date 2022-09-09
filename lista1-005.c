#include <stdio.h>

float main ()
{
  float x;
  puts("digite o valor da conta: ");
  scanf("%f", &x);
  printf("o valor da conta mais os 10 porcento do garçom é: %.1f", x + x/10);
  return 0;
}
