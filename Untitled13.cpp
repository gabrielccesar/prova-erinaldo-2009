13. Escreva um programa que apresente um menu com as seguintes opções:
1. Converter de Celsius para Fahrenheit.
2. Converter de Fahrenheit para Celsius.
3. Sair.
O programa deve continuar exibindo o menu até que o usuário escolha a opção de
sair. (0.2 ponto)
Entrada: escolha da opção e o valor da temperatura.
Saída: temperatura convertida

#include <stdio.h>

int main() {
    int opcao;
    float temperatura, resultado;

    do {
        Exibe o menu
        printf("\nMenu de Conversão de Temperatura:\n");
        printf("1. Converter de Celsius para Fahrenheit\n");
        printf("2. Converter de Fahrenheit para Celsius\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                 Conversão de Celsius para Fahrenheit
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &temperatura);
                resultado = (temperatura * 9/5) + 32;
                printf("Temperatura em Fahrenheit: %.2f\n", resultado);
                break;

            case 2:
                 Conversão de Fahrenheit para Celsius
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%f", &temperatura);
                resultado = (temperatura - 32) * 5/9;
                printf("Temperatura em Celsius: %.2f\n", resultado);
             
