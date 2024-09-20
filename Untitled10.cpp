10. Escreva um programa que peça ao usuário para inserir a idade de 10 pessoas.
Para cada idade, o programa deve classificar a pessoa em uma das categorias:
criança (0-12 anos), adolescente (13-17 anos), adulto (18-64 anos) ou idoso (65
anos ou mais). (0.4 ponto)
Entrada: 10 idades.
Saída: a classificação etária para cada idade

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
            printf("Classificação: Criança\n");
        } else if (idades[i] >= 13 && idades[i] <= 17) {
            printf("Classificação: Adolescente\n");
        } else if (idades[i] >= 18 && idades[i] <= 64) {
            printf("Classificação: Adulto\n");
        } else if (idades[i] >= 65) {
            printf("Classificação: Idoso\n");
        } else {
            printf("Idade inválida!
