10. Escreva um programa que pe�a ao usu�rio para inserir a idade de 10 pessoas.
Para cada idade, o programa deve classificar a pessoa em uma das categorias:
crian�a (0-12 anos), adolescente (13-17 anos), adulto (18-64 anos) ou idoso (65
anos ou mais). (0.4 ponto)
Entrada: 10 idades.
Sa�da: a classifica��o et�ria para cada idade

#include <stdio.h>

int main() {
    int idades[10];

     Solicita as idades das 10 pessoas
    for (int i = 0; i < 10; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);
    }

     Classifica cada idade e exibe a categoria
    for (int i = 0; i < 10; i++) {
        printf("Pessoa %d (Idade: %d): ", i + 1, idades[i]);

        if (idades[i] >= 0 && idades[i] <= 12) {
            printf("Classifica��o: Crian�a\n");
        } else if (idades[i] >= 13 && idades[i] <= 17) {
            printf("Classifica��o: Adolescente\n");
        } else if (idades[i] >= 18 && idades[i] <= 64) {
            printf("Classifica��o: Adulto\n");
        } else if (idades[i] >= 65) {
            printf("Classifica��o: Idoso\n");
        } else {
            printf("Idade inv�lida!
