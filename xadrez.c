#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
//variaveis
int bispo = 1;
int rainha = 1;

//mover bispo 5 casas na diagonal superior direita

printf("Movimentação da peça Bispo: \n");
do
{
    printf("Cima Direita\n");// direção do movimento
    bispo++; //incremento
} while (bispo <= 5);

//mover rainha 8 casas a esqueda

printf("Movimentação da peça Rainha: \n");
while (rainha <= 8)
{
    printf("Esquerda \n");// direção do movimento
    rainha++; //incremento
}

//mover torre 5 casas a direita

printf("Movimentação da peça Torre: \n");
for (int torre = 1; torre <= 5 ; torre++)
{
    printf("Direita \n");// direção do movimento
}
    return 0;
}
