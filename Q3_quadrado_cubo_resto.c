#include <stdio.h>

int main() {
    int num;
    int quadrado, cubo, resto;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    quadrado = num * num;
    cubo = num * num * num;
    resto = num % 3;
    
    printf("Quadrado: %d\n", quadrado);
    printf("Cubo: %d\n", cubo);
    printf("Resto da divisão por 3: %d\n", resto);
    
    return 0;
}
