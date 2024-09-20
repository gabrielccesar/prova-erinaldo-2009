8. Escreva um programa que sorteie um número entre 1 e 100 e permita ao usuário
tentar adivinhar o número. O programa deve dar dicas se o número sorteado é
maior ou menor que o palpite do usuário. O usuário tem no máximo 7 tentativas
para acertar. No final, informe se o usuário acertou ou não. (0.3 ponto)
Entrada: palpites do usuário.
Saída: dicas (maior/menor) e resultado final (acertou ou esgotou tentativas).

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_sorteado, palpite, tentativas = 0;
    const int max_tentativas = 7;

     Inicializa o gerador de números aleatórios
    srand(time(NULL));
    numero_sorteado = rand() % 100 + 1;  Sorteia um número entre 1 e 100

    printf("Adivinhe o número (entre 1 e 100). Você tem até %d tentativas.\n", max_tentativas);

     Loop para permitir ao usuário fazer palpites
    while (tentativas < max_tentativas) {
        printf("Tentativa %d: ", tentativas + 1);
        scanf("%d", &palpite);

        tentativas++;

         Verifica o palpite
        if (palpite == numero_sorteado) {
            printf("Parabéns! Você acertou o número: %d\n", numero_sorteado);
            break;
        } else if (palpite < numero_sorteado) {
            printf("O número sorteado é maior que %d. Tente novamente.\n", palpite);
        } else {
            printf("O número sorteado é menor que %d. Tente novamente.\n", palpite);
       
