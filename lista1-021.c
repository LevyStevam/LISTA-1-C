#include <stdio.h>

int main()
{
    int x,y;
    puts("digite dois inteiros, separando-os por virgula:  ");
    scanf("%d,%d", &x,&y);
    switch(x%y){
        case 0:
        printf("o número %d é multiplo de %d",y, x);
        break;
        default:
        puts("o número não é multiplo");
        break;
        
    }
    

    return 0;
}
