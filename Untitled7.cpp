7. Crie um programa que pe�a ao usu�rio para inserir as notas de 5 alunos. Para
cada aluno, o programa deve calcular a m�dia. Se a m�dia for maior ou igual a 7.0,
o aluno � aprovado; caso contr�rio, ele � reprovado. Ao final, o programa deve exibir
a m�dia de cada aluno e se ele foi aprovado ou reprovado. (0.3 ponto)
Entrada: 5 notas (uma por aluno).
Sa�da: m�dia de cada aluno e status de aprova��o.

#include <stdio.h>

int main() {
    float notas[5], media;
    
     Loop para solicitar as notas dos alunos
    for (int i = 0; i < 5; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

     Exibir m�dia e status de aprova��o para cada aluno
    for (int i = 0; i < 5; i++) {
        media = notas[i];

         Verifica se a m�dia � maior ou igual a 7.0
        if (media >= 7.0) {
            printf("Aluno %d: M�dia = %.2f - Aprovado\n", i + 1, media);
        } else {
            printf("Aluno %d: M�dia = %.2f - Reprovado\n", i + 1, media);
        }
    }

    return 0;
}
