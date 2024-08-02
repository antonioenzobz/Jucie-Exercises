#include <stdio.h>

int main() {
    int num1, num2;
    int maior, menor;
    float soma, resultado;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    soma = num1 + num2;
    
    if (num1 > num2) {
        maior = num1;
        menor = num2;
    } else {
        maior = num2;
        menor = num1;
    }
    
    resultado = (soma / maior) * menor;
    
    printf("Resultado final: %.2f\n", resultado);
    
    return 0;
}
