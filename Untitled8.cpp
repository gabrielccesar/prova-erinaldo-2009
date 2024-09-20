8. Escreva um programa que sorteie um n�mero entre 1 e 100 e permita ao usu�rio
tentar adivinhar o n�mero. O programa deve dar dicas se o n�mero sorteado �
maior ou menor que o palpite do usu�rio. O usu�rio tem no m�ximo 7 tentativas
para acertar. No final, informe se o usu�rio acertou ou n�o. (0.3 ponto)
Entrada: palpites do usu�rio.
Sa�da: dicas (maior/menor) e resultado final (acertou ou esgotou tentativas).

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_sorteado, palpite, tentativas = 0;
    const int max_tentativas = 7;

     Inicializa o gerador de n�meros aleat�rios
    srand(time(NULL));
    numero_sorteado = rand() % 100 + 1;  Sorteia um n�mero entre 1 e 100

    printf("Adivinhe o n�mero (entre 1 e 100). Voc� tem at� %d tentativas.\n", max_tentativas);

     Loop para permitir ao usu�rio fazer palpites
    while (tentativas < max_tentativas) {
        printf("Tentativa %d: ", tentativas + 1);
        scanf("%d", &palpite);

        tentativas++;

         Verifica o palpite
        if (palpite == numero_sorteado) {
            printf("Parab�ns! Voc� acertou o n�mero: %d\n", numero_sorteado);
            break;
        } else if (palpite < numero_sorteado) {
            printf("O n�mero sorteado � maior que %d. Tente novamente.\n", palpite);
        } else {
            printf("O n�mero sorteado � menor que %d. Tente novamente.\n", palpite);
       
