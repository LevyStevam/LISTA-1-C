#include <stdio.h>

float main ()
{
  char x;
  float y;
  printf("digite seu sexo (H/M): ");
  scanf("%c",&x);
  printf("digite a sua altura : ");
  scanf("%f", &y);
  if( x == 'H' ){
      
      printf("o seu peso ideal é : %.1f", 72.7* y - 58  );
  }
  else{
      
      printf("o seu peso ideal é : %.1f", 62.1* y - 44.7 );
  };
  return 0;
}
