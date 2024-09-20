5. Escreva um programa que peça ao usuário para inserir 10 números inteiros. O
programa deve contar quantos números são pares e quantos são ímpares, e exibir
esses valores no final. (0.3 ponto)
Entrada: 10 números inteiros.
Saída: quantidade de números pares e ímpares.

#include <stdio.h>

int main() {
    int numeros[10];
    int pares = 0, impares = 0;

     Solicita ao usuário para inserir 10 números inteiros
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);

         Verifica se o número é par ou ímpar
        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

     Exibe o resultado
    printf("\nQuantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    return 0;
}
