4. Escreva um programa que solicite ao usu�rio um n�mero decimal e um valor de
base de convers�o (entre 2 e 16). O programa deve converter o n�mero decimal
para a base desejada e exibir o resultado. Utilize um la�o para realizar a convers�o.
(0.1 ponto)
Entradas: n�mero decimal, base de convers�o.
Sa�da: n�mero convertido para a base escolhida.

#include <stdio.h>

void converter_decimal_para_base(int numero, int base) {
    char resultado[20];  Para armazenar o n�mero convertido
    int indice = 0;

     La�o para converter o n�mero decimal para a base desejada
    while (numero > 0) {
        int resto = numero % base;

         Verifica se o resto � maior que 9 para usar letras
        if (resto > 9) {
            resultado[indice] = 'A' + (resto - 10);  'A' � 10, 'B' � 11, etc.
        } else {
            resultado[indice] = '0' + resto;  '0' � 0, '1' � 1, etc.
        }
        
        indice++;
        numero /= base;
    }

     Exibe o resultado na ordem correta
    printf("N�mero convertido: ");
    for (int j = indice - 1; j >= 0; j--) {
        putchar(resultado[j]);
    }
    printf("\n");
}

int main() {
    int numero, base;

     Solicita o n�mero decimal
    printf("Digite um n�mero decimal: ");
    scanf("%d", &numero);

     Solicita a base de convers�o
    printf("Digite a base de convers�o (entre 2 e 16): ");
    scanf("%d", &base);

     Verifica se a base est� dentro do intervalo permitido
    if (base < 2 || base > 16) {
        printf("Base inv�lida. Deve ser entre 2 e 16.\n");
        return 1;  Finaliza o programa com erro
    }

     Chama a fun��o para convers�o
    converter_decimal_para_base(numero, base);

    return 0;
}
