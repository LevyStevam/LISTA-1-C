#include <stdio.h>
#include <math.h>

int main(){
    int x, y, z, w;
    
    printf("informe o x da primeira coordenada: \n");
    scanf("%d", &x);
    printf("informe o y da primeira coordenada: \n");
    scanf("%d", &y);
    printf("informe o x da segunda coordenada: \n");
    scanf("%d", &z);
    printf("informe o y da segunda coordenada: \n");
    scanf("%d", &w);
    printf("A distância entre os dois pontos é de %.2f", sqrt(sqrt(z - x) + sqrt(w - y)));
    return 0;
}
