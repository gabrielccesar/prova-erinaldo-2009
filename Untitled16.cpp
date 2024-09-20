16. Escreva um programa que apresente um menu com as seguintes op��es:
1. Calcular o fatorial de um n�mero.
2. Sair.
O programa deve solicitar ao usu�rio um n�mero inteiro e calcular o seu fatorial. O
menu deve continuar sendo exibido at� que o usu�rio escolha a op��o de sair. (0.2
ponto)
Entrada: escolha da op��o e um n�mero inteiro.
Sa�da: fatorial do n�mero.

#include <stdio.h>

// Fun��o para calcular o fatorial de um n�mero
unsigned long long fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // O fatorial de 0 e 1 � 1
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
        printf("1. Calcular o fatorial de um n�mero\n");
        printf("2. Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);

         Verifica se a op��o � de sair
        if (opcao == 2) {
            printf("Saindo do programa...\n");
            break;
        }

         Solicita o n�mero para calcular o fatorial
        if (opcao == 1) {
            printf("Digite um n�mero inteiro n�o negativo: ");
            scanf("%d", &numero);

            if (numero < 0) {
                printf("Erro: O n�mero deve ser n�o negativo.\n");
            } else {
                unsigned long long resultado = fatorial(numero);
                printf("Fatorial de %d: %llu\n", numero, resultado);
            }
        } else {
            printf("Op��o inv�lida! Tente novamente.\n");
        }
    } while (opcao != 2);

    return 0;
}
