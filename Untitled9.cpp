9. Escreva um programa que peça ao usuário para inserir as notas de 5 alunos.
Para cada aluno, o programa deve calcular a média de duas provas. Se a média for
maior ou igual a 7.0, o aluno é aprovado. Se a média estiver entre 5.0 e 6.9, o aluno
vai para a recuperação, e se for menor que 5.0, o aluno é reprovado. (0.4 ponto)
Entrada: 10 notas (2 para cada aluno).
Saída: média de cada aluno e status (aprovado, recuperação ou reprovado).

#include <stdio.h>

int main() {
    float notas[5][2];  Array para armazenar as duas notas de cada aluno
    float media;

     Loop para solicitar as notas dos alunos
    for (int i = 0; i < 5; i++) {
        printf("Digite a nota da prova 1 do aluno %d: ", i + 1);
        scanf("%f", &notas[i][0]);
        
        printf("Digite a nota da prova 2 do aluno %d: ", i + 1);
        scanf("%f", &notas[i][1]);
    }

     Exibir média e status para cada aluno
    for (int i = 0; i < 5; i++) {
        media = (notas[i][0] + notas[i][1]) / 2;

         Verifica o status com base na média
        if (media >= 7.0) {
            printf("Aluno %d: Média = %.2f - Aprovado\n", i + 1, media);
        } else if (media >= 5.0) {
            printf("Aluno %d: Média = %.2f - Recuperação\n", i + 1, media);
        } else {
            printf("Aluno %d: Média = %.2f - Reprovado\n", i + 1, media);
        }
    }

    return 0;
}
