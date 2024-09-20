9. Escreva um programa que pe�a ao usu�rio para inserir as notas de 5 alunos.
Para cada aluno, o programa deve calcular a m�dia de duas provas. Se a m�dia for
maior ou igual a 7.0, o aluno � aprovado. Se a m�dia estiver entre 5.0 e 6.9, o aluno
vai para a recupera��o, e se for menor que 5.0, o aluno � reprovado. (0.4 ponto)
Entrada: 10 notas (2 para cada aluno).
Sa�da: m�dia de cada aluno e status (aprovado, recupera��o ou reprovado).

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

     Exibir m�dia e status para cada aluno
    for (int i = 0; i < 5; i++) {
        media = (notas[i][0] + notas[i][1]) / 2;

         Verifica o status com base na m�dia
        if (media >= 7.0) {
            printf("Aluno %d: M�dia = %.2f - Aprovado\n", i + 1, media);
        } else if (media >= 5.0) {
            printf("Aluno %d: M�dia = %.2f - Recupera��o\n", i + 1, media);
        } else {
            printf("Aluno %d: M�dia = %.2f - Reprovado\n", i + 1, media);
        }
    }

    return 0;
}
