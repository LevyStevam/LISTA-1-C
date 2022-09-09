#include <stdio.h>

int main(){
    int x;
    puts("digite o valor que deseja saber se é impar ou par: ");
    scanf("%d", &x);
    x = x % 2;
    switch(x){
        case 0:
        puts("o número é par");
        break;
        default:
        puts("o número é impar");
        break;
        
        
    }
}
