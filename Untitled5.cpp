5. Escreva um programa que pe�a ao usu�rio para inserir 10 n�meros inteiros. O
programa deve contar quantos n�meros s�o pares e quantos s�o �mpares, e exibir
esses valores no final. (0.3 ponto)
Entrada: 10 n�meros inteiros.
Sa�da: quantidade de n�meros pares e �mpares.

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
