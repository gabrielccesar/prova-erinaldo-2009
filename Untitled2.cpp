2. Um n�mero perfeito � aquele que � igual � soma de seus divisores pr�prios
(excluindo ele mesmo). Escreva um programa que solicite ao usu�rio um n�mero
inteiro positivo e verifique se esse n�mero � perfeito. O programa deve utilizar um
la�o para somar os divisores e, no final, informar se o n�mero � perfeito ou n�o. (0.1
ponto)
Entradas: n�mero inteiro positivo.
Sa�da: informar se o n�mero � perfeito ou n�o.

#include <stdio.h>

int main() {
    int numero, soma_divisores = 0;

     Solicita um n�mero inteiro positivo
    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &numero);

     Verifica se o n�mero � positivo
    if (numero <= 0) {
        printf("Por favor, insira um n�mero inteiro positivo.\n");
        return 1;  Finaliza o programa com erro
    }

     La�o para somar os divisores pr�prios
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma_divisores += i;
        }
    }

     Verifica se o n�mero � perfeito
    if (soma_divisores == numero) {
        printf("%d � um n�mero perfeito.\n", numero);
    } else {
        printf("%d n�o � um n�mero perfeito.\n", numero);
    }

    return 0;
}
