#include <stdio.h>

int main()
{
    int x;
    float z,y,w;
    puts("digite o número de dias trabalhados: ");
    scanf("%d", &x);
    if(x<11){
        y = x*50.25;
        printf("o valor que tem que ser pago ao trabalhador é: %.2f", y - y/10);
    }
    else if(10<x<21){
        z = x*50.25;
        printf("o valor que tem que ser pago ao trabalhador é: %.2f", z + z*0.2 - z/10);
    }
    else{
        w = x*50.25;
        printf("o valor que tem que ser pago ao trabalhador é: %.2f", w + w*0.3 - w/10);
    };
    return 0;
        
}
