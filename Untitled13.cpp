13. Escreva um programa que apresente um menu com as seguintes op��es:
1. Converter de Celsius para Fahrenheit.
2. Converter de Fahrenheit para Celsius.
3. Sair.
O programa deve continuar exibindo o menu at� que o usu�rio escolha a op��o de
sair. (0.2 ponto)
Entrada: escolha da op��o e o valor da temperatura.
Sa�da: temperatura convertida

#include <stdio.h>

int main() {
    int opcao;
    float temperatura, resultado;

    do {
        Exibe o menu
        printf("\nMenu de Convers�o de Temperatura:\n");
        printf("1. Converter de Celsius para Fahrenheit\n");
        printf("2. Converter de Fahrenheit para Celsius\n");
        printf("3. Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                 Convers�o de Celsius para Fahrenheit
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &temperatura);
                resultado = (temperatura * 9/5) + 32;
                printf("Temperatura em Fahrenheit: %.2f\n", resultado);
                break;

            case 2:
                 Convers�o de Fahrenheit para Celsius
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%f", &temperatura);
                resultado = (temperatura - 32) * 5/9;
                printf("Temperatura em Celsius: %.2f\n", resultado);
             
