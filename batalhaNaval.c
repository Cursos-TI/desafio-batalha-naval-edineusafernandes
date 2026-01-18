#include <stdio.h>

int main(){

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    //1. Criando o Tabuleiro (Matriz 10x10)
    int tabuleiro[10][10] = {0};

    //2. Criando navios
    int navioH[3] = {3, 3, 3};
    int navioV[3] = {3, 3, 3};
    int navioDiag1[3] = {3, 3, 3};
    int navioDiag2[3] = {3, 3, 3};

    //3. Coordenadas iniciais
    int linhaH = 2, colunaH = 3;
    int linhaV = 5, colunaV = 6;
    int diagLinha1 = 6, diagColuna1 = 3;
    int diagLinha2 = 1, diagColuna2 = 6;

    //4. Posicionando o navio horizontal
    for (int i = 0; i < 3; i++){
        tabuleiro[linhaH][colunaH + i] = navioH[i];
    } 

    //5. Posicionando o navio vertical
    for (int i = 0; i < 3; i++){
        tabuleiro[linhaV + i][colunaV] = navioV[i];
    }
    //Navioa na diagonal 1
    for (int i = 0; i < 3; i++) {
        tabuleiro[diagLinha1 + i][diagColuna1 + i] = navioDiag1[i];
    }

    //Navioa na diagonal 2
    for (int i = 0; i < 3; i++) {
        tabuleiro[diagLinha2 + i][diagColuna2 + i] = navioDiag2[i];
    }

    //6. Exibindo o Tabuleiro
    printf("TABULEIRO BATALHA NAVAL \n");

    //cabeçalho das colunas
    printf(" ");
    for (int j = 0; j < 10; j++) {
        printf("%c ", linha[j]); //Imprime os números das colunas

    }
    printf("\n");

    //Linhas do tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }


    return 0;
}