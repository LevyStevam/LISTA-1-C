#include <stdio.h>

int main(){
    int x;
    printf("Digite um número: \n");
    scanf("%d", &x);
    printf("o número em hexadecimal: %x e em octal: %o ", x, x);
    return 0;
}
