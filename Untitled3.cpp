3. Escreva um programa em C que solicite ao usu�rio as notas de 5 alunos e suas
respectivas pesos, calcule a m�dia ponderada de cada aluno e ao final exiba a
m�dia final da turma. (0.1 ponto)
Entradas: 5 pares de valores (nota e peso) para cada aluno.
Sa�da: a m�dia ponderada de cada aluno e a m�dia final da turma.

#include <stdio.h>

int main() {
    int i;
    double nota, peso, media, soma_ponderada = 0, soma_pesos = 0;

      Loop para 5 alunos
    for (i = 1; i <= 5; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%lf", &nota);
        
        printf("Digite o peso da nota do aluno %d: ", i);
        scanf("%lf", &peso);

         Calcula a m�dia ponderada para o aluno atual
        media = nota * peso;
        
         Acumula a soma ponderada e a soma dos pesos
        soma_ponderada += media;
        soma_pesos += peso;

         Exibe a m�dia ponderada do aluno
        printf("M�dia ponderada do aluno %d: %.2f\n", i, media);
    }

    Calcula a m�dia final da turma
    double media_final = soma_ponderada / soma_pesos;

     Exibe a m�dia final da turma
    printf("\nM�dia final da turma: %.2f\n", media_final);

    return 0;
}
