6. Escreva um programa que solicite dois números inteiros positivos ao usuário: um
valor inicial e um valor final. O programa deve então exibir todos os números primos
dentro desse intervalo. Se não houver números primos no intervalo, o programa
deve informar isso. (0.3 ponto)
Entrada: dois números inteiros positivos (inicial e final).
Saída: números primos no intervalo ou uma mensagem informando que não há
números primos no intervalo ou uma mensagem informando que não há numeros primos.

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
