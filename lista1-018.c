#include <stdio.h>

int main(){
    float r,y,z,w;
    puts("digite o raio da circunferência: ");
    scanf("%f", &r);
    printf("o valor do diametro é: %.2f, o valor da sua circunferência é : %.2f, o valor da sua área é: %.2f", r*r, 2*3.14159*r, 3.14159*(r*r)  );
    return 0;
}
