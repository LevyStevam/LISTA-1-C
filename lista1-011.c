#include <stdio.h>

int main()
{
    float x,y;
    puts("digite a cotação do dolar atual: ");
    scanf("%f", &x);
    puts("digite quanto de dinheiro em real deseja converter: ");
    scanf("%f", &y);
    printf("o valor convertido em dolar é : %.2f", y/x );
    return 0;
    
}
