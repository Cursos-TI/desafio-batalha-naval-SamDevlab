#include <stdio.h>


int main(){
    int tabuleiro[10][10] = {0};
    int linha, coluna;
    // Colocando um navio na posição (2,3)(2,4)(2,5)




    tabuleiro[2][3] = 3; // 3 representa um navio
    tabuleiro[2][4] = 3; // 3 representa um navio
    tabuleiro[2][5] = 3; // 3 representa um navio

    //navio 2 na posição (5,6)(6,6)(7,6)
    tabuleiro[5][6] = 3; // 3 representa um navio
    tabuleiro[6][6] = 3; // 3 representa um navio
    tabuleiro[7][6] = 3; // 3 representa um navio

    // Imprimindo o tabuleiro
    for(linha = 0; linha < 10; linha++){
        for(coluna = 0; coluna < 10; coluna++){
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

}