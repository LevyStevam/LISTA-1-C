#include <stdio.h>

int main()
{
    int x,y;
    puts("digite dois números, separando os valores com virgula:");
    scanf("%d,%d", &x,&y);
    printf("a soma: %d, o produto:%d, a diferença %d, o quociente: %d, o resto da divisão: %d ",x+y, x*y, x-y, x/y, x%y);
    return 0;
}
