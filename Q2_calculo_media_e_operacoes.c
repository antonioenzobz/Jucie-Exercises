/* Escreva um programa em C que leia três números inteiros do usuário. Calcule a média desses
números usando a soma e a divisão. Em seguida, subtraia o menor número da média e multiplique o
resultado pelo maior número. Imprima o resultado final. */

#include <stdio.h>

int main() {
    int a = 1; // Declaração e inicialização da variável 'a' com o valor 1
    int b = 3; // Declaração e inicialização da variável 'b' com o valor 3
    int c = 5; // Declaração e inicialização da variável 'c' com o valor 5
    
    int soma = a + b + c; // Cálculo da soma das variáveis 'a', 'b' e 'c'
    int divisao = soma / 3; // Cálculo da divisão da soma por 3
    
    int soma_menor = divisao - a; // Cálculo da diferença entre a divisão e o valor de 'a'
    int multiplica_maior = soma_menor * c; // Cálculo da multiplicação entre 'soma_menor' e 'c'
    
    printf("A média subtraída pelo menor termo multiplicado pelo maior termo é: %d", multiplica_maior); // Impressão do resultado
    
    return 0;
}