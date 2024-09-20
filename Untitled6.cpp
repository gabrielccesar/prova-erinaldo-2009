6. Escreva um programa que solicite dois n�meros inteiros positivos ao usu�rio: um
valor inicial e um valor final. O programa deve ent�o exibir todos os n�meros primos
dentro desse intervalo. Se n�o houver n�meros primos no intervalo, o programa
deve informar isso. (0.3 ponto)
Entrada: dois n�meros inteiros positivos (inicial e final).
Sa�da: n�meros primos no intervalo ou uma mensagem informando que n�o h�
n�meros primos no intervalo ou uma mensagem informando que n�o h� numeros primos.

#include <stdio.h>

int main() {
    int numeros[10];
    int pares = 0, impares = 0;

     Solicita ao usu�rio para inserir 10 n�meros inteiros
    printf("Digite 10 n�meros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("N�mero %d: ", i + 1);
        scanf("%d", &numeros[i]);

         Verifica se o n�mero � par ou �mpar
        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

     Exibe o resultado
    printf("\nQuantidade de n�meros pares: %d\n", pares);
    printf("Quantidade de n�meros �mpares: %d\n", impares);

    return 0;
}
