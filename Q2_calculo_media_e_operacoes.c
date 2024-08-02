#include <stdio.h>

int main() {
    int num1, num2, num3;
    int menor, maior;
    float media, resultado;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);
    
    media = (num1 + num2 + num3) / 3.0;
    
    menor = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);
    maior = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    
    resultado = (media - menor) * maior;
    
    printf("Resultado final: %.2f\n", resultado);
    
    return 0;
}
