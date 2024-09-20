2. Um número perfeito é aquele que é igual à soma de seus divisores próprios
(excluindo ele mesmo). Escreva um programa que solicite ao usuário um número
inteiro positivo e verifique se esse número é perfeito. O programa deve utilizar um
laço para somar os divisores e, no final, informar se o número é perfeito ou não. (0.1
ponto)
Entradas: número inteiro positivo.
Saída: informar se o número é perfeito ou não.

#include <stdio.h>

int main() {
    int numero, soma_divisores = 0;

     Solicita um número inteiro positivo
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

     Verifica se o número é positivo
    if (numero <= 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
        return 1;  Finaliza o programa com erro
    }

     Laço para somar os divisores próprios
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma_divisores += i;
        }
    }

     Verifica se o número é perfeito
    if (soma_divisores == numero) {
        printf("%d é um número perfeito.\n", numero);
    } else {
        printf("%d não é um número perfeito.\n", numero);
    }

    return 0;
}
