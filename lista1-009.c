#include <stdio.h>

int main()
{
    int x;
    puts("escreva um valor inteiro: ");
    scanf("%d", &x);
    printf("o antecessor desse número é: %d e o sucessor desse número é: %d", x-1, x+1);
    return 0;
}
