#include <stdio.h>

int main(){
    int x, y;
    printf("Digite um valor inteiro de três digitos que deseje saber o inverso: \n");
    scanf("%d", &x);
    y = (x % 10) * 100 + (x % 100 - x % 10) + (x - (x % 100) )/ 100;
    printf("O valor invertido é %d", y);
    return 0;
}
