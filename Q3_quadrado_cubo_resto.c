/* Escreva um programa em C que leia um número inteiro do usuário. Calcule o quadrado e o cubo desse
número usando multiplicação e imprima os resultados. Além disso, calcule o resto da divisão do
número original por 3 e imprima esse resultado. */

#include <stdio.h>

int main() {
    int a = 5; // Declaração e inicialização da variável 'a' com o valor 5
    int quadrado =  a * a; // Cálculo do quadrado de 'a'
    int cubo = a * a * a; // Cálculo do cubo de 'a'
    int resto = a % 3; // Cálculo do resto da divisão de 'a' por 3
    printf("O quadrado de %d: %d\n O cubo de %d: %d\n O resto da divisao de %d por 3: %d",a, quadrado, a, cubo, a, resto);

    return 0;
}