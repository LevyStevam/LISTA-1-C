#include <stdio.h>
#include <math.h>

int main(){
    float x, y, z, w, k;
    puts("Digite o primeiro número inteiro: ");
    scanf("%f",&x);
    puts("Digite o segundo número inteiro: ");
    scanf("%f",&y);
    puts("Digite o terceiro número inteiro: ");
    scanf("%f",&z);
    w = (x + y + z)/3;
    k = pow((x * y * z), 1.0/3.0);
    printf("Média aritmética: %f\n", w);
    printf("Média geométrica: %f\n", k);
}
