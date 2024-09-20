4. Escreva um programa que solicite ao usuário um número decimal e um valor de
base de conversão (entre 2 e 16). O programa deve converter o número decimal
para a base desejada e exibir o resultado. Utilize um laço para realizar a conversão.
(0.1 ponto)
Entradas: número decimal, base de conversão.
Saída: número convertido para a base escolhida.

#include <stdio.h>

void converter_decimal_para_base(int numero, int base) {
    char resultado[20];  Para armazenar o número convertido
    int indice = 0;

     Laço para converter o número decimal para a base desejada
    while (numero > 0) {
        int resto = numero % base;

         Verifica se o resto é maior que 9 para usar letras
        if (resto > 9) {
            resultado[indice] = 'A' + (resto - 10);  'A' é 10, 'B' é 11, etc.
        } else {
            resultado[indice] = '0' + resto;  '0' é 0, '1' é 1, etc.
        }
        
        indice++;
        numero /= base;
    }

     Exibe o resultado na ordem correta
    printf("Número convertido: ");
    for (int j = indice - 1; j >= 0; j--) {
        putchar(resultado[j]);
    }
    printf("\n");
}

int main() {
    int numero, base;

     Solicita o número decimal
    printf("Digite um número decimal: ");
    scanf("%d", &numero);

     Solicita a base de conversão
    printf("Digite a base de conversão (entre 2 e 16): ");
    scanf("%d", &base);

     Verifica se a base está dentro do intervalo permitido
    if (base < 2 || base > 16) {
        printf("Base inválida. Deve ser entre 2 e 16.\n");
        return 1;  Finaliza o programa com erro
    }

     Chama a função para conversão
    converter_decimal_para_base(numero, base);

    return 0;
}
