#include <stdio.h>

int main()
{
    int a,b,w;
    puts("digite o valor de A e B respectivamente que serão trocados, separando os valores com uma virgula: ");
    scanf("%d,%d", &a,&b);
    w = a;
    a = b;
    b = w;
    printf("o novo valor de a é: %d e o novo valor de b é: %d \n", a, b);
    return 0;
}
