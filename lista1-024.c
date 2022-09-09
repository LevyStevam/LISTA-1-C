#include <stdio.h>

int main(){
    int x, n, w;
    printf("Digite o valor de x: \n");
    scanf("%d", &x);
    printf("Digite o valor de n: \n");
    scanf("%d", &n);
    w = x * 2 << (n-1);
    printf("O resultado é: %d \n", w);
    return 0;
}
