7. Crie um programa que peça ao usuário para inserir as notas de 5 alunos. Para
cada aluno, o programa deve calcular a média. Se a média for maior ou igual a 7.0,
o aluno é aprovado; caso contrário, ele é reprovado. Ao final, o programa deve exibir
a média de cada aluno e se ele foi aprovado ou reprovado. (0.3 ponto)
Entrada: 5 notas (uma por aluno).
Saída: média de cada aluno e status de aprovação.

#include <stdio.h>

int main() {
    float notas[5], media;
    
     Loop para solicitar as notas dos alunos
    for (int i = 0; i < 5; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

     Exibir média e status de aprovação para cada aluno
    for (int i = 0; i < 5; i++) {
        media = notas[i];

         Verifica se a média é maior ou igual a 7.0
        if (media >= 7.0) {
            printf("Aluno %d: Média = %.2f - Aprovado\n", i + 1, media);
        } else {
            printf("Aluno %d: Média = %.2f - Reprovado\n", i + 1, media);
        }
    }

    return 0;
}
