14. Escreva um programa que apresente um menu com as seguintes opções:
1. Adição.
2. Subtração.
3. Multiplicação.
4. Divisão.
5. Sair.
O programa deve solicitar dois números e realizar a operação escolhida. Deve
continuar exibindo o menu até que o usuário escolha a opção de sair. (0.2 ponto)
Entrada: escolha da operação e dois números.
Saída: resultado da operação


#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
         Exibe o menu
        printf("\nMenu de Operações:\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

         Verifica se a opção é de sair
        if (opcao == 5) {
            printf("Saindo do programa...\n");
            break;
        }

         Solicita os números
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);

         Realiza a operação escolhida
        switch (opcao) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado da adição: %.2f\n", resultado);
                break;

            case 2:
                resultado = num1 - num2;
                printf("Resultado da subtração: %.2f\n", resulta
