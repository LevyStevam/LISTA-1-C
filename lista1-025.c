#include <stdio.h>

int main(){
    int x, y, z;
    printf("Informe uma quantidade de segundos: \n");
    scanf("%d", &x);
    y = x / 3600;
    x -= y * 3600;
    z = x / 60;
    x -= z * 60;
    printf("o valor convertido em horas minutos e segundos é: %d horas %dminutos %dsegundos \n", y, z, x);
    return 0;
}
