14. Escreva um programa que apresente um menu com as seguintes op��es:
1. Adi��o.
2. Subtra��o.
3. Multiplica��o.
4. Divis�o.
5. Sair.
O programa deve solicitar dois n�meros e realizar a opera��o escolhida. Deve
continuar exibindo o menu at� que o usu�rio escolha a op��o de sair. (0.2 ponto)
Entrada: escolha da opera��o e dois n�meros.
Sa�da: resultado da opera��o


#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
         Exibe o menu
        printf("\nMenu de Opera��es:\n");
        printf("1. Adi��o\n");
        printf("2. Subtra��o\n");
        printf("3. Multiplica��o\n");
        printf("4. Divis�o\n");
        printf("5. Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);

         Verifica se a op��o � de sair
        if (opcao == 5) {
            printf("Saindo do programa...\n");
            break;
        }

         Solicita os n�meros
        printf("Digite o primeiro n�mero: ");
        scanf("%f", &num1);
        printf("Digite o segundo n�mero: ");
        scanf("%f", &num2);

         Realiza a opera��o escolhida
        switch (opcao) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado da adi��o: %.2f\n", resultado);
                break;

            case 2:
                resultado = num1 - num2;
                printf("Resultado da subtra��o: %.2f\n", resulta
