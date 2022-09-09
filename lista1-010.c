#include <stdio.h>

int main()
{
    int x,z,y;
    puts("escreva o valor do comprimento, largura e altura respectivamente usando a virgula para separar os valores: ");
    scanf("%d,%d,%d", &x,&z,&y);
    printf("o valor do volume é: %d", x*z*y);
    return 0;
}
