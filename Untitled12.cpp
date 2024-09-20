12. Escreva um programa que solicite ao usu�rio 6 n�meros inteiros. Para cada
n�mero, verifique se ele � par ou �mpar. Se o n�mero for par, verifique se � maior
que 10 ou n�o. Se for �mpar, verifique se � menor que 50 ou n�o. (0.4 ponto)
Entrada: 6 n�meros inteiros.
Sa�da: paridade do n�mero e a classifica��o adicional

#include <stdio.h>

int main() {
    int numeros[6];

      Solicita 6 n�meros inteiros ao usu�rio
    for (int i = 0; i < 6; i++) {
        printf("Digite o %d� n�mero inteiro: ", i + 1);
        scanf("%d", &numeros[i]);
    }

     Verifica a paridade e realiza a classifica��o adicional
    for (int i = 0; i < 6; i++) {
        printf("N�mero %d: %d - ", i + 1, numeros[i]);

        if (numeros[i] % 2 == 0) {  Verifica se � par
            printf("Par");
            if (numeros[i] > 10) {
                printf(", maior que 10.\n");
            } else {
                printf(", n�o � maior que 10.\n");
            }
        } else {  � �mpar
            printf("�mpar");
            if (numeros[i] < 50) {
                printf(", menor que 50.\n");
            } else {
                printf(", n�o � menor que 50.\n");
            }
        }
    }

    return 0;
}
