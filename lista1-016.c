#include <stdio.h>

int main() {
    float x,w;
    int y,z;
    puts("qual o valor da sua hora aula? ");
    scanf("%f",&x);
    puts("quantas horas foram trabalhadas no mês? ");
    scanf("%d",&y);
    printf("o seu salário bruto é: %.2f \n", x*y);
    puts("qual o percentual do desconto do INSS no seu salário? ");
    scanf("%d", &z );
    w = x*y - (x*y * z/100);
    printf("o seu salário líquido é : %.2f", w );
    

    return 0;
}
