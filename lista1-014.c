#include <stdio.h>

int main()
{
    float a,b;
    puts("digite a temperatura em celsius:");
    scanf("%f", &a);
    printf("a temperatura convertida em Fahrenheit é: %.1f \n", (9 * a + 160) / 5 );
    return 0;
}
