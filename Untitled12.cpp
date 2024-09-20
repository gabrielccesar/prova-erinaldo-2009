12. Escreva um programa que solicite ao usuário 6 números inteiros. Para cada
número, verifique se ele é par ou ímpar. Se o número for par, verifique se é maior
que 10 ou não. Se for ímpar, verifique se é menor que 50 ou não. (0.4 ponto)
Entrada: 6 números inteiros.
Saída: paridade do número e a classificação adicional

#include <stdio.h>

int main() {
    int numeros[6];

      Solicita 6 números inteiros ao usuário
    for (int i = 0; i < 6; i++) {
        printf("Digite o %d° número inteiro: ", i + 1);
        scanf("%d", &numeros[i]);
    }

     Verifica a paridade e realiza a classificação adicional
    for (int i = 0; i < 6; i++) {
        printf("Número %d: %d - ", i + 1, numeros[i]);

        if (numeros[i] % 2 == 0) {  Verifica se é par
            printf("Par");
            if (numeros[i] > 10) {
                printf(", maior que 10.\n");
            } else {
                printf(", não é maior que 10.\n");
            }
        } else {  É ímpar
            printf("Ímpar");
            if (numeros[i] < 50) {
                printf(", menor que 50.\n");
            } else {
                printf(", não é menor que 50.\n");
            }
        }
    }

    return 0;
}
