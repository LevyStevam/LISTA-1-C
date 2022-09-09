#include <stdio.h>

int main(){
    int x,z,y;
    puts("digite o numero de horas: ");
    scanf("%d", &x);
    puts("digite o numero de minutos: ");
    scanf("%d", &y);
    puts("digite o numero de segundos: ");
    scanf("%d", &z);
    printf("o número total de segundos é: %d", x*3600+ y*60 + z );
    return 0;
}
