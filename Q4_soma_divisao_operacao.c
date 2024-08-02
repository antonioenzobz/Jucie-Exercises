/* Escreva um programa em C que leia dois números inteiros do usuário. Calcule a soma dos dois
números e, em seguida, divida a soma pelo maior dos dois números. Depois, multiplique o resultado
pelo menor número. Por fim, imprima o resultado da operação.*/

#include <stdio.h>

int main(){
    int a = 10; // Declaração da variável 'a' com o valor 10
    int b = 5; // Declaração da variável 'b' com o valor 5
    int soma = a + b; // Cálculo da soma entre 'a' e 'b' e atribuição do resultado à variável 'soma'
    int soma_dividido = soma / a; // Cálculo da divisão entre 'soma' e 'a' e atribuição do resultado à variável 'soma_dividido'
    int soma_multiplicado = soma_dividido * b; // Cálculo da multiplicação entre 'soma_dividido' e 'b' e atribuição do resultado à variável 'soma_multiplicado'

    printf("A soma dividido pelo maior e multiplicado pelo menor é: %d", soma_multiplicado); // Impressão do resultado final

    return 0;
}

