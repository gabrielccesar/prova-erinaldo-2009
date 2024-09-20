1. Escreva um programa em C que solicite ao usu�rio o valor inicial de um
investimento, a taxa de juros anual (em porcentagem) e o n�mero de anos que o
dinheiro ser� investido. O programa deve calcular o valor final do investimento ao
final de cada ano, aplicando os juros compostos, e mostrar uma tabela com o valor
acumulado ano a ano. (0.1 ponto)
Entradas: valor inicial, taxa de juros anual, n�mero de anos.
Sa�da: tabela mostrando o ano e o valor do investimento ao final de cada ano

#include <stdio.h>
#include <math.h>

int main() {
    double valor_inicial, taxa_juros, valor_final;
    int anos;

     Solicita as entradas do usu�rio
    printf("Digite o valor inicial do investimento: ");
    scanf("%lf", &valor_inicial);
    
    printf("Digite a taxa de juros anual (em porcentagem): ");
    scanf("%lf", &taxa_juros);
    
    printf("Digite o n�mero de anos: ");
    scanf("%d", &anos);

     Converte a taxa de juros de porcentagem para decimal
    taxa_juros /= 100;

     Cabe�alho da tabela
    printf("\nAno\tValor Acumulado\n");
    printf("-----------------------\n");

     C�lculo do valor final ano a ano
    for (int i = 1; i <= anos; i++) {
        valor_final = valor_inicial * pow(1 + taxa_juros, i);
        printf("%d\t%.2f\n", i, valor_final);
    }

    return 0;
}
