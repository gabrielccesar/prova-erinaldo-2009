16. Escreva um programa que apresente um menu com as seguintes opções:
1. Calcular o fatorial de um número.
2. Sair.
O programa deve solicitar ao usuário um número inteiro e calcular o seu fatorial. O
menu deve continuar sendo exibido até que o usuário escolha a opção de sair. (0.2
ponto)
Entrada: escolha da opção e um número inteiro.
Saída: fatorial do número.

#include <stdio.h>

// Função para calcular o fatorial de um número
unsigned long long fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // O fatorial de 0 e 1 é 1
    }
    unsigned long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int opcao, numero;

    do {
         Exibe o menu
        printf("\nMenu:\n");
        printf("1. Calcular o fatorial de um número\n");
        printf("2. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

         Verifica se a opção é de sair
        if (opcao == 2) {
            printf("Saindo do programa...\n");
            break;
        }

         Solicita o número para calcular o fatorial
        if (opcao == 1) {
            printf("Digite um número inteiro não negativo: ");
            scanf("%d", &numero);

            if (numero < 0) {
                printf("Erro: O número deve ser não negativo.\n");
            } else {
                unsigned long long resultado = fatorial(numero);
                printf("Fatorial de %d: %llu\n", numero, resultado);
            }
        } else {
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 2);

    return 0;
}
