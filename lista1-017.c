#include <stdio.h>
#include <math.h>

int main(){
    int x, y;
    puts("Digite um número inteiro: ");
    scanf("%d", &x);
    y = fabs(x);
    printf("O módulo de %d é %d", x, y);
    return 0;
}
